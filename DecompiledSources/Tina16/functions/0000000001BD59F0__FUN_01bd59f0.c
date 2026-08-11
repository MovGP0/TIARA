/* Ghidra address: 01bd59f0 */
/* Ghidra symbol: FUN_01bd59f0 */


void FUN_01bd59f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = param_1[0xac];
  param_1[0xac] = 0;
  FUN_00410f20(lVar1);
  lVar1 = param_1[0xad];
  param_1[0xad] = 0;
  FUN_00410f20(lVar1);
  uVar2 = (**(code **)(*param_1 + 0x360))(param_1);
  plVar3 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_01bdbe88);
  lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (longlong *)(**(code **)(lVar4 + 0x78))(lVar4,1,param_1);
  param_1[0xac] = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x130))(plVar3,param_1);
  FUN_0064c650(param_1[0xac],2);
  FUN_0064cc50(param_1[0xac],0xd);
  lVar1 = param_1[0xac];
  *(bool *)(lVar1 + 0x38c) = 0 < *(int *)((longlong)param_1 + 0x54c);
  FUN_01bd4200(lVar1,3);
  lVar1 = param_1[0xac];
  *(undefined4 *)(lVar1 + 0x388) = *(undefined4 *)((longlong)param_1 + 0x54c);
  FUN_0064dbe0(lVar1,0);
  lVar1 = param_1[0xac];
  *(longlong **)(lVar1 + 0x380) = param_1;
  *(code **)(lVar1 + 0x378) = FUN_01bd5f60;
  plVar3 = (longlong *)(**(code **)(lVar4 + 0x78))(lVar4,1,param_1);
  param_1[0xad] = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x130))(plVar3,param_1);
  FUN_0064c650(param_1[0xad],1);
  FUN_0064cc50(param_1[0xad],0xd);
  lVar1 = param_1[0xad];
  *(bool *)(lVar1 + 0x38c) = 0 < *(int *)((longlong)param_1 + 0x54c);
  FUN_01bd4200(lVar1,2);
  lVar1 = param_1[0xad];
  *(undefined4 *)(lVar1 + 0x388) = *(undefined4 *)((longlong)param_1 + 0x54c);
  FUN_0064dbe0(lVar1,0);
  lVar1 = param_1[0xad];
  *(longlong **)(lVar1 + 0x380) = param_1;
  *(code **)(lVar1 + 0x378) = FUN_01bd5f80;
  return;
}

