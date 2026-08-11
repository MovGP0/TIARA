/* Ghidra address: 00d475c0 */
/* Ghidra symbol: FUN_00d475c0 */


void FUN_00d475c0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (*param_2 == 0x14) {
    (**(code **)(*param_1 + 0x48))(param_1);
    iVar2 = thunk_FUN_041b2403(param_1[1],0x111f,0,0);
    iVar3 = FUN_00788c10(param_1);
    if ((iVar2 != iVar3) && ((*(byte *)((longlong)param_1 + 0x42) & 1) != 0)) {
      lVar1 = param_1[1];
      uVar4 = FUN_00788c10(param_1);
      thunk_FUN_041b2403(lVar1,0x111d,0,uVar4);
      lVar1 = param_1[1];
      uVar4 = FUN_00788c20(param_1);
      thunk_FUN_041b2403(lVar1,0x111e,0,uVar4);
    }
    uVar5 = FUN_00788400(param_1,param_2);
    *(undefined8 *)(param_2 + 6) = uVar5;
  }
  else {
    FUN_00d3dfa0(param_1,param_2);
    if (*param_2 == 5) {
      thunk_FUN_041cc6e2(param_1[1],0,0,0,0,0,0x37);
    }
  }
  return;
}

