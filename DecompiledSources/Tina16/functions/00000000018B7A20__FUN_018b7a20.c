/* Ghidra address: 018b7a20 */
/* Ghidra symbol: FUN_018b7a20 */


longlong FUN_018b7a20(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_01978ad0(local_res8,0,param_3);
  uVar2 = FUN_018b7560(&DAT_018b4e88,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x88) = uVar2;
  lVar3 = FUN_01804390(&DAT_01802268,1);
  *(longlong *)(local_res8 + 0x98) = lVar3;
  FUN_00414ad0(*(longlong *)(lVar3 + 0x28) + 0x20,L"preparedreport");
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x70) = uVar2;
  uVar2 = FUN_01888250(&DAT_018861e8,1);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  if (*(longlong *)(param_3 + 0x208) != 0) {
    lVar3 = FUN_019806a0(*(longlong *)(param_3 + 0x208));
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_019806a0(*(undefined8 *)(param_3 + 0x208));
      uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
      plVar4 = *(longlong **)(*(longlong *)(local_res8 + 0x80) + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4,uVar2);
    }
  }
  lVar3 = *(longlong *)(local_res8 + 0x80);
  *(longlong *)(lVar3 + 0x38) = local_res8;
  *(code **)(lVar3 + 0x30) = FUN_018b8ae0;
  *(undefined8 *)(local_res8 + 0xa8) = 0;
  *(undefined8 *)(local_res8 + 0xb0) = 0;
  *(undefined8 *)(local_res8 + 0xb8) = 0;
  uVar2 = FUN_018c3440(&PTR_FUN_018b5340,1);
  *(undefined8 *)(local_res8 + 0xd0) = uVar2;
  *(undefined1 *)(local_res8 + 200) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

