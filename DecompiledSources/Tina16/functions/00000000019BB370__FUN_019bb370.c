/* Ghidra address: 019bb370 */
/* Ghidra symbol: FUN_019bb370 */


void FUN_019bb370(longlong *param_1)

{
  undefined1 local_28 [16];
  
  FUN_006604b0(param_1);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    (**(code **)(*param_1 + 0x270))(param_1);
  }
  else {
    FUN_005fd670(*(undefined8 *)(param_1[0x92] + 0x78),2);
    FUN_005fdcb0(*(undefined8 *)(param_1[0x92] + 0x80),1);
    (**(code **)(*param_1 + 0xe0))(param_1,local_28);
    FUN_005fdf50(param_1[0x92],local_28);
  }
  return;
}

