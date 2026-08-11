/* Ghidra address: 01158fe0 */
/* Ghidra symbol: FUN_01158fe0 */


void FUN_01158fe0(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                 longlong param_5,longlong param_6,undefined8 param_7,undefined8 *param_8,
                 char param_9,char param_10,byte param_11,longlong param_12)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_res20;
  undefined1 auStack_a78 [32];
  undefined8 *local_a58;
  undefined8 *local_a50;
  longlong *local_a48;
  undefined8 *local_a40;
  ulonglong local_a38;
  longlong local_a30;
  uint local_a28;
  longlong *local_a20;
  longlong local_a18;
  undefined4 local_a10;
  undefined4 local_a08;
  undefined1 local_9f0 [16];
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined1 *local_9d0;
  longlong local_9c8;
  int local_9bc;
  undefined8 *local_9b8;
  undefined8 local_9b0;
  longlong local_9a8;
  undefined8 local_9a0;
  undefined8 *local_998;
  undefined8 local_990;
  longlong local_988;
  longlong local_980;
  ulonglong local_978;
  undefined8 local_970;
  int local_8b7;
  char local_70;
  longlong local_30 [2];
  
  local_9d0 = auStack_a78;
  local_9e0 = 0;
  local_998 = (undefined8 *)0x0;
  local_9a0 = 0;
  local_9a8 = 0;
  local_9b0 = 0;
  local_9b8 = (undefined8 *)0x0;
  puVar9 = param_8;
  puVar10 = &local_970;
  for (lVar8 = 0x127; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_res20 = param_4;
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  FUN_004179d0(&local_970,&DAT_01d0d0b8);
  if (param_2 == 0) goto LAB_01159737;
  FUN_01cc7d00(*(undefined8 *)(param_2 + 8));
  local_978 = 0;
  if (param_5 == 0) {
    FUN_00414480(&local_9a0);
  }
  else {
    local_a58 = (undefined8 *)CONCAT71(local_a58._1_7_,3);
    FUN_00450070(&local_9a0,param_5,L".wmf",L"_1.wmf");
    FUN_004414c0(&local_9a8,local_9a0,L".tdr");
  }
  FUN_00414b50(&local_9b0,L"Transient");
  FUN_01158fc0(&local_9b8,param_1);
  if (local_9a8 == 0) {
LAB_01159307:
    uVar6 = FUN_00609e10(param_3);
    local_9d8 = FUN_00498310(0,0);
    local_a50 = &local_9d8;
    local_a40 = &local_970;
    local_a58 = (undefined8 *)uVar6;
    local_a48 = (longlong *)param_1;
    local_30[0] = FUN_01acdf10(&PTR_FUN_01ac9770,1,local_978,0);
    FUN_01ae5ef0(local_30[0],local_9b0);
    local_980 = 0;
    local_a58 = local_9b8;
    local_a50 = (undefined8 *)((ulonglong)local_a50 & 0xffffffffffffff00);
    local_a48 = (longlong *)0x0;
    local_980 = FUN_01adfeb0(local_30[0],param_2,0,0);
    if ((local_980 != 0) && (param_12 != 0)) {
      local_a58 = local_9b8;
      FUN_01ae1590(local_30[0],param_12,0,0);
    }
    if (local_980 == 0) {
      local_990 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_2);
      FUN_01cc5c60(param_2);
      local_988 = FUN_01cc5cc0(param_2);
      if ((local_8b7 < 2) && (local_988 != 0)) {
        FUN_01cc1400(local_988,&local_998,param_7);
      }
      else {
        FUN_00414b50(&local_998,L"Output");
      }
      FUN_00de8980(&local_9e0,0x128,param_7);
      local_a58 = (undefined8 *)((ulonglong)local_a58 & 0xffffffffffffff00);
      local_a50 = (undefined8 *)CONCAT71(local_a50._1_7_,1);
      local_a48 = (longlong *)CONCAT44(local_a48._4_4_,2);
      local_a40 = local_998;
      local_a38 = local_a38 & 0xffffffffffffff00;
      local_a30 = CONCAT71(local_a30._1_7_,1);
      local_a28 = 2;
      local_a20 = &local_980;
      local_a18 = local_30[0];
      local_a10 = 1;
      local_a08 = 0;
      FUN_00f16900(local_990,param_2,0,local_9e0);
      (**(code **)(**(longlong **)(local_30[0] + 0xd8) + 0x80))
                (*(longlong **)(local_30[0] + 0xd8),L"Analysis Result 1",local_980);
      local_9c8 = local_980;
      cVar1 = FUN_01ce8540(local_980);
      if ((cVar1 != '\0' || param_9 != '\0') || ((param_11 & local_970._3_1_ == '\0') != 0)) {
        uVar4 = FUN_01ce83f0(local_9c8);
        FUN_01ce6ab0(local_9c8,uVar4,0);
      }
      FUN_01adc0f0(local_30[0],0,local_9b8);
    }
  }
  else {
    cVar1 = FUN_00440a20(local_9a8,1);
    if (cVar1 == '\0') goto LAB_01159307;
    local_30[0] = 0;
    FUN_011568e0(local_9a8,param_1,local_30);
    if (local_30[0] != 0) {
      local_990 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_2);
      local_980 = (**(code **)(**(longlong **)(local_30[0] + 0xd8) + 0x30))
                            (*(longlong **)(local_30[0] + 0xd8),0);
      local_9bc = (**(code **)(**(longlong **)(local_980 + 0x80) + 0x28))
                            (*(longlong **)(local_980 + 0x80));
      local_9bc = local_9bc % 0xf;
      iVar2 = (**(code **)(**(longlong **)(local_980 + 0x70) + 0x28))
                        (*(longlong **)(local_980 + 0x70));
      iVar3 = (**(code **)(**(longlong **)(local_980 + 0x78) + 0x28))
                        (*(longlong **)(local_980 + 0x78));
      local_a40 = (undefined8 *)FUN_00609e10(param_3);
      local_a58 = (undefined8 *)CONCAT44(local_a58._4_4_,iVar2 + -1);
      local_a50 = (undefined8 *)CONCAT44(local_a50._4_4_,iVar3 + -1);
      local_a48 = &local_980;
      local_a38 = local_978;
      local_a30 = local_30[0];
      local_a28 = local_a28 & 0xffffff00;
      FUN_00f1d0a0(local_990,param_2,&local_9bc,1);
    }
  }
  uVar4 = (**(code **)(*param_3 + 0x60))(param_3);
  uVar5 = (**(code **)(*param_3 + 0x48))(param_3);
  local_a58 = (undefined8 *)CONCAT44(local_a58._4_4_,uVar5);
  FUN_00498350(local_9f0,0,0,uVar4);
  FUN_01acf9e0(local_30[0],local_9f0);
  FUN_01ad0490(local_30[0]);
  FUN_01acfa60(local_30[0]);
  if (param_10 == '\x01') {
    local_a58 = (undefined8 *)CONCAT71(local_a58._1_7_,1);
    FUN_01156d70(local_978,local_30[0],local_9a0,param_3);
  }
  else if (param_10 == '\x02') {
    FUN_01156eb0(local_30[0],&local_res20,0,0);
  }
  else if (param_10 == '\x03') {
    if (0 < local_8b7) {
      FUN_01ce92d0(local_980,local_9a0);
    }
  }
  else {
    FUN_01156430(local_9a8,local_30[0]);
    if ((param_6 != 0) && (local_70 != '\0')) {
      uVar6 = FUN_00416740(local_9a8);
      uVar7 = FUN_00416740(param_6);
      FUN_00427810(uVar6,uVar7,0);
    }
    local_a58 = &local_970;
    FUN_01158320(param_1,param_2,local_9a8,param_7);
  }
  FUN_00410f20(local_30[0]);
LAB_01159737:
  FUN_00414480(&local_9e0);
  FUN_00414560(&local_9b8,5);
  FUN_00417740(&local_970,&DAT_01d0d0b8);
  FUN_00414560(&param_5,3);
  return;
}

