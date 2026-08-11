/* Ghidra address: 01b8c4a0 */
/* Ghidra symbol: FUN_01b8c4a0 */


undefined1 FUN_01b8c4a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_res8 [4];
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined2 local_70;
  undefined1 *local_68;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [7];
  undefined1 local_11;
  undefined8 *local_10;
  
  local_40 = auStack_98;
  local_58 = 0;
  local_20 = (longlong *)0x0;
  local_28 = 0;
  local_30 = 0;
  local_10 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  local_50 = local_res8;
  local_48 = 5;
  local_res8[0] = param_1;
  FUN_00442f70(&local_20,&DAT_01b8c7c8,&local_50,0);
  local_50 = local_20;
  local_48 = 0x11;
  FUN_00442f70(&local_58,L"local_%s.lib",&local_50,0);
  FUN_00414ad0(local_res8[0] + 0x388,local_58);
  local_10 = (undefined8 *)FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
  *(undefined8 **)(local_res8[0] + 0x10) = local_10;
  FUN_01b89640(local_res8[0],*(undefined8 *)(local_res8[0] + 0x380));
  local_78 = 0;
  local_70 = 0;
  local_68 = local_18;
  FUN_014b7d50(0,*(undefined8 *)(local_res8[0] + 0x10),1,0);
  FUN_01b8b360(local_res8[0]);
  FUN_01b8c390(local_res8[0]);
  *(int *)(local_res8[0] + 0x340) = *(int *)(local_res8[0] + 0x340) + 1;
  *(undefined8 *)(local_res8[0] + 0x10) = *(undefined8 *)(local_res8[0] + 0x18);
  if (*(char *)(local_res8[0] + 0x3c1) == '\0') {
    FUN_004414c0(&local_28,*(undefined8 *)(local_res8[0] + 0x380),L".plt");
    FUN_00416ba0(&local_30,*(undefined8 *)(local_res8[0] + 0x398),L"\\VhdlSession0\\ltplt.json");
    cVar1 = FUN_00440a20(local_28,1);
    if (cVar1 != '\0') {
      FUN_01a28310(local_28,local_30,local_res8[0] + 0x3d8);
    }
  }
  else {
    *(undefined8 *)(local_res8[0] + 0x3d8) = 0;
  }
  FUN_01b89640(local_res8[0],*(undefined8 *)(local_res8[0] + 0x380));
  local_78 = 0;
  local_70 = 0;
  local_68 = local_18;
  FUN_014b7d50(0,*(undefined8 *)(local_res8[0] + 0x10),1,0);
  FUN_01b8b4d0(local_res8[0]);
  if (local_10 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*local_10)(local_10);
    FUN_00418590(uVar2,&DAT_01984da0);
  }
  FUN_00414480(&local_58);
  FUN_00414560(&local_30,3);
  return local_11;
}

