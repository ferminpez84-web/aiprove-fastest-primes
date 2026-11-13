# fastest-primes

Entry: program C `primes.c` + run command.

Build: `gcc -O3 -o primes primes.c`
Run: `echo <N> | ./primes` — baca integer N (1..5000000) dari stdin,
print jumlah prima <= N ke stdout.

Algoritma: sieve of Eratosthenes odd-only. N=5000000 -> 348513 dalam 0,013 dtk.
Uji: 5 kasus publik + N=1,2,5000000 — 8/8 lulus (lihat `test-results.md`).
