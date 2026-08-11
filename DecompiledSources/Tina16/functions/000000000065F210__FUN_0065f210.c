/* Ghidra address: 0065f210 */
/* Ghidra symbol: FUN_0065f210 */


void FUN_0065f210(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if ((*(longlong *)(param_2 + 8) != 0) && ((*(ushort *)((longlong)param_1 + 0x34) & 8) == 0)) {
    FUN_005fdf10(param_1[0x62]);
    FUN_005ffb10(param_1[0x62],*(undefined8 *)(param_2 + 8));
    (**(code **)(*param_1 + 0x1a8))(param_1);
    FUN_005ffb10(param_1[0x62],0);
    FUN_005fe090(param_1[0x62]);
  }
  return;
}

