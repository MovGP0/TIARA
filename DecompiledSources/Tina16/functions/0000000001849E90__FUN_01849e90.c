/* Ghidra address: 01849e90 */
/* Ghidra symbol: FUN_01849e90 */


void FUN_01849e90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_48 = (undefined *)0x0;
  local_40 = 0;
  puVar3 = (undefined8 *)FUN_004634b0(param_1 + 0x90);
  FUN_0046c3f0(&local_40,param_2);
  iVar2 = FUN_00416db0(local_40,&LAB_0184a018);
  if (iVar2 == 0) {
    local_38 = 0;
    local_30 = (longlong *)0x0;
    goto LAB_01849fa3;
  }
  FUN_00467e90(&local_48,param_2);
  lVar4 = FUN_0184cde0(*(undefined8 *)(param_1 + 0xa8),local_48);
  if (lVar4 == 0) {
LAB_01849f39:
    uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02005668);
    FUN_004134c0(uVar6);
  }
  else {
    cVar1 = FUN_004113d0(lVar4,&PTR_FUN_01843fa0);
    if (cVar1 == '\0') goto LAB_01849f39;
  }
  plVar5 = (longlong *)
           (**(code **)(*(longlong *)(param_1 + 0xb8) + -0x30))(*(longlong *)(param_1 + 0xb8));
  (**(code **)*plVar5)(plVar5,0xff,puVar3,lVar4);
  FUN_0184caa0(*(undefined8 *)(param_1 + 0xa8),0,plVar5);
  local_38 = (**(code **)(*plVar5 + 8))(plVar5);
  local_30 = plVar5;
LAB_01849fa3:
  uVar6 = FUN_004115a0(*puVar3);
  uVar6 = FUN_00589ef0(uVar6,*(undefined8 *)(param_1 + 0x20));
  FUN_0058f3c0(puVar3,uVar6,&local_38);
  FUN_00414560(&local_48,2);
  return;
}

