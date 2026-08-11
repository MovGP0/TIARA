/* Ghidra address: 004d8880 */
/* Ghidra symbol: FUN_004d8880 */


void FUN_004d8880(longlong param_1,undefined2 param_2)

{
  undefined2 local_18 [4];
  undefined8 local_10;
  
  local_10 = 0;
  local_18[0] = param_2;
  FUN_00459790(*(undefined8 *)(param_1 + 0x10),&local_10,local_18,0);
  FUN_004d8330(param_1,local_10);
  FUN_00419430(&local_10,&DAT_00406578);
  return;
}

