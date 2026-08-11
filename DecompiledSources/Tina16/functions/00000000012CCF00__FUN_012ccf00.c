/* Ghidra address: 012ccf00 */
/* Ghidra symbol: FUN_012ccf00 */


void FUN_012ccf00(longlong param_1)

{
  double dVar1;
  uint local_50 [2];
  undefined1 local_48;
  uint local_40;
  undefined1 local_38;
  uint local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  undefined1 local_10 [2];
  ushort local_e;
  ushort local_c;
  ushort local_a;
  
  local_20[0] = 0;
  dVar1 = (double)FUN_00448ea0();
  FUN_00448ad0(dVar1 - *(double *)(param_1 + 0x750),&local_a,&local_c,&local_e,local_10);
  local_50[0] = (uint)local_a;
  local_48 = 0;
  local_40 = (uint)local_c;
  local_38 = 0;
  local_30 = (uint)local_e;
  local_28 = 0;
  FUN_00442f70(local_20,L"%d:%.2d:%.2d",local_50,2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_20[0]);
  FUN_00414480(local_20);
  return;
}

