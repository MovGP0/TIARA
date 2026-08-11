/* Ghidra address: 01227da0 */
/* Ghidra symbol: FUN_01227da0 */


undefined4 FUN_01227da0(void)

{
  short sVar1;
  undefined8 uVar2;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_5c = 8000;
  sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
  if (sVar1 == 0x42) {
    local_5c = 4000;
    FUN_0064de00(*(undefined8 *)(DAT_021076a0 + 0x988),L"Bandpass filter");
  }
  else if (sVar1 == 0x48) {
    local_5c = 3000;
    FUN_0064de00(*(undefined8 *)(DAT_021076a0 + 0x988),L"Highpass filter");
  }
  else if (sVar1 == 0x4c) {
    local_5c = 2000;
    FUN_0064de00(*(undefined8 *)(DAT_021076a0 + 0x988),L"Lowpass filter");
  }
  else if (sVar1 == 0x53) {
    local_5c = 5000;
    FUN_0064de00(*(undefined8 *)(DAT_021076a0 + 0x988),L"Bandstop filter");
  }
  sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa6);
  if (sVar1 == 0x42) {
    uVar2 = *(undefined8 *)(DAT_021076a0 + 0x988);
    FUN_0064dd90(uVar2,&local_28);
    FUN_00416ba0(local_20,L"Butterworth ",local_28);
    FUN_0064de00(uVar2,local_20[0]);
  }
  else if (sVar1 == 0x43) {
    uVar2 = *(undefined8 *)(DAT_021076a0 + 0x988);
    FUN_0064dd90(uVar2,&local_38);
    FUN_00416ba0(&local_30,L"Chebishev ",local_38);
    FUN_0064de00(uVar2,local_30);
  }
  else if (sVar1 == 0x45) {
    uVar2 = *(undefined8 *)(DAT_021076a0 + 0x988);
    FUN_0064dd90(uVar2,&local_48);
    FUN_00416ba0(&local_40,L"Elliptic ",local_48);
    FUN_0064de00(uVar2,local_40);
  }
  else if (sVar1 == 0x49) {
    uVar2 = *(undefined8 *)(DAT_021076a0 + 0x988);
    FUN_0064dd90(uVar2,&local_58);
    FUN_00416ba0(&local_50,L"Inverse Chebishev ",local_58);
    FUN_0064de00(uVar2,local_50);
  }
  FUN_00414480(&local_58);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return local_5c;
}

