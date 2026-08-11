/* Ghidra address: 00f02a70 */
/* Ghidra symbol: FUN_00f02a70 */


longlong * FUN_00f02a70(longlong *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_20 = 0;
  if (param_3 != 0) {
    cVar2 = FUN_004113d0(param_3,&PTR_FUN_00eff310);
    if (cVar2 != '\0') {
      local_20 = *(undefined8 *)(param_3 + 0x28);
    }
  }
  FUN_004b1710(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 9) = 7;
  *(undefined1 *)((longlong)local_res8 + 0x4c) = 2;
  plVar3 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
  local_res8[5] = (longlong)plVar3;
  uVar4 = FUN_00f02f00(local_res8);
  (**(code **)(*plVar3 + 0x10))(plVar3,uVar4);
  lVar5 = local_res8[5];
  *(longlong **)(lVar5 + 0x10) = local_res8;
  *(code **)(lVar5 + 8) = FUN_00f02fe0;
  *(undefined1 *)(local_res8 + 6) = 3;
  FUN_008087b0(*(undefined8 *)PTR_DAT_02005950,&local_38);
  FUN_00414ad0(local_res8 + 7,local_38);
  lVar5 = (**(code **)(*local_res8 + 0x70))(local_res8);
  local_res8[4] = lVar5;
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

