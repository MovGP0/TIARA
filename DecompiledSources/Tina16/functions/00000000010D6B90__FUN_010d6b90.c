/* Ghidra address: 010d6b90 */
/* Ghidra symbol: FUN_010d6b90 */


undefined8 FUN_010d6b90(longlong param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  
  FUN_010d6a50(param_1,3,param_2);
  FUN_00409a70(*(undefined8 *)(param_1 + 0x80),local_20,8);
  return local_20[0];
}

