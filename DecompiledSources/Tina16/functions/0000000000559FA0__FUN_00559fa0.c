/* Ghidra address: 00559fa0 */
/* Ghidra symbol: FUN_00559fa0 */


undefined8 FUN_00559fa0(longlong param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = *(undefined8 *)(param_1 + 0x40);
  FUN_0056b0f0(param_2,local_20,0);
  return param_2;
}

