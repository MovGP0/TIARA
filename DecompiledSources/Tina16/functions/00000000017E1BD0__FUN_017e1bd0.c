/* Ghidra address: 017e1bd0 */
/* Ghidra symbol: FUN_017e1bd0 */


longlong FUN_017e1bd0(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 local_180 [256];
  undefined8 local_80;
  undefined2 local_78;
  undefined1 uStack_76;
  undefined1 *local_70;
  undefined2 local_5a;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  
  local_70 = auStack_1a8;
  local_188 = 0;
  local_80 = 0;
  local_res8 = param_1;
  puVar1 = auStack_1a8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  FUN_01695f20(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x8c4) = param_4;
  *(undefined1 *)(local_res8 + 0x50b) = 1;
  *(undefined4 *)(local_res8 + 0x36c) = 0;
  *(undefined1 *)(local_res8 + 0x8c8) = 0;
  *(undefined1 *)(local_res8 + 0x8c9) = 1;
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x8d0) = uVar3;
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x8d8) = uVar3;
  *(undefined4 *)(local_res8 + 0x8e0) = 0;
  *(undefined1 *)(local_res8 + 0x350) = 0;
  DAT_02110118 = 0;
  FUN_017e32e0(local_res8,param_6);
  FUN_017e3310(local_res8,0xffffffff);
  *(undefined1 *)(local_res8 + 0x508) = 0;
  *(undefined1 *)(local_res8 + 0x358) = 0;
  *(undefined1 *)(local_res8 + 0x359) = 0;
  *(undefined4 *)(local_res8 + 0x35c) = 0;
  *(undefined8 *)(local_res8 + 0x388) = param_5;
  FUN_00414480(local_res8 + 0x390);
  *(undefined *)(local_res8 + 0x398) = *PTR_DAT_02005310;
  *(undefined1 *)(local_res8 + 0x509) = 0;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x528) = uVar3;
  *(undefined8 *)(local_res8 + 0x3a0) = 0;
  *(undefined8 *)(local_res8 + 0x340) = 0;
  *(undefined1 *)(local_res8 + 0x540) = 0;
  *(undefined8 *)(local_res8 + 0x548) = 0;
  *(undefined8 *)(local_res8 + 0x900) = 0;
  *(undefined8 *)(local_res8 + 0x3a8) = 0;
  *(undefined4 *)(local_res8 + 0x908) = 0;
  *(undefined1 *)(local_res8 + 0x50c) = param_7;
  uVar3 = FUN_013b2dc0(0,&PTR_FUN_013b25f8,10,5);
  *(undefined8 *)(local_res8 + 0x4e8) = uVar3;
  uVar3 = FUN_013b2dc0(0,&PTR_FUN_013b25f8,10,5);
  *(undefined8 *)(local_res8 + 0x550) = uVar3;
  uVar3 = FUN_010d3510(0,&PTR_FUN_010d1378,10,5);
  *(undefined8 *)(local_res8 + 0x4f0) = uVar3;
  uVar3 = FUN_010d17f0(0,&PTR_FUN_010d1430,10,5);
  *(undefined8 *)(local_res8 + 0x4f8) = uVar3;
  uVar3 = FUN_017e18f0(0,&PTR_FUN_017df4c8,10,5);
  *(undefined8 *)(local_res8 + 0x500) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x890) = uVar3;
  FUN_017e2540(local_res8,local_res8 + 0x630);
  FUN_017e2520(local_res8,local_res8 + 0x628);
  FUN_017e2560(local_res8,local_res8 + 0x650);
  FUN_010c7a40(local_58,0x400921fb54442d18);
  local_78 = 0x7002;
  uStack_76 = 0x69;
  FUN_013b3150(*(undefined8 *)(local_res8 + 0x4e8),&local_78,local_58);
  if (*(char *)(local_res8 + 0x62b) == '\0') {
    local_5a = 0x69;
  }
  else {
    local_5a = 0x6a;
  }
  local_58[0] = 1;
  local_50 = 0;
  local_48 = 0x3ff0000000000000;
  FUN_010c7a80(local_58);
  FUN_00416780(&local_80,local_5a);
  FUN_00416910(local_180,local_80,0xff);
  FUN_013b3150(*(undefined8 *)(local_res8 + 0x4e8),local_180,local_58);
  *(undefined2 *)(local_res8 + 0x2d8) = 0;
  *(undefined2 *)(local_res8 + 0x558) = 0;
  *(undefined2 *)(local_res8 + 0x55a) = 0;
  FUN_00414480(local_res8 + 0x620);
  *(undefined1 *)(local_res8 + 0x50a) = 0;
  *(undefined2 *)(local_res8 + 0x564) = 1;
  *(undefined4 *)(local_res8 + 0x55c) = 0;
  *(undefined1 *)(local_res8 + 0x5f8) = 0;
  *(undefined4 *)(local_res8 + 0x354) = 0;
  *(undefined1 *)(local_res8 + 0x530) = 0;
  *(undefined8 *)(local_res8 + 0x538) = 0;
  if (*(longlong *)(local_res8 + 0x388) == 0) {
    FUN_00414480(local_res8 + 0x390);
    if ((*PTR_DAT_02004aa8 == '\0') || (*(int *)(local_res8 + 0x8c4) == 1)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(local_res8 + 0x509) = uVar2;
    *(undefined *)(local_res8 + 0x398) = *PTR_DAT_02005310;
  }
  else {
    FUN_00441640(&local_188,*(undefined8 *)(*(longlong *)(local_res8 + 0x388) + 8));
    FUN_00414ad0(local_res8 + 0x390,local_188);
    *(undefined1 *)(local_res8 + 0x509) = 0;
  }
  FUN_00414480(&local_188);
  FUN_00414480(&local_80);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

