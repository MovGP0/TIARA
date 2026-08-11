/* Ghidra address: 007e6f50 */
/* Ghidra symbol: FUN_007e6f50 */


undefined8
FUN_007e6f50(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined2 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  cVar1 = FUN_007e5db0(param_1);
  if (cVar1 == '\0') {
    uVar4 = FUN_00429820(param_2,param_3,param_4,param_5,param_6);
  }
  else {
    lVar5 = 0;
    uVar3 = thunk_FUN_03af2864(param_2,param_3,param_6);
    if ((uVar3 & 0x10) == 0) {
      iVar2 = thunk_FUN_0413f56d(param_2,param_3);
      if (iVar2 != -1) {
        lVar5 = FUN_007e5b00(param_1,iVar2,0);
      }
    }
    else {
      uVar4 = thunk_FUN_03ecce03(param_2,param_3);
      lVar5 = FUN_007e5b00(param_1,uVar4,1);
    }
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      *param_4 = 0;
      FUN_00442660(param_4,*(undefined8 *)(lVar5 + 0x78),param_5);
      uVar4 = FUN_00414d00(param_4);
    }
  }
  return uVar4;
}

