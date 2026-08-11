/* Ghidra address: 01a54070 */
/* Ghidra symbol: FUN_01a54070 */


void FUN_01a54070(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = auStack_68;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  local_10 = FUN_0147b0e0(&DAT_0147a8f8,1);
  local_18 = FUN_0147b0e0(&DAT_0147a8f8,1);
  if (*(longlong *)(param_1 + 0x858) == 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x2968) + 0xb4) < 1) {
      FUN_00414b50(&local_20,L"Default.json");
    }
    else {
      FUN_00414b50(&local_20,L"Default_nocalc.json");
    }
  }
  else {
    FUN_00416ba0(&local_20,*(undefined8 *)(param_1 + 0x858),L".json");
  }
  FUN_01a53320(param_1,local_20,param_2);
  FUN_01a53b60(param_1,local_10);
  FUN_01a537c0(param_1,local_18);
  if (*(longlong *)(local_10 + 0x10) != 0) {
    FUN_00414ad0(param_2 + 0x10,*(undefined8 *)(local_10 + 0x10));
  }
  if (*(longlong *)(local_10 + 0x18) != 0) {
    FUN_00414ad0(param_2 + 0x18,*(undefined8 *)(local_10 + 0x18));
  }
  FUN_00414ad0(param_2 + 0x28,*(undefined8 *)(local_18 + 0x28));
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(local_18 + 0x4c);
  FUN_01a54400(param_1,&local_38,*(undefined8 *)(local_18 + 8),param_2 + 0x38);
  FUN_00414ad0(param_2 + 8,local_38);
  FUN_01a53cb0(param_1,&local_40,param_2);
  FUN_00414ad0(param_2 + 0x40,local_40);
  if (*(longlong *)(param_2 + 0x18) == 0) {
    FUN_00414ad0(param_2 + 0x18,L"%RUNFILTERW%\r\n%RUNDESIGN%\r\n%RUNANALYSIS%");
  }
  FUN_01a53c00(param_1,&local_48);
  FUN_00414ad0(param_2 + 0x30,local_48);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  uVar1 = FUN_01b218a0(*(undefined1 *)(param_1 + 0x293d));
  *(undefined4 *)(param_2 + 100) = uVar1;
  if (param_3 == '\0') {
    uVar2 = FUN_01a56c80(param_1);
    *(undefined8 *)(param_2 + 0xa8) = uVar2;
  }
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00414560(&local_48,3);
  FUN_00414480(&local_20);
  return;
}

