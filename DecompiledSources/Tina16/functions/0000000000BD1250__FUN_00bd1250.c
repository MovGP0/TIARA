/* Ghidra address: 00bd1250 */
/* Ghidra symbol: FUN_00bd1250 */


void FUN_00bd1250(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == '\0') {
    iVar1 = FUN_00bd10d0(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
      }
    }
    else {
      lVar2 = FUN_00bd10f0(param_1);
      if (*(int *)(lVar2 + 0x28) == *(int *)(param_1 + 0x2c)) {
        *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
      }
    }
  }
  else {
    iVar1 = FUN_00bd10d0(param_1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      lVar2 = FUN_00bd10f0(param_1);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar2 + 0x28);
    }
  }
  return;
}

