/* Ghidra address: 01ae6d30 */
/* Ghidra symbol: FUN_01ae6d30 */


undefined1 FUN_01ae6d30(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 local_c1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_58 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_50[0] = 0;
  local_c1 = 0;
  local_30[0] = 0;
  cVar1 = FUN_01acff30(param_1,local_30);
  if (cVar1 == '\x02') {
    (**(code **)(*(longlong *)*param_2 + 0x90))((longlong *)*param_2);
    FUN_0041ddd0(&local_90,PTR_PTR_02001b58);
    local_88 = local_90;
    local_80 = 0x11;
    FUN_0041ddd0(&local_98,PTR_PTR_02005160);
    local_78 = local_98;
    local_70 = 0x11;
    FUN_0041ddd0(&local_a0,PTR_PTR_02004bf8);
    local_68 = local_a0;
    local_60 = 0x11;
    FUN_00442f70(&local_58,L"%-16s %-18s %-18s",&local_88,2);
    (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_58);
    iVar5 = *(int *)(local_30[0] + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar2 = FUN_004aeac0(local_30[0],iVar4);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01aae560);
        if (cVar1 != '\0') {
          uVar2 = FUN_004aeac0(local_30[0],iVar4);
          lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01aae560);
          FUN_01ab5600(lVar3,*(undefined8 *)(*(longlong *)(lVar3 + 0xf8) + 0xb8),
                       *(undefined8 *)(*(longlong *)(lVar3 + 0xf8) + 0xc0),&local_38,&local_40);
          FUN_01ab2940(lVar3,&local_b0);
          local_88 = local_b0;
          local_80 = 0x11;
          FUN_00b8fec0(&local_b8,local_38,*PTR_DAT_02005310,0,0x3cd203af9ee75616);
          local_78 = local_b8;
          local_70 = 0x11;
          FUN_00b8fec0(&local_c0,local_40,*PTR_DAT_02005310,0,0x3cd203af9ee75616);
          FUN_00416ad0(&local_c0,&LAB_01ae70f4);
          local_68 = local_c0;
          local_60 = 0x11;
          FUN_00442f70(&local_a8,L"%-16s %-18s %-18s",&local_88,2);
          (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_a8);
          local_c1 = 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00410f20(local_30[0]);
  }
  else {
    FUN_0041ddd0(local_50,&PTR_PTR_01acd590);
    FUN_0072d440(local_50[0],1,4,0);
    FUN_00410f20(local_30[0]);
  }
  FUN_00414560(&local_c0,7);
  FUN_00414560(&local_58,2);
  return local_c1;
}

