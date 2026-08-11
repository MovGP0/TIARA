/* Ghidra address: 01782200 */
/* Ghidra symbol: FUN_01782200 */


void FUN_01782200(longlong param_1)

{
  ushort uVar1;
  uint local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00448ed0();
  uVar1 = FUN_005bba20();
  local_20[0] = (uint)uVar1;
  local_18 = 0;
  FUN_00442f70(&local_10,L"Copyright 1997-%d DesignSoft",local_20,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_10);
  FUN_00414480(&local_10);
  return;
}

