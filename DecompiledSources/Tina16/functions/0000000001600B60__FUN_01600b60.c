/* Ghidra address: 01600b60 */
/* Ghidra symbol: FUN_01600b60 */


void FUN_01600b60(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  double in_stack_fffffffffffff300;
  double dVar8;
  ulonglong uVar9;
  undefined8 in_stack_fffffffffffff308;
  undefined4 uVar10;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 local_c88;
  undefined8 local_c80 [2];
  undefined4 local_c6c;
  undefined8 local_c68 [65];
  undefined1 local_a5d [513];
  undefined1 local_85c [1026];
  undefined1 local_45a [1026];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c [5];
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffff308 >> 0x20);
  local_cc0 = 0;
  local_cc8 = 0;
  local_cb0 = 0;
  local_cb8 = 0;
  local_ca8 = 0;
  local_ca0 = 0;
  local_c98 = 0;
  local_c88 = 0;
  local_c90 = 0;
  local_c80[0] = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = (undefined8 *)0x0;
  lVar3 = FUN_01600b40(param_1);
  dVar8 = *(double *)(lVar3 + 0x108);
  if (dVar8 == 48000000.0) {
    FUN_015fcb30(&local_40,&DAT_0210f7fc);
    FUN_00416cd0(&local_50,3,local_40,L"\\Temp\\",L"flash_rom.hex");
    if ((*(int *)(lVar3 + 0x100) == 2) && (cVar1 = FUN_01600550(lVar3), cVar1 != '\0')) {
      uVar4 = FUN_00442620(local_45a,local_40);
      FUN_015fcc20(uVar4,&local_58,0,0);
      FUN_015fe840(&local_48,local_40,param_1);
      uVar4 = FUN_00442620(local_85c,local_48);
      _CreateSimulatorObject(local_58,8,uVar4);
      puVar6 = local_38;
      FUN_015fbde0(local_58,local_2c,&local_30,local_34,puVar6,local_48,CONCAT44(uVar10,8));
      uVar10 = (undefined4)((ulonglong)puVar6 >> 0x20);
      _FreeSimulatorObject(local_58);
      FUN_016006b0(lVar3,2,local_58,local_2c[0],CONCAT44(uVar10,local_30),dVar8,local_48,8,local_c68
                  );
      uVar4 = FUN_00f79380(local_c68[0]);
      (**(code **)(**(longlong **)(lVar3 + 0xd8) + 0x10))(*(longlong **)(lVar3 + 0xd8),uVar4);
      FUN_00410f20(local_c68[0]);
      uVar4 = FUN_00442620(local_45a,local_40);
      FUN_015fcd60(local_58,uVar4,0);
      in_stack_fffffffffffff300 = dVar8;
    }
    iVar2 = *(int *)(lVar3 + 0x100);
    if ((iVar2 == 2) || (iVar2 == 0)) {
      FUN_015febc0(local_40,param_1);
      FUN_015fe840(&local_48,local_40,param_1);
      FUN_00415dd0(local_c80,local_48,0);
      FUN_015ff620(local_40,local_58,param_1,local_c80[0]);
    }
    else if (iVar2 == 3) {
      (**(code **)(**(longlong **)(lVar3 + 0xd0) + 0x100))(*(longlong **)(lVar3 + 0xd0),local_50);
    }
    else if (iVar2 == 1) {
      (**(code **)(**(longlong **)(lVar3 + 0xd0) + 0x100))(*(longlong **)(lVar3 + 0xd0),local_50);
    }
    else {
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_c90,PTR_PTR_02003f18);
      FUN_00b8e650(uVar4,&local_c88,L"HDLStrings.Msg_CannotDownload",local_c90);
      FUN_016fd940(local_c88);
    }
    if (*(int *)(lVar3 + 0x100) != 1) {
      plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*plVar5 + 0xd8))(plVar5,local_50);
      iVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
      (**(code **)(*plVar5 + 0x98))(plVar5,iVar2 + -1);
      FUN_0043e1a0(&local_c98,L":020000040001F9");
      (**(code **)(*plVar5 + 0x78))(plVar5,local_c98);
      FUN_0043e1a0(&local_ca0,L":06FFF800A4F705FFF8F775");
      (**(code **)(*plVar5 + 0x78))(plVar5,local_ca0);
      FUN_0043e1a0(&local_ca8,L":00000001FF");
      (**(code **)(*plVar5 + 0x78))(plVar5,local_ca8);
      (**(code **)(*plVar5 + 0x100))(plVar5,local_50);
      FUN_00410f20(plVar5);
    }
    FUN_015fcbd0(&DAT_0210f7fc,0);
    uVar7 = 0;
    FUN_00416cd0(&local_cb0,3,local_40,L"\\Temp\\",L"flash_rom.hex");
    FUN_00415dd0(&local_cb8,local_cb0,0);
    uVar4 = FUN_004425e0(local_a5d,local_cb8);
    uVar7 = uVar7 & 0xffffffff00000000;
    uVar9 = (ulonglong)in_stack_fffffffffffff300 & 0xffffffff00000000;
    FUN_00e1e220(0,0,4,&local_c6c,uVar7,uVar9,uVar4);
    local_c6c = 1;
    FUN_00e1e220(0,0,1,&local_c6c,uVar7 & 0xffffffff00000000,uVar9 & 0xffffffff00000000,0);
  }
  else {
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_cc8,PTR_PTR_02001f38);
    FUN_00b8e650(uVar4,&local_cc0,L"HDLStrings.Msg_No48MHzPic18",local_cc8);
    FUN_016fd940(local_cc0);
  }
  FUN_00414560(&local_cc8,2);
  FUN_004144d0(&local_cb8);
  FUN_00414560(&local_cb0,6);
  FUN_004144d0(local_c80);
  FUN_00414560(&local_50,3);
  return;
}

