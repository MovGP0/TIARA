/* Ghidra address: 00c79530 */
/* Ghidra symbol: FUN_00c79530 */


undefined8 FUN_00c79530(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00c79450(param_1,&local_10);
  FUN_00c703b0(local_10,*(undefined8 *)(param_1 + 0x390));
  uVar1 = *(undefined8 *)(param_1 + 0x390);
  FUN_00414480(&local_10);
  return uVar1;
}

