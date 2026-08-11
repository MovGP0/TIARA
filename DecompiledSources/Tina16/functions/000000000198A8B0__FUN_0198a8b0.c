/* Ghidra address: 0198a8b0 */
/* Ghidra symbol: FUN_0198a8b0 */


void FUN_0198a8b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = FUN_00b94e60(param_1,0);
  lVar2 = FUN_00b94e60(param_1,0);
  iVar3 = FUN_01cefe00(param_2,param_3,*(undefined4 *)(lVar1 + 8),*(undefined4 *)(lVar2 + 0xc));
  if (iVar3 == -1) {
    lVar1 = FUN_00b94e60(param_1,0);
    *(undefined4 *)(lVar1 + 8) = param_2;
    lVar1 = FUN_00b94e60(param_1,0);
    *(undefined4 *)(lVar1 + 0xc) = param_3;
  }
  else {
    lVar1 = FUN_00b94e60(param_1,*(int *)(param_1 + 0x10) + -1);
    lVar2 = FUN_00b94e60(param_1,*(int *)(param_1 + 0x10) + -1);
    iVar3 = FUN_01cefe00(param_2,param_3,*(undefined4 *)(lVar1 + 8),*(undefined4 *)(lVar2 + 0xc));
    if (iVar3 == 1) {
      lVar1 = FUN_00b94e60(param_1,*(int *)(param_1 + 0x10) + -1);
      *(undefined4 *)(lVar1 + 8) = param_2;
      lVar1 = FUN_00b94e60(param_1,*(int *)(param_1 + 0x10) + -1);
      *(undefined4 *)(lVar1 + 0xc) = param_3;
    }
  }
  return;
}

