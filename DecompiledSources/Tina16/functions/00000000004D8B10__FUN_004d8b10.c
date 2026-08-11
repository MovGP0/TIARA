/* Ghidra address: 004d8b10 */
/* Ghidra symbol: FUN_004d8b10 */


void FUN_004d8b10(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_00459810(*(undefined8 *)(param_1 + 0x10),&local_10,param_2);
  FUN_004d8330(param_1,local_10);
  FUN_00459ca0(*(undefined8 *)(param_1 + 0x10),&local_18,*(undefined8 *)(param_1 + 0x18));
  FUN_004d8330(param_1,local_18);
  FUN_00417840(&local_18,&DAT_00406578,2);
  return;
}

