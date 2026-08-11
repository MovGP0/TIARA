/* Ghidra address: 00f2ea90 */
/* Ghidra symbol: FUN_00f2ea90 */


void FUN_00f2ea90(longlong param_1,undefined2 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00416780(&local_10,param_2);
  FUN_00416ad0(param_1 + 0x10,local_10);
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00414480(&local_10);
  return;
}

