/* Ghidra address: 01be8040 */
/* Ghidra symbol: FUN_01be8040 */


void FUN_01be8040(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [24];
  
  uVar1 = FUN_005ffa40(param_1[0x62]);
  (**(code **)(*param_1 + 0xe0))(param_1,local_38);
  thunk_FUN_03ea73e5(uVar1,local_38,1,
                     *(ushort *)
                      (&DAT_01fe1446 + (ulonglong)*(byte *)((longlong)param_1 + 0x339) * 2) |
                     *(ushort *)(&DAT_01fe1440 + (ulonglong)*(byte *)(param_1 + 0x68) * 2) |
                     *(ushort *)
                      (&DAT_01fe144a +
                      (ulonglong)(*(char *)((longlong)param_1 + 0x33a) == '\x02') * 2));
  return;
}

