/* Ghidra address: 01a49620 */
/* Ghidra symbol: FUN_01a49620 */


undefined1 FUN_01a49620(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res10;
  char local_res18;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_44 [11];
  undefined1 local_39;
  longlong *local_38;
  undefined8 local_30 [2];
  
  local_e0 = auStack_168;
  local_e8 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_100 = FUN_019a4600();
  local_f8 = FUN_004144d0(&local_a0);
  local_f0 = FUN_004144d0(&local_a8);
  uVar2 = FUN_004144d0(&local_b0);
  local_110 = FUN_004144d0(&local_b8);
  local_108 = FUN_004144d0(&local_c0);
  uVar3 = FUN_004144d0(&local_c8);
  uVar4 = FUN_004144d0(&local_d0);
  local_128 = FUN_004144d0(local_30);
  local_148 = local_110;
  local_140 = local_108;
  local_120 = 0;
  local_138 = uVar3;
  local_130 = uVar4;
  FUN_0129ace0(local_100,local_f8,local_f0,uVar2);
  FUN_00416880(&local_e8,local_b0);
  FUN_004b4b10(local_38,local_e8);
  if (local_res18 != '\0') {
    cVar1 = FUN_01a49570(auStack_168,5);
    if (cVar1 == '\0') {
      cVar1 = FUN_01a49570(auStack_168,0x21);
      if (cVar1 == '\0') goto LAB_01a49854;
    }
    (**(code **)(*local_38 + 0x78))(local_38,L"voltmeter");
  }
LAB_01a49854:
  local_39 = FUN_01b22620(local_38,local_res10,local_44,1);
  FUN_00410f20(local_38);
  FUN_00414480(&local_e8);
  FUN_00414590(&local_d0,7);
  FUN_00414560(&local_98,8);
  FUN_004144d0(local_30);
  FUN_00414480(&local_res10);
  return local_39;
}

