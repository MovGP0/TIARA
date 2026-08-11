/* Ghidra address: 004dc580 */
/* Ghidra symbol: FUN_004dc580 */


bool FUN_004dc580(longlong param_1)

{
  return (*(uint *)(param_1 + 0x20) & 3) == 3;
}

