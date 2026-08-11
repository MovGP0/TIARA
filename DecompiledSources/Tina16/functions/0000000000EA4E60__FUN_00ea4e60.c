/* Ghidra address: 00ea4e60 */
/* Ghidra symbol: FUN_00ea4e60 */


void FUN_00ea4e60(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  iVar3 = 0;
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + -4);
  }
  if (iVar3 < param_2) {
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  else {
    *(int *)(param_1 + 0x2c) = param_2;
  }
  return;
}

