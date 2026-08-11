/* Ghidra address: 0172ce80 */
/* Ghidra symbol: FUN_0172ce80 */


undefined8 FUN_0172ce80(longlong param_1,undefined8 param_2,ushort param_3)

{
  longlong lVar1;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_132 [256];
  undefined1 local_32 [22];
  undefined4 local_1c;
  
  local_140 = 0;
  local_148 = 0;
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x14) + (uint)param_3 * 0x1a + 2);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_32,0x1a);
  FUN_0172a910(*(undefined8 *)(param_1 + 8),local_1c);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_132,0x1f);
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_004169a0(&local_148,local_132);
  FUN_0172ba20(lVar1,&local_140,local_148,*(undefined8 *)(lVar1 + 0x20),0);
  FUN_00416910(param_2,local_140,0xff);
  FUN_00414560(&local_148,2);
  return param_2;
}

