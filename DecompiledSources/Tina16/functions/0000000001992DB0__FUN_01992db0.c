/* Ghidra address: 01992db0 */
/* Ghidra symbol: FUN_01992db0 */


longlong *
FUN_01992db0(longlong *param_1,undefined8 param_2,char param_3,undefined4 param_4,undefined1 param_5
            ,char param_6)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  short local_38;
  short sStack_36;
  short local_34;
  short sStack_32;
  short local_30;
  short sStack_2e;
  short local_2c;
  short sStack_2a;
  
  plVar2 = (longlong *)FUN_017c04c0(0,&PTR_FUN_017c0190,param_2,param_5);
  if (plVar2 != (longlong *)0x0) {
    if (*PTR_DAT_020052b8 != '\0') {
      lVar3 = FUN_017c4f60(&DAT_017bfed0,1,param_4,0);
      plVar2[0x7e] = lVar3;
      *(short *)((longlong)plVar2 + 0x24) = (short)param_4;
    }
    (**(code **)(*param_1 + 0x20))(param_1,plVar2);
  }
  uVar1 = FUN_017c2c60(plVar2,0);
  local_2c = (short)uVar1;
  sStack_2a = (short)((uint)uVar1 >> 0x10);
  FUN_019916f0(param_1,(longlong)local_2c,(longlong)sStack_2a,plVar2,0,0);
  uVar1 = FUN_017c2c60(plVar2,0xffffffff);
  local_30 = (short)uVar1;
  sStack_2e = (short)((uint)uVar1 >> 0x10);
  FUN_019916f0(param_1,(longlong)local_30,(longlong)sStack_2e,plVar2,0,0);
  if (param_6 != '\0') {
    uVar1 = FUN_017c2c60(plVar2,0);
    local_34 = (short)uVar1;
    sStack_32 = (short)((uint)uVar1 >> 0x10);
    plVar4 = (longlong *)FUN_01991dd0(param_1,0,(longlong)local_34,(longlong)sStack_32);
    if (plVar4 != (longlong *)0x0) {
      plVar2 = plVar4;
    }
    uVar1 = FUN_017c2c60(plVar2,0xffffffff);
    local_38 = (short)uVar1;
    sStack_36 = (short)((uint)uVar1 >> 0x10);
    plVar4 = (longlong *)FUN_01991dd0(param_1,0,(longlong)local_38,(longlong)sStack_36);
    FUN_00b95360(param_1);
    if (plVar4 != (longlong *)0x0) {
      plVar2 = plVar4;
    }
  }
  FUN_019a53e0(param_1,plVar2);
  if (param_3 != '\0') {
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_1[0x42]);
  }
  return plVar2;
}

