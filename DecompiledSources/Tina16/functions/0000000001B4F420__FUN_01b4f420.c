/* Ghidra address: 01b4f420 */
/* Ghidra symbol: FUN_01b4f420 */


void FUN_01b4f420(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,longlong param_6,undefined8 param_7,char param_8,
                 undefined4 param_9)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_1ce8 [32];
  wchar_t *local_1cc8;
  int local_1cac;
  undefined8 local_1ca8;
  undefined8 local_1ca0;
  undefined8 local_1c98 [293];
  undefined8 local_136c;
  undefined8 local_1360 [207];
  undefined1 local_ce8;
  longlong local_a34;
  undefined8 local_a28 [69];
  undefined8 local_800;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  int local_4c;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_22;
  undefined8 local_20;
  
  local_ce8 = 0;
  local_1ce8[0] = 0;
  local_1ca8 = 0;
  local_1ca0 = 0;
  puVar5 = local_1c98;
  for (lVar3 = 0x127; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_1360;
  for (lVar3 = 0x127; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_a28;
  for (lVar3 = 0x127; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_f0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_a0 = local_1ce8;
  FUN_00419500(param_2);
  FUN_00419500(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  local_22 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  FUN_01b4c570(param_1);
  FUN_00414480(param_1 + 0x30);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  FUN_004194b0(param_1 + 0x14a8,local_res18,&DAT_01b4b7e0);
  FUN_004194b0(param_1 + 0x14b0,local_res10,&DAT_01b4b830);
  FUN_00414ad0(param_1 + 0x38,local_res20);
  *(undefined4 *)(param_1 + 0x1478) = param_5;
  local_1cc8 = L"output-temp.dat.HB.FD.prn";
  FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x20),&DAT_01b5000c);
  cVar1 = FUN_00440a20(local_38,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_38);
  }
  local_44 = (**(code **)(**(longlong **)(param_1 + 0x14b8) + 0xb0))
                       (*(longlong **)(param_1 + 0x14b8),*(undefined8 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Meter string is empty");
    FUN_004134c0(uVar2);
  }
  if (local_44 < 0) {
    FUN_00416ba0(&local_a8,L"Meter not found: ",*(undefined8 *)(param_1 + 0x38));
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_a8);
    FUN_004134c0(uVar2);
  }
  lVar3 = (longlong)local_44;
  if (*(longlong *)(param_1 + 0x58 + lVar3 * 0x20) == 0) {
    local_e8 = *(undefined8 *)(param_1 + 0x50 + lVar3 * 0x20);
    local_e0 = 0x11;
    FUN_00442f70(&local_d8,L"V(%s)",&local_e8,0);
    FUN_00414ad0(param_1 + 0x28,local_d8);
  }
  else {
    local_d0 = *(undefined8 *)(param_1 + 0x50 + lVar3 * 0x20);
    local_c8 = 0x11;
    local_c0 = *(undefined8 *)(param_1 + 0x58 + lVar3 * 0x20);
    local_b8 = 0x11;
    FUN_00442f70(&local_b0,L"V(%s,%s)",&local_d0,1);
    FUN_00414ad0(param_1 + 0x28,local_b0);
  }
  local_68 = local_res10;
  if (local_res10 != 0) {
    local_68 = *(longlong *)(local_res10 + -8);
  }
  local_4c = (int)local_68;
  local_3c = 0;
  iVar4 = (int)local_68;
  if (-1 < (int)local_68 + -1) {
    do {
      FUN_0043f750(&local_f0,
                   *(undefined4 *)(*(longlong *)(param_1 + 0x14b0) + (longlong)local_3c * 4));
      FUN_00416ad0(param_1 + 0x30,local_f0);
      if (local_3c < local_4c + -1) {
        FUN_00416ad0(param_1 + 0x30,&DAT_01b500fc);
      }
      local_3c = local_3c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(param_1 + 0x48);
  local_70 = *(longlong *)(param_1 + 0x14a8);
  local_78 = local_70;
  if (local_70 != 0) {
    local_78 = *(longlong *)(local_70 + -8);
  }
  local_1cac = (int)local_78 + -1;
  local_3c = 0;
  if (-1 < local_1cac) {
    local_1cac = (int)local_78;
    do {
      FUN_00414480(&local_20);
      local_80 = *(undefined8 *)(*(longlong *)(param_1 + 0x14a8) + (longlong)local_3c * 8);
      FUN_00448450(&local_20,local_80,PTR_DAT_02004830);
      FUN_00416ad0(param_1 + 0x48,local_20);
      FUN_00414480(&local_20);
      local_88 = *(longlong *)(param_1 + 0x14a8);
      local_90 = local_88;
      if (local_88 != 0) {
        local_90 = *(longlong *)(local_88 + -8);
      }
      if ((longlong)local_3c < local_90 + -1) {
        FUN_00416ad0(param_1 + 0x48,&DAT_01b5010c);
      }
      local_3c = local_3c + 1;
      local_1cac = local_1cac + -1;
    } while (local_1cac != 0);
  }
  if (param_6 == 0) {
    FUN_01b4ef40(param_1,local_a28);
    local_40 = FUN_0040c840(local_800);
    if ((local_40 < 1) || (3 < local_40)) {
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,
                           L"HB init mode invalid parameter value (valid range: 1..3)");
      FUN_004134c0(uVar2);
    }
    local_e8 = CONCAT44(local_e8._4_4_,local_40 + -1);
    local_e0 = 0;
    FUN_00442f70(&param_6,L"TAHB=%d",&local_e8,0);
  }
  while (cVar1 = FUN_01b4e8f0(param_1,&DAT_01b501b8), cVar1 != '\0') {
    FUN_01b4e860(param_1,&DAT_01b501b8);
  }
  FUN_01b4e860(param_1,L"TINA Netlist Editor format");
  FUN_01b4e860(param_1,L".TRAN");
  FUN_01b4e860(param_1,L".TEMP");
  local_d0 = *(undefined8 *)(param_1 + 0x30);
  local_c8 = 0x11;
  local_c0 = param_6;
  local_b8 = 0x11;
  FUN_00442f70(&local_30,L".OPTIONS HBINT numfreq=%s %s",&local_d0,1);
  cVar1 = FUN_01b4e700(param_1,L".OPTIONS",local_30);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L".options not found");
    FUN_004134c0(uVar2);
  }
  local_e8 = *(undefined8 *)(param_1 + 0x48);
  local_e0 = 0x11;
  FUN_00442f70(&local_30,L".HB %s",&local_e8,0);
  FUN_01b4e7b0(param_1,L".OPTIONS",local_30);
  FUN_01b4ef40(param_1,local_1360);
  if (local_a34 != 0) {
    FUN_01b4ef40(param_1,local_1c98);
    FUN_00414b50(&local_30,local_136c);
    FUN_01b4e7b0(param_1,L".OPTIONS",local_30);
  }
  local_e8 = *(undefined8 *)(param_1 + 0x28);
  local_e0 = 0x11;
  FUN_00442f70(&local_30,L".PRINT HB %s",&local_e8,0);
  cVar1 = FUN_01b4e700(param_1,L".PRINT TRAN",local_30);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L".PRINT TRAN not found");
    FUN_004134c0(uVar2);
  }
  FUN_01b4e860(param_1,L".PRINT TRAN");
  FUN_00441640(&local_1ca0,*(undefined8 *)(param_1 + 0x40));
  FUN_00416ba0(&local_38,local_1ca0,L"circuit.cir");
  (**(code **)(**(longlong **)(param_1 + 8) + 0x100))(*(longlong **)(param_1 + 8),local_38);
  FUN_01b4c1d0(local_38,L"xyce",L"simulator");
  if (*(char *)(param_1 + 0x147c) == '\0') {
    FUN_01b4c9a0(param_1,local_38,param_9);
  }
  else {
    FUN_01b4c9a0(param_1,local_38,param_9);
  }
  if (*(char *)(param_1 + 0x147d) == '\0') {
    if (param_8 == '\0') {
      local_1cc8 = L"output-temp.dat.HB.FD.prn";
      FUN_00416cd0(&local_1ca8,3,*(undefined8 *)(param_1 + 0x20),&DAT_01b5000c);
      FUN_01b4d0a0(param_1,local_1ca8);
    }
    else {
      FUN_01b4d0a0(param_1,L"c:\\Attila\\HB\\run_linux\\output-HB_Diode_MX.CIR.dat.HB.FD.prn");
    }
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_22;
  }
  else {
    FUN_01b4ff20(0,local_a0);
  }
  FUN_00414560(&local_1ca8,2);
  FUN_00417840(local_1c98,&DAT_01d0d0b8,3);
  FUN_00414480(&local_f0);
  FUN_00414480(&local_d8);
  FUN_00414560(&local_b0,2);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  FUN_00419430(&local_res10,&DAT_01b4b830);
  FUN_00419430(&local_res18,&DAT_01b4b7e0);
  FUN_00414480(&local_res20);
  FUN_00414560(&param_6,2);
  return;
}

