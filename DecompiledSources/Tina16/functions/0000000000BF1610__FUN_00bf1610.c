/* Ghidra address: 00bf1610 */
/* Ghidra symbol: FUN_00bf1610 */


short FUN_00bf1610(undefined8 param_1,undefined8 param_2)

{
  short local_c;
  short local_a;
  
  FUN_00525a80(param_1,param_2,&local_a,&local_c);
  if (local_c != 0) {
    local_a = local_a + 1;
  }
  return local_a;
}

