/* Ghidra address: 019ac180 */
/* Ghidra symbol: FUN_019ac180 */


void FUN_019ac180(longlong param_1,undefined8 param_2)

{
  undefined1 local_110 [256];
  undefined8 local_10;
  
  local_10 = 0;
  FUN_019ac000(&local_10,param_2,0x14);
  FUN_00416910(local_110,local_10,0xff);
  FUN_00415020(param_1 + 0x293,local_110,200);
  *(undefined1 *)(param_1 + 0x36c) = 0;
  FUN_00414480(&local_10);
  return;
}

