/* Ghidra address: 01a2d150 */
/* Ghidra symbol: FUN_01a2d150 */


void FUN_01a2d150(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong local_38;
  longlong local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  cVar1 = FUN_01b256f0(L"PicFileName",L"ImportPicExt",local_20);
  if (cVar1 != '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_20[0]);
    FUN_00414ad0(param_1 + 0x700,local_20[0]);
  }
  cVar1 = FUN_01b256f0(L"CIRFileName",L"ImportPicExt",local_20);
  if (cVar1 != '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_20[0]);
    FUN_00414ad0(param_1 + 0x708,local_20[0]);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),local_30);
  uVar2 = 0;
  if (local_30[0] != 0) {
    uVar2 = *(undefined4 *)(local_30[0] + -4);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x290))(*(longlong **)(param_1 + 0x6e0),uVar2);
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x288))(*(longlong **)(param_1 + 0x6e0),0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_38);
  uVar2 = 0;
  if (local_38 != 0) {
    uVar2 = *(undefined4 *)(local_38 + -4);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x290))(*(longlong **)(param_1 + 0x6d8),uVar2);
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x288))(*(longlong **)(param_1 + 0x6d8),0);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

