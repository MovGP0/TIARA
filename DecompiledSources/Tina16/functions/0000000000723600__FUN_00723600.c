/* Ghidra address: 00723600 */
/* Ghidra symbol: FUN_00723600 */


void FUN_00723600(longlong param_1)

{
  longlong lVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_007287b0(*(undefined8 *)(param_1 + 8),local_20);
  FUN_00724380(lVar1,local_20[0]);
  (**(code **)(lVar1 + 0x130))(*(undefined8 *)(lVar1 + 0x138),*(undefined8 *)(param_1 + 0x10));
  FUN_00414480(local_20);
  return;
}

