/* Ghidra address: 00ee5290 */
/* Ghidra symbol: FUN_00ee5290 */


undefined1 FUN_00ee5290(undefined8 param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  longlong local_res10;
  undefined1 local_res18;
  undefined1 local_res20;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168 [256];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined1 local_9;
  
  local_50 = auStack_1d8;
  local_178 = 0;
  local_180 = 0;
  local_170 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_38 = 0;
  local_20 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  *PTR_DAT_02002ce0 = 0;
  local_39 = 1;
  local_18 = FUN_016b97f0(&DAT_016b45f0,1,1);
  lVar1 = *(longlong *)(local_18 + 0x10);
  *(undefined1 *)(lVar1 + 0x231) = 0;
  *(undefined1 *)(lVar1 + 0x230) = 0;
  if (local_res10 == 0) {
    FUN_00414ad0(lVar1 + 0x218,local_res8);
  }
  else {
    FUN_00414ad0(lVar1 + 0x218,local_res10);
  }
  FUN_00414ad0(*(longlong *)(local_18 + 0x10) + 0x220,local_res8);
  FUN_016a36d0(*(undefined8 *)(local_18 + 0x10),0);
  *(undefined1 *)(*(longlong *)(local_18 + 8) + 8) = 1;
  uVar3 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02004208 = uVar3;
  if (*(char *)(*(longlong *)PTR_DAT_02004208 + 0xa9) == '\0') {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_58,0x4e8);
    FUN_00c54370(*(undefined8 *)PTR_DAT_02004208,local_58);
    *(undefined1 *)(*(longlong *)PTR_DAT_02004208 + 0x6c1) = 0;
    FUN_008059a0(*(undefined8 *)PTR_DAT_02004208);
  }
  local_28 = (undefined8 *)FUN_0198b200(0,&PTR_FUN_01984d18,0,0);
  FUN_016cff60(local_18,1,0,0);
  FUN_016bb4f0(local_18,local_res8,0);
  while( true ) {
    FUN_016b8f10(&local_60,*(undefined8 *)(local_18 + 0xd80));
    iVar2 = FUN_00415a60(local_60,&DAT_00ee58ec);
    if (iVar2 == 0) break;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 1;
    local_190 = 1;
    FUN_00ee2730(*(undefined8 *)(local_18 + 8),0,0,0);
  }
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_68,0x4e9);
  FUN_00c54370(*(undefined8 *)PTR_DAT_02004208,local_68);
  *(undefined1 *)(*(longlong *)(local_18 + 0x10) + 0x231) = 1;
  if (local_res10 != 0) {
    FUN_00416910(local_168,local_res10,0xff);
    FUN_016c41d0(local_18,local_168);
  }
  FUN_00416ba0(&local_170,*(undefined8 *)PTR_DAT_020049a0,L"\\EXAMPLES\\SPICE\\TSPICE.LIB");
  FUN_00416910(local_168,local_170,0xff);
  FUN_016c41d0(local_18,local_168);
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = local_res18;
  local_198 = 0;
  FUN_016cb2b0(local_18,0,local_28,local_28);
  local_9 = *(undefined1 *)(*(longlong *)(local_18 + 0x10) + 0x231);
  FUN_00414c70(&local_20,*(undefined8 *)(local_18 + 0xd80));
  FUN_00410f20(local_18);
  uVar3 = (**(code **)*local_28)(local_28);
  FUN_00418590(uVar3,&DAT_01984da0);
  local_30 = *(undefined8 *)PTR_DAT_02004208;
  *(undefined8 *)PTR_DAT_02004208 = 0;
  FUN_00410f20(local_30);
  FUN_00414560(&local_180,3);
  FUN_00414480(&local_68);
  FUN_004144d0(&local_60);
  FUN_00414480(&local_58);
  FUN_00414480(&local_38);
  FUN_004144d0(&local_20);
  FUN_00414560(&local_res8,2);
  return local_39;
}

