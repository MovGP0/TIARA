/* Ghidra address: 00bc12a0 */
/* Ghidra symbol: FUN_00bc12a0 */


void FUN_00bc12a0(longlong param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    FUN_00bc0bf0(param_1,0);
  }
  else {
    FUN_00bc0bf0(param_1,1);
  }
  if ((param_2 & 2) != 0) {
    FUN_00bc0bf0(param_1,*(byte *)(param_1 + 0x28) | 2);
  }
  if ((param_2 & 4) != 0) {
    FUN_00bc0bf0(param_1,*(byte *)(param_1 + 0x28) | 4);
  }
  if ((param_2 & 8) != 0) {
    FUN_00bc0bf0(param_1,*(byte *)(param_1 + 0x28) | 8);
  }
  return;
}

