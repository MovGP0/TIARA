/* Ghidra address: 013e1380 */
/* Ghidra symbol: FUN_013e1380 */


void FUN_013e1380(longlong *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_4e8 [32];
  undefined1 local_4c8;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined1 *local_4a0;
  undefined1 local_489;
  undefined1 *local_488;
  longlong local_480;
  undefined1 local_478 [8];
  undefined1 local_470 [8];
  undefined1 local_468 [8];
  undefined1 local_460 [8];
  undefined1 local_458 [8];
  undefined1 local_450 [8];
  undefined4 local_448;
  undefined1 local_444 [522];
  undefined1 local_23a [530];
  undefined8 local_28;
  undefined8 local_20;
  
  local_4a0 = auStack_4e8;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  FUN_00417580(local_478,&DAT_01d2e6d8);
  if (((param_1 != (longlong *)0x0) && (param_1[0x33] != 0)) &&
     (*(longlong *)(param_1[0x33] + 0x58) != 0)) {
    FUN_00416ba0(&local_4a8,*(undefined8 *)PTR_DAT_020030c8,&DAT_013e1810);
    FUN_00442620(local_23a,local_4a8);
    thunk_FUN_041b7910(local_23a,&DAT_013e1814,0,local_444);
    FUN_00416830(&local_4b0,local_444,0x105);
    local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,local_4b0,0xff00);
    local_4c8 = 0;
    local_20 = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,1);
    FUN_00414b50(local_478,L"Analysis result for Edison");
    FUN_00414b50(local_470,L"V1.00");
    FUN_00414b50(local_468,L"05/24/96 17:00 CET");
    FUN_00414b50(local_460,L"Analysis result preview.");
    FUN_00416ba0(local_458,L"TINA ",*(undefined8 *)PTR_DAT_02004728);
    FUN_00414b50(local_450,L"(c) Copyright 1993,94,95,96 DesignSoft Inc.\n\rAll rights reserved.");
    local_448 = 0;
    FUN_01d318b0(local_20,local_478);
    if (*(longlong *)PTR_DAT_020027c0 != 0) {
      (**(code **)(**(longlong **)PTR_DAT_020027c0 + 0x40))(*(longlong **)PTR_DAT_020027c0,local_20)
      ;
    }
    iVar2 = FUN_01d31a40(local_20);
    if (iVar2 != 0) {
      uVar3 = FUN_01d31a40(local_20);
      FUN_00b047e0(uVar3);
    }
    FUN_00410f20(local_20);
    local_4c8 = 0;
    local_20 = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,0x40);
    FUN_004b6dc0(local_28,0);
    FUN_01d317c0(local_20,local_478);
    local_480 = FUN_01cc3bb0(&PTR_FUN_01cb5bc0,1,local_20);
    if (*(longlong *)PTR_DAT_020027c0 != 0) {
      *(undefined8 *)(local_480 + 0x28) = *(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 0x28);
    }
    iVar2 = FUN_01d31a40(local_20);
    if (iVar2 != 0) {
      uVar3 = FUN_01d31a40(local_20);
      FUN_00b047e0(uVar3);
    }
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
    FUN_00416830(&local_4b8,local_444,0x105);
    FUN_004412f0(local_4b8);
    sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar1 != 0x3d) {
      sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
      if (sVar1 != 0x65) {
        sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
        if (sVar1 != 0x3e) {
          sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
          if (sVar1 != 0x66) goto LAB_013e1739;
        }
        (**(code **)(*param_1 + 0x2d0))(param_1,7,&local_488);
        local_489 = *local_488;
        local_4c8 = 1;
        FUN_013d4bc0(local_480,1,0,local_489);
        goto LAB_013e1739;
      }
    }
    FUN_013d2f60(local_480,0,0);
  }
LAB_013e1739:
  FUN_00414560(&local_4b8,3);
  FUN_00417740(local_478,&DAT_01d2e6d8);
  return;
}

