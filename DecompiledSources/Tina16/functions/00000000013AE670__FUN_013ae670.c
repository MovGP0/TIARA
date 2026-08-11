/* Ghidra address: 013ae670 */
/* Ghidra symbol: FUN_013ae670 */


void FUN_013ae670(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  puVar2 = (undefined8 *)FUN_01430100(&PTR_FUN_0142b460,1,param_2,0);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,local_30,0x5a8);
  (**(code **)(*plVar3 + 0x78))(plVar3,local_30[0]);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_38,0x5a9);
  (**(code **)(*plVar3 + 0x78))(plVar3,local_38);
  (**(code **)*puVar2)(puVar2,plVar3);
  FUN_00410f20(plVar3);
  FUN_0041ddd0(&local_40,&PTR_PTR_013ac8f0);
  FUN_00f42d60(*(undefined8 *)(param_1 + 0x408),local_40,puVar2);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x6d0);
  FUN_00848a70(lVar1,*(int *)(lVar1 + 0x4e0) + 1);
  FUN_00414560(&local_40,3);
  return;
}

