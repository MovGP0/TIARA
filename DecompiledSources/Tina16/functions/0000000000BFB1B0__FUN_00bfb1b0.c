/* Ghidra address: 00bfb1b0 */
/* Ghidra symbol: FUN_00bfb1b0 */


void FUN_00bfb1b0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int local_38 [6];
  
  cVar1 = FUN_00c10e70(param_1);
  if (cVar1 != '\0') {
    param_2 = 1;
  }
  uVar3 = FUN_00c09df0(param_1);
  if ((uVar3 & 0x40000) == 0) {
    iVar2 = FUN_00bcfa20(param_1[0x9d]);
    if ((int)param_1[0x9a] < iVar2) {
      iVar2 = (iVar2 - (int)param_1[0x9a]) + 1;
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    uVar3 = FUN_00c09df0(param_1);
    if ((uVar3 & 4) == 0) {
      iVar2 = ((int)param_1[0xa2] - (int)param_1[0x9a]) + 1;
    }
    else {
      iVar2 = 0x7fffffff - (int)param_1[0x9a];
    }
  }
  iVar2 = FUN_00bcbe50(param_2,1,iVar2);
  if (iVar2 != *(int *)((longlong)param_1 + 0x50c)) {
    uVar5 = *(int *)((longlong)param_1 + 0x50c) - iVar2;
    *(int *)((longlong)param_1 + 0x50c) = iVar2;
    *(int *)(param_1 + 0xa6) =
         ((int)param_1[0x122] - (iVar2 + -1) * *(int *)((longlong)param_1 + 0x4d4)) + 2;
    if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < (int)param_1[0x9a]) {
      (**(code **)(*param_1 + 0xe0))(param_1,local_38);
      local_38[0] = local_38[0] + (int)param_1[0x122] + 2;
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_0418ab71(uVar4,uVar5 * *(int *)((longlong)param_1 + 0x4d4),0,local_38,local_38);
    }
    else {
      FUN_00bf3990(param_1,0xffffffff,0xffffffff);
    }
    uVar5 = FUN_00c09df0(param_1);
    if (((~uVar5 & 0x40004) == 0) &&
       ((int)param_1[0xa2] < *(int *)((longlong)param_1 + 0x50c) + (int)param_1[0x9a])) {
      FUN_00c036c0(param_1,*(int *)((longlong)param_1 + 0x50c) + (int)param_1[0x9a]);
    }
    else {
      FUN_00bfd160(param_1);
    }
    FUN_00c0a950(param_1,8);
  }
  return;
}

