#!/usr/bin/env bash
set -u
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
TMP="$(mktemp -d)" || exit 1
trap 'rm -rf "$TMP"' EXIT
pass=0
fail=0

for main in "$SCRIPT_DIR"/C*/ex*/main.c "$SCRIPT_DIR"/Rush00/ex00/main.c; do
    [ -f "$main" ] || continue
    rel="${main#"$SCRIPT_DIR"/}"
    ex="${rel%/main.c}"
    sources=()
    includes=()
    args=()
    case "$ex" in
        C08/ex00)
            sources=("$ROOT"/C09/ex00/*.c)
            includes=("-I$ROOT/C08/ex00") ;;
        C08/ex01|C08/ex02|C08/ex03)
            includes=("-I$ROOT/$ex") ;;
        C08/ex04)
            sources=("$ROOT/C08/ex04/ft_strs_to_tab.c")
            includes=("-I$ROOT/C08/ex04") ;;
        C08/ex05)
            sources=("$ROOT/C08/ex04/ft_strs_to_tab.c"
                     "$ROOT/C08/ex05/ft_show_tab.c")
            includes=("-I$ROOT/C08/ex05") ;;
        C09/ex00)
            sources=("$ROOT/C09/ex00"/*.c)
            includes=("-I$ROOT/C09/ex01/includes") ;;
        C09/ex01)
            sources=("$ROOT/C09/ex01/srcs"/*.c)
            includes=("-I$ROOT/C09/ex01/includes") ;;
        Rush00/ex00)
            sources=("$ROOT/Rush00/ex00/ft_putchar.c"
                     "$ROOT/Rush00/ex00/rush00.c") ;;
        *)  sources=("$ROOT/$ex"/*.c) ;;
    esac
    printf '%s\n' "===== $ex ====="
    if cc -Wall -Wextra -Werror "${includes[@]}" "$main" \
        "${sources[@]}" -o "$TMP/test" && "$TMP/test" "${args[@]}"; then
        pass=$((pass + 1))
    else
        fail=$((fail + 1))
        echo "FAILED: $ex"
    fi
done

for ex in C06/ex00 C06/ex01 C06/ex02; do
    printf '%s\n' "===== $ex (own main) ====="
    if cc -Wall -Wextra -Werror "$ROOT/$ex"/*.c -o "$TMP/test" && \
        "$TMP/test" one two; then
        pass=$((pass + 1))
    else
        fail=$((fail + 1))
        echo "FAILED: $ex"
    fi
done

printf '%s\n' '===== Rush01/ex00 (own main) ====='
if cc -Wall -Wextra -Werror "$ROOT/Rush01/ex00"/*.c -o "$TMP/test" && \
    "$TMP/test" '4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2'; then
    pass=$((pass + 1))
else
    fail=$((fail + 1))
    echo 'FAILED: Rush01/ex00'
fi
printf '\nPASSED: %s | FAILED: %s\n' "$pass" "$fail"
[ "$fail" -eq 0 ]
