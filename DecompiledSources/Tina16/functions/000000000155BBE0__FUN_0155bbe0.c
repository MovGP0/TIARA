/* Ghidra address: 0155bbe0 */
/* Ghidra symbol: FUN_0155bbe0 */


void FUN_0155bbe0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,longlong param_6,char param_7,char param_8)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_25e8 [32];
  undefined8 local_25c8;
  undefined8 local_25b0;
  undefined8 local_25a8;
  undefined8 local_25a0 [277];
  undefined4 local_1cf4;
  undefined8 local_1c68 [208];
  undefined1 local_15e8;
  double local_1436;
  undefined8 local_1330 [263];
  undefined1 local_af6;
  undefined8 local_9f8 [130];
  undefined1 local_5e8;
  int local_1ca;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_62;
  int local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_5e8 = 0;
  local_15e8 = 0;
  local_25e8[0] = 0;
  local_25a8 = 0;
  local_25b0 = 0;
  puVar4 = local_25a0;
  for (lVar3 = 0x127; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_1c68;
  for (lVar3 = 0x127; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_1330;
  for (lVar3 = 0x127; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_9f8;
  for (lVar3 = 0x127; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_90 = 0;
  local_98 = 0;
  local_50 = *param_4;
  local_48 = param_4[1];
  local_40 = param_4[2];
  local_38 = param_4[3];
  local_res10 = param_2;
  local_res18 = param_3;
  local_a0 = local_25e8;
  FUN_00414610(param_2);
  FUN_01440040(param_6,*(undefined8 *)(*(longlong *)(param_6 + 0x210) + 0x110),0);
  FUN_00441920(&local_78,*(undefined8 *)(param_1 + 0x88));
  FUN_015f20a0(&local_78);
  local_58 = FUN_004170c0(&DAT_0155c5e4,local_78,1);
  if (local_58 < 1) {
    FUN_00414b50(&local_80,local_78);
  }
  else {
    FUN_00416dc0(&local_80,local_78,1,local_58 + -1);
  }
  FUN_00416ba0(&local_78,local_80,L".vhd");
  FUN_00415dd0(&local_b0,local_80,0);
  FUN_0154b610(&local_a8,local_b0);
  FUN_004155b0(&local_a8,&DAT_0155c60c);
  FUN_00416880(param_1 + 0x788,local_a8);
  FUN_0154cd10(param_1,param_6);
  *(undefined1 *)(param_1 + 0x9d8) = local_50._7_1_;
  *(undefined1 *)(param_1 + 0x948) = (undefined1)local_50;
  *(undefined1 *)(param_1 + 0x949) = local_50._1_1_;
  *(undefined1 *)(param_1 + 0x94a) = local_50._2_1_;
  *(undefined1 *)(param_1 + 0x94b) = local_50._3_1_;
  *(undefined1 *)(param_1 + 0x94c) = local_50._4_1_;
  *(undefined1 *)(param_1 + 0x94d) = local_50._5_1_;
  *(undefined1 *)(param_1 + 0x94f) = local_50._6_1_;
  *(undefined1 *)(param_1 + 0x94e) = (undefined1)local_48;
  *(undefined4 *)(param_1 + 0x95c) = local_48._4_4_;
  *(undefined1 *)(param_1 + 0x950) = (undefined1)local_40;
  *(undefined1 *)(param_1 + 0x952) = local_48._1_1_;
  *(undefined1 *)(param_1 + 0x953) = local_48._2_1_;
  *(undefined1 *)(param_1 + 0x951) = local_40._1_1_;
  *(undefined1 *)(param_1 + 0x955) = local_40._2_1_;
  *(undefined1 *)(param_1 + 0x956) = local_40._3_1_;
  *(undefined1 *)(param_1 + 0x957) = local_40._4_1_;
  *(undefined1 *)(param_1 + 0x958) = local_40._5_1_;
  *(undefined1 *)(param_1 + 0xa40) = local_40._6_1_;
  *(undefined1 *)(param_1 + 0x954) = local_40._7_1_;
  *(undefined8 *)(param_1 + 0xa48) = local_38;
  *(undefined8 *)(param_1 + 0x9e0) = param_5;
  FUN_00414ad0(param_1 + 0xa18,local_res10);
  *(undefined8 *)(param_1 + 0xa20) = local_res18;
  *(char *)(param_1 + 0x800) = param_8;
  FUN_01566ff0(param_1);
  FUN_0154c930(param_1,local_80);
  FUN_0155ffc0(param_1);
  if ((param_7 != '\x03') && (*(longlong *)PTR_DAT_02004208 == 0)) {
    uVar2 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02004208 = uVar2;
  }
  if (((*(longlong *)PTR_DAT_02004208 != 0) && (0x32 < *(int *)(param_1 + 0x7e0))) &&
     (*(char *)(*(longlong *)PTR_DAT_02004208 + 0xa9) == '\0')) {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_c0,PTR_PTR_02001720);
    FUN_00b8e650(uVar2,&local_b8,L"HDLStrings.Msg_CompilingHDLMacros",local_c0);
    FUN_00c54370(*(undefined8 *)PTR_DAT_02004208,local_b8);
    *(undefined1 *)(*(longlong *)PTR_DAT_02004208 + 0x6c1) = 0;
    FUN_008059a0(*(undefined8 *)PTR_DAT_02004208);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004208 + 0x6b0) + 0x198))
              (*(longlong **)(*(longlong *)PTR_DAT_02004208 + 0x6b0));
  }
  if (*(int *)(param_1 + 0x95c) == 3) {
    FUN_00e12470(param_6,param_1);
  }
  FUN_0155b790(param_1,param_6);
  if (*(char *)(param_1 + 0x94c) != '\0') {
    FUN_01566d10(param_1,5);
  }
  if (param_8 == '\0') {
    FUN_01569cb0(param_1,local_9f8);
    _SetStatusIdealMode(local_1ca == 2);
    FUN_01569cb0(param_1,local_1330);
    _SetStatusPulseRejection(local_af6);
    FUN_01569cb0(param_1,local_1c68);
    _SetPulseRejectionPercent(local_1436 / 100.0);
  }
  FUN_01569cb0(param_1,local_25a0);
  local_62 = FUN_015fc2d0(local_1cf4);
  if (param_8 == '\0') {
    _SetCnfData(local_res18,local_62,0);
  }
  FUN_00416ba0(&local_70,*(undefined8 *)(param_1 + 0x7a8),L"\\sc_ports.txt");
  cVar1 = FUN_00440a20(local_70,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_70);
  }
  if ((*(uint *)(param_1 + 0x7e8) != 0) && ((*(uint *)(param_1 + 0x7e8) & 0x20) == 0)) {
    local_88 = FUN_00e0f340(*(undefined8 *)(param_1 + 0x938),*(undefined8 *)(param_1 + 0x840));
    local_60 = FUN_00e0e000(*(undefined8 *)(local_88 + 0x828),1);
    if ((local_60 == 5) || (local_60 == 6)) {
      FUN_00414c70(&local_90,*(undefined8 *)(*(longlong *)(local_88 + 0x828) + 0x50));
      FUN_00416880(&local_25b0,local_90);
      FUN_0156b9c0(param_1,&local_25a8,local_88,local_25b0);
      FUN_00415dd0(&local_98,local_25a8,0);
      local_25c8 = local_98;
      FUN_014c50b0(param_1 + 0xa58,param_1 + 0xa60,param_1 + 0xa6c,local_90);
    }
    FUN_0156bc80(param_1);
  }
  FUN_01546460(*PTR_DAT_02005b68);
  if (*(int *)(param_1 + 0x95c) != 3) {
    FUN_0155bb30(param_1);
  }
  if (*(longlong *)PTR_DAT_02004208 != 0) {
    local_30 = *(undefined8 *)PTR_DAT_02004208;
    *(undefined8 *)PTR_DAT_02004208 = 0;
    FUN_00410f20(local_30);
  }
  FUN_00414560(&local_25b0,2);
  FUN_00417840(local_25a0,&DAT_01d0d0b8,4);
  FUN_00414560(&local_c0,2);
  FUN_00414590(&local_b0,2);
  FUN_00414590(&local_98,2);
  FUN_00414560(&local_80,3);
  FUN_00414480(&local_res10);
  return;
}

