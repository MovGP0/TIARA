/* Ghidra address: 00b06990 */
/* Ghidra symbol: FUN_00b06990 */


void FUN_00b06990(longlong *param_1)

{
  undefined1 local_28 [16];
  
  if ((char)param_1[0x93] == '\0') {
    FUN_005fdab0(*(undefined8 *)(param_1[0x92] + 0x80),0xff000005);
  }
  else {
    FUN_005fdab0(*(undefined8 *)(param_1[0x92] + 0x80),0xff00000f);
  }
  FUN_005fdcb0(*(undefined8 *)(param_1[0x92] + 0x80),0);
  (**(code **)(*param_1 + 0xe0))(param_1,local_28);
  (**(code **)(*(longlong *)param_1[0x92] + 0xa8))((longlong *)param_1[0x92],local_28);
  if ((char)param_1[0x94] == '\x01') {
    FUN_005fd4e0(*(undefined8 *)(param_1[0x92] + 0x78),*(undefined4 *)((longlong)param_1 + 0x49c));
    FUN_005fd6d0(*(undefined8 *)(param_1[0x92] + 0x78),1);
    (**(code **)(*param_1 + 0xe0))(param_1,local_28);
    FUN_005fdf50(param_1[0x92],local_28);
  }
  if (*(char *)((longlong)param_1 + 0x499) != '\0') {
    FUN_0060a8f0(param_1[0x95],PTR_IMAGE_DOS_HEADER_0200c280,L"RXSTICK");
    (**(code **)(*(longlong *)param_1[0x95] + 0x80))((longlong *)param_1[0x95],1);
    (**(code **)(*param_1 + 0xe0))(param_1,local_28);
    (**(code **)(*(longlong *)param_1[0x92] + 0x110))
              ((longlong *)param_1[0x92],local_28,param_1[0x95]);
  }
  return;
}

