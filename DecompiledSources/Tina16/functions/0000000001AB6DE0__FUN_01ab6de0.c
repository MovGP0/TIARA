/* Ghidra address: 01ab6de0 */
/* Ghidra symbol: FUN_01ab6de0 */


undefined8 FUN_01ab6de0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01cc0ae0(*(undefined8 *)(param_1 + 0x98),&local_10);
  FUN_01ce7b20(&local_10);
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  return param_2;
}

