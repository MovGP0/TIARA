/* Ghidra address: 0043dec0 */
/* Ghidra symbol: FUN_0043dec0 */


undefined8 * FUN_0043dec0(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_c8 [2];
  undefined1 local_c0;
  uint local_b8;
  undefined1 local_b0;
  uint local_a8;
  undefined1 local_a0;
  uint local_98;
  undefined1 local_90;
  uint local_88;
  undefined1 local_80;
  uint local_78;
  undefined1 local_70;
  uint local_68;
  undefined1 local_60;
  uint local_58;
  undefined1 local_50;
  uint local_48;
  undefined1 local_40;
  uint local_38;
  undefined1 local_30;
  uint local_28;
  undefined1 local_20;
  
  FUN_004169f0(param_1,0x26);
  uVar1 = FUN_00416740(*param_1);
  local_c8[0] = *param_2;
  local_c0 = 0;
  local_b8 = (uint)*(ushort *)(param_2 + 1);
  local_b0 = 0;
  local_a8 = (uint)*(ushort *)((longlong)param_2 + 6);
  local_a0 = 0;
  local_98 = (uint)*(byte *)(param_2 + 2);
  local_90 = 0;
  local_88 = (uint)*(byte *)((longlong)param_2 + 9);
  local_80 = 0;
  local_78 = (uint)*(byte *)((longlong)param_2 + 10);
  local_70 = 0;
  local_68 = (uint)*(byte *)((longlong)param_2 + 0xb);
  local_60 = 0;
  local_58 = (uint)*(byte *)(param_2 + 3);
  local_50 = 0;
  local_48 = (uint)*(byte *)((longlong)param_2 + 0xd);
  local_40 = 0;
  local_38 = (uint)*(byte *)((longlong)param_2 + 0xe);
  local_30 = 0;
  local_28 = (uint)*(byte *)((longlong)param_2 + 0xf);
  local_20 = 0;
  FUN_00442ed0(uVar1,0x26,L"{%.8x-%.4x-%.4x-%.2x%.2x-%.2x%.2x%.2x%.2x%.2x%.2x}",local_c8,10);
  return param_1;
}

