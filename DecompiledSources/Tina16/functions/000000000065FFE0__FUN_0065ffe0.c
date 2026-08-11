/* Ghidra address: 0065ffe0 */
/* Ghidra symbol: FUN_0065ffe0 */


undefined8 FUN_0065ffe0(longlong param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = FUN_007d7880(param_1);
  if ((*(longlong *)(param_1 + 0xa0) != 0) && (*(char *)(param_1 + 0xea) != '\0')) {
    thunk_FUN_041ddb89(0,local_20);
  }
  return local_20[0];
}

