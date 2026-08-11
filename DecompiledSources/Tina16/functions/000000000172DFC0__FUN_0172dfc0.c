/* Ghidra address: 0172dfc0 */
/* Ghidra symbol: FUN_0172dfc0 */


undefined8 FUN_0172dfc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [264];
  
  local_120 = 0;
  local_128 = 0;
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x174) + -0x1f);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_118,0x1f);
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_004169a0(&local_128,local_118);
  FUN_0172ba20(lVar1,&local_120,local_128,*(undefined8 *)(lVar1 + 0x20),0);
  FUN_00416910(param_2,local_120,0xff);
  FUN_00414560(&local_128,2);
  return param_2;
}

