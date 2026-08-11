/* Ghidra address: 0072c4f0 */
/* Ghidra symbol: FUN_0072c4f0 */


undefined8 FUN_0072c4f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined *local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_f0 = 0;
  local_f8 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_00417320(&local_30,0x2d,0x1b);
  FUN_00416ba0(&local_20,local_30,&DAT_0072c80c);
  iVar2 = FUN_004d3e30();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_004d3de0(param_1,iVar4);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00673008);
      if (cVar1 != '\0') {
        uVar3 = FUN_004d3de0(param_1,iVar4);
        FUN_0064dd90(uVar3,&local_38);
        FUN_00417320(&local_40,0x20,3);
        FUN_00416cd0(&local_28,3,local_28,local_38,local_40);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00450070(&local_48,local_28,&DAT_0072c820,0,1);
  FUN_00414b50(&local_28,local_48);
  local_e8 = local_20;
  local_e0 = 0x11;
  FUN_0064dd90(param_1,&local_f0);
  local_d8 = local_f0;
  local_d0 = 0x11;
  local_c8 = &DAT_0072c86c;
  local_c0 = 0xb;
  local_b8 = local_20;
  local_b0 = 0x11;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_f8);
  local_a8 = local_f8;
  local_a0 = 0x11;
  local_98 = &DAT_0072c86c;
  local_90 = 0xb;
  local_88 = local_20;
  local_80 = 0x11;
  local_78 = local_28;
  local_70 = 0x11;
  local_68 = &DAT_0072c86c;
  local_60 = 0xb;
  local_58 = local_20;
  local_50 = 0x11;
  FUN_00442f70(param_2,L"%s%s%s%s%s%s%s%s%s%s",&local_e8,9);
  FUN_00414560(&local_f8,2);
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_38);
  FUN_00414560(&local_30,3);
  return param_2;
}

