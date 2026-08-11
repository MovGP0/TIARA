/* Ghidra address: 01a59b20 */
/* Ghidra symbol: FUN_01a59b20 */


undefined1 FUN_01a59b20(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_91;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_91 = 1;
  bVar2 = true;
  lVar1 = *(longlong *)(param_1 + 0x2978);
  if (((*(char *)(lVar1 + 0x3a) == '\0') && (*(char *)(lVar1 + 0x39) == '\0')) &&
     (0 < *(int *)(lVar1 + 0x10))) {
    FUN_019cdc10(lVar1,L"Failed (by no match)",0,0);
  }
  while (bVar2) {
    lVar1 = *(longlong *)(param_1 + 0x2978);
    if (*(int *)(lVar1 + 8) < *(int *)(lVar1 + 0x10)) {
      if (*(int *)(lVar1 + 0x14) == *(int *)(*(longlong *)(lVar1 + 0x40) + 0x10) + -1) {
        local_91 = 0;
        FUN_01a59250(param_1);
        if (*(int *)(*(longlong *)(param_1 + 0x2978) + 0x4c) < 1) {
          FUN_00414b50(local_20,L"Autotest successfully completed");
        }
        else {
          FUN_00414b50(local_20,L"Autotest successfully completed with ERRORS");
        }
        FUN_0072d440(local_20[0],2,4,0);
        bVar2 = false;
        if (*(longlong *)PTR_DAT_02001920 != 0) {
          FUN_00805200(*(undefined8 *)PTR_DAT_02001920);
          bVar2 = false;
        }
      }
      else {
        *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
        lVar1 = *(longlong *)(param_1 + 0x2978);
        *(undefined4 *)(lVar1 + 0x10) = 0;
        FUN_019cdae0(lVar1,*(undefined8 *)(param_1 + 0x2968),0);
        FUN_019ce6c0(*(undefined8 *)PTR_DAT_02001920,
                     *(int *)(*(longlong *)(param_1 + 0x2978) + 0x14) + 1,
                     *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x2978) + 0x40) + 0x10),
                     *(undefined8 *)(param_1 + 0x2968));
      }
    }
    else {
      *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
      if (*(longlong *)PTR_DAT_02001920 != 0) {
        FUN_019ce540(*(undefined8 *)PTR_DAT_02001920,
                     *(undefined4 *)(*(longlong *)(param_1 + 0x2978) + 0x10),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x2978) + 8));
        FUN_019ce610(*(undefined8 *)PTR_DAT_02001920,
                     *(undefined4 *)(*(longlong *)(param_1 + 0x2978) + 0x4c));
      }
      FUN_019cd9a0(*(longlong *)(param_1 + 0x2978),local_40,
                   *(int *)(*(longlong *)(param_1 + 0x2978) + 0x10) + -1,L"question");
      FUN_00414ad0(*(longlong *)(param_1 + 0x2978) + 0x20,local_40[0]);
      lVar1 = *(longlong *)(param_1 + 0x2978);
      *(undefined1 *)(lVar1 + 0x3a) = 0;
      uVar3 = FUN_019ce2d0(lVar1,*(int *)(lVar1 + 0x10) + -1,L"item_id");
      lVar1 = *(longlong *)(param_1 + 0x2978);
      *(undefined4 *)(lVar1 + 0x48) = uVar3;
      FUN_019ce3c0(lVar1,&local_48,*(int *)(lVar1 + 0x10) + -1,L"question");
      FUN_00414ad0(*(longlong *)(param_1 + 0x2978) + 0x20,local_48);
      FUN_019ce3c0(*(longlong *)(param_1 + 0x2978),&local_50,
                   *(int *)(*(longlong *)(param_1 + 0x2978) + 0x10) + -1,L"comment");
      FUN_00414ad0(*(longlong *)(param_1 + 0x2978) + 0x28,local_50);
      FUN_019ce3c0(*(longlong *)(param_1 + 0x2978),&local_58,
                   *(int *)(*(longlong *)(param_1 + 0x2978) + 0x10) + -1);
      FUN_00414ad0(*(longlong *)(param_1 + 0x2978) + 0x30,local_58);
      FUN_0043e1a0(&local_60,*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x28));
      iVar4 = FUN_004170c0(L"calculate voltage",local_60,1);
      if (iVar4 < 1) {
        FUN_0043e1a0(&local_70,*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x28));
        iVar4 = FUN_004170c0(L"calculate resistance",local_70,1);
        if (iVar4 < 1) {
          FUN_0043e1a0(&local_80,*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x28));
          iVar4 = FUN_004170c0(L"calculate total resistance",local_80,1);
          if (0 < iVar4) {
            FUN_00416ba0(&local_88,*(undefined8 *)PTR_DAT_020049a0,
                         L"\\Examples\\AI\\CalcACDC\\g-ser-par1-ok.TSC");
            FUN_01c681b0(*(undefined8 *)PTR_DAT_02004e40,local_88,0,0,0,0,1);
          }
        }
        else {
          FUN_00416ba0(&local_78,*(undefined8 *)PTR_DAT_020049a0,
                       L"\\Examples\\AI\\CalcACDC\\ohm-1.TSC");
          FUN_01c681b0(*(undefined8 *)PTR_DAT_02004e40,local_78,0,0,0,0,1);
        }
      }
      else {
        FUN_00416ba0(&local_68,*(undefined8 *)PTR_DAT_020049a0,
                     L"\\Examples\\AI\\CalcACDC\\g-grid1-ok.TSC");
        FUN_01c681b0(*(undefined8 *)PTR_DAT_02004e40,local_68,0,0,0,0,1);
      }
      FUN_0043e1a0(&local_90,*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x28));
      iVar4 = FUN_004170c0(L"not processed",local_90);
      if (iVar4 == 0) {
        FUN_01a58950(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x20));
      }
      FUN_019cd8c0(*(undefined8 *)(param_1 + 0x2978),0);
      *(undefined1 *)(*(longlong *)(param_1 + 0x2978) + 0x39) = 0;
      bVar2 = iVar4 != 0;
    }
  }
  FUN_00414560(&local_90,0xb);
  FUN_00414560(&local_30,3);
  return local_91;
}

