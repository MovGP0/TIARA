/* Ghidra address: 01447750 */
/* Ghidra symbol: FUN_01447750 */


void FUN_01447750(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xb4) = 1;
  FUN_00efdf60(0x4059000000000000,param_1);
  if ((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
    FUN_019b7d00(param_1 + 0xb8,param_1);
  }
  else {
    FUN_019b9110(param_1);
  }
  return;
}

