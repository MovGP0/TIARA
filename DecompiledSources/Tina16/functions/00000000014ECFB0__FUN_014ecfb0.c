/* Ghidra address: 014ecfb0 */
/* Ghidra symbol: FUN_014ecfb0 */


void FUN_014ecfb0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  longlong local_28;
  
  local_60 = auStack_e8;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_70 = 0;
  local_78 = 0;
  local_a0 = 0;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  iVar5 = *(int *)(local_res20 + 0x10);
  local_2c = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_28 = FUN_004aeac0(local_res20,local_2c);
      FUN_00415dd0(&local_38,*(undefined8 *)(local_28 + 8),0);
      FUN_00416880(&local_40,local_38);
      if (*(char *)(local_28 + 0x18) == '\0') {
        FUN_00416ba0(&local_48,local_res10,*(undefined8 *)(local_28 + 0x10));
      }
      else {
        FUN_00416ba0(&local_48,local_res18,*(undefined8 *)(local_28 + 0x10));
      }
      if (*(char *)(param_1 + 0x2371) != '\0') {
        FUN_0041ddd0(&local_68,PTR_PTR_020011f0);
        FUN_014ebd70(param_1,local_68);
        *(undefined1 *)(param_1 + 0x2371) = 0;
        break;
      }
      uVar3 = FUN_004425e0(param_1 + 0x768,local_38);
      _Pkg_NewLibrary(uVar3,1,param_1 + 0xb6a);
      FUN_0041ddd0(&local_78,PTR_PTR_02002b58);
      FUN_00441920(&local_a0,local_48);
      local_98 = local_a0;
      local_90 = 0x11;
      local_88 = local_40;
      local_80 = 0x11;
      FUN_00442f70(&local_70,local_78,&local_98,1);
      FUN_014ebd70(param_1,local_70);
      uVar3 = FUN_00442620(param_1 + 0xb6a,local_48);
      uVar4 = FUN_00442620(param_1 + 0x136c,local_40);
      cVar1 = _Pkg_CompilePackage(uVar3,uVar4,1,param_1 + 0x1b6e);
      if (cVar1 == '\0') {
        FUN_00416830(&local_b0,param_1 + 0x1b6e,0x401);
        uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1);
        FUN_004134c0(uVar3);
      }
      else {
        FUN_0041ddd0(&local_a8,PTR_PTR_02003f58);
        FUN_014ebde0(param_1,local_a8);
      }
      uVar2 = FUN_0040c770(((double)local_2c / (double)*(int *)(local_res20 + 0x10)) * 100.0);
      FUN_014ebef0(param_1,uVar2);
      local_2c = local_2c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  _Pkg_GetLibraryList(1,param_1 + 0xb6a);
  FUN_014ebf20(param_1,param_1 + 0xb6a);
  FUN_00414560(&local_c0,5);
  FUN_00414560(&local_78,3);
  FUN_00414560(&local_48,2);
  FUN_004144d0(&local_38);
  FUN_00414560(&local_res10,2);
  return;
}

