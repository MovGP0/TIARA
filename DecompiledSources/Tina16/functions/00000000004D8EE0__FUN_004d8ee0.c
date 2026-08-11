/* Ghidra address: 004d8ee0 */
/* Ghidra symbol: FUN_004d8ee0 */


void FUN_004d8ee0(longlong param_1,undefined2 param_2)

{
  undefined8 local_20;
  undefined2 local_18 [4];
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18[0] = param_2;
  FUN_00459790(*(undefined8 *)(param_1 + 0x10),&local_10,local_18,0);
  FUN_004d8330(param_1,local_10);
  FUN_00459ca0(*(undefined8 *)(param_1 + 0x10),&local_20,*(undefined8 *)(param_1 + 0x18));
  FUN_004d8330(param_1,local_20);
  FUN_00419430(&local_20,&DAT_00406578);
  FUN_00419430(&local_10,&DAT_00406578);
  return;
}

