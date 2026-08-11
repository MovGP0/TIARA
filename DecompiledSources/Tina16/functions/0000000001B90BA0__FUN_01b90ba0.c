/* Ghidra address: 01b90ba0 */
/* Ghidra symbol: FUN_01b90ba0 */


bool FUN_01b90ba0(longlong param_1)

{
  bool bVar1;
  undefined8 local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_18);
  FUN_00b90780(&local_10,local_18);
  bVar1 = local_10 != 0;
  FUN_00414480(&local_18);
  FUN_00414480(&local_10);
  return bVar1;
}

