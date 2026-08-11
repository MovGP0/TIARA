/* Ghidra address: 00ed62c0 */
/* Ghidra symbol: FUN_00ed62c0 */


undefined1 FUN_00ed62c0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 auStack_148 [40];
  undefined1 local_120 [256];
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_148;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_9 = 1;
  FUN_00416910(local_120,local_res10[0],0xff);
  FUN_016a4200(local_120,*(undefined8 *)(*(longlong *)(param_1 + 0x628) + 0x10));
  FUN_00414480(local_res10);
  return local_9;
}

