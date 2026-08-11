/* Ghidra address: 0196a3c0 */
/* Ghidra symbol: FUN_0196a3c0 */


void FUN_0196a3c0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x180) + 0xa9) != '\0') {
    FUN_00805990(*(longlong *)(param_1 + 0x180));
  }
  FUN_00800470(*(undefined8 *)(param_1 + 0x180),*(undefined1 *)(param_1 + 0x1d8));
  FUN_00800700(*(undefined8 *)(param_1 + 0x180),*(undefined1 *)(param_1 + 0x1d9));
  lVar1 = *(longlong *)(param_1 + 0x180);
  *(longlong *)(lVar1 + 0x568) = param_1;
  *(code **)(lVar1 + 0x560) = FUN_0196a7a0;
  *(longlong *)(lVar1 + 0x200) = param_1;
  *(code **)(lVar1 + 0x1f8) = FUN_0196a890;
  *(longlong *)(lVar1 + 0x5a8) = param_1;
  *(code **)(lVar1 + 0x5a0) = FUN_0196a8e0;
  *(longlong *)(lVar1 + 0x5b8) = param_1;
  *(code **)(lVar1 + 0x5b0) = FUN_0196aa60;
  *(longlong *)(lVar1 + 0x5d8) = param_1;
  *(code **)(lVar1 + 0x5d0) = FUN_0196aab0;
  *(longlong *)(lVar1 + 0x3f0) = param_1;
  *(code **)(lVar1 + 1000) = FUN_0196ab00;
  *(longlong *)(lVar1 + 0x400) = param_1;
  *(code **)(lVar1 + 0x3f8) = FUN_0196ace0;
  *(longlong *)(lVar1 + 0x410) = param_1;
  *(code **)(lVar1 + 0x408) = FUN_0196af50;
  *(longlong *)(lVar1 + 0x608) = param_1;
  *(code **)(lVar1 + 0x600) = FUN_0196b130;
  *(longlong *)(lVar1 + 0x1b0) = param_1;
  *(code **)(lVar1 + 0x1a8) = FUN_0196b250;
  *(longlong *)(lVar1 + 0x170) = param_1;
  *(code **)(lVar1 + 0x168) = FUN_0196a750;
  return;
}

