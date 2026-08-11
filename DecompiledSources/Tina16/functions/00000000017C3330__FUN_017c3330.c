/* Ghidra address: 017c3330 */
/* Ghidra symbol: FUN_017c3330 */


void FUN_017c3330(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_01cf0e90(param_1,param_2,param_3);
  if (-1 < *(int *)((longlong)param_1 + 0x1c)) {
    (**(code **)(*param_1 + 0x140))
              (param_1,param_2,*(int *)((longlong)param_1 + 0x1c) + -1,param_1 + 0x57);
    *(undefined4 *)((longlong)param_1 + 0x2b4) = *(undefined4 *)((longlong)param_1 + 0x1c);
    if (param_3 != 0) {
      lVar1 = param_1[0x5a];
      uVar4 = FUN_004aeac0(lVar1,0);
      FUN_004aec30(lVar1,1,uVar4);
      param_3 = param_3 + 2;
      *(int *)((longlong)param_1 + 0x1c) = param_3;
    }
    iVar2 = FUN_017c2b70(param_1);
    if (param_3 != iVar2 * 2 + -2) {
      lVar1 = param_1[0x5a];
      iVar2 = *(int *)(lVar1 + 0x10) + -1;
      uVar4 = FUN_004aeac0(lVar1,iVar2);
      FUN_004aec30(lVar1,iVar2,uVar4);
    }
    if (0 < *(int *)((longlong)param_1 + 0x1c)) {
      uVar3 = FUN_017c2c60(param_1,*(int *)((longlong)param_1 + 0x1c) / 2 + -1);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
    uVar3 = FUN_017c2c60(param_1,(longlong)*(int *)((longlong)param_1 + 0x1c) / 2 & 0xffffffff);
    *(undefined4 *)((longlong)param_1 + 0x2c4) = uVar3;
    iVar2 = FUN_017c2b70(param_1);
    if (*(int *)((longlong)param_1 + 0x1c) < iVar2 * 2 + -2) {
      uVar3 = FUN_017c2c60(param_1,*(int *)((longlong)param_1 + 0x1c) / 2 + 1);
      *(undefined4 *)(param_1 + 0x59) = uVar3;
    }
  }
  return;
}

