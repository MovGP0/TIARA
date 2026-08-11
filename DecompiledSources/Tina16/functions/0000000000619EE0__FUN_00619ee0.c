/* Ghidra address: 00619ee0 */
/* Ghidra symbol: FUN_00619ee0 */


void FUN_00619ee0(longlong param_1,undefined8 *param_2)

{
  undefined8 *local_20;
  
  local_20 = (undefined8 *)0x0;
  FUN_00419430(&local_20,&DAT_004dbd78);
  FUN_00419260(&local_20,&DAT_004dbd78,1,1);
  *local_20 = *param_2;
  local_20[1] = param_2[1];
  FUN_00419670(param_1 + 0x10,*(undefined8 *)(param_1 + 0x10),local_20,&DAT_004dbd78);
  FUN_00419430(&local_20,&DAT_004dbd78);
  return;
}

