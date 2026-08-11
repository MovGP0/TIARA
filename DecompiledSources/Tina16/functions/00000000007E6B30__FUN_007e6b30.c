/* Ghidra address: 007e6b30 */
/* Ghidra symbol: FUN_007e6b30 */


undefined8
FUN_007e6b30(longlong param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
            undefined2 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if ((param_3 & 0x10) == 0) {
    iVar1 = thunk_FUN_0413f56d(param_2,param_4);
    if (iVar1 != -1) {
      lVar3 = FUN_007e5b00(*(undefined8 *)(param_1 + 0x80),iVar1,0);
    }
  }
  else {
    uVar2 = thunk_FUN_03ecce03(param_2,param_4);
    lVar3 = FUN_007e5b00(*(undefined8 *)(param_1 + 0x80),uVar2,1);
  }
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007f9a80(param_5,*(undefined8 *)(lVar3 + 0x78));
  }
  return uVar2;
}

