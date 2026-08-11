/* Ghidra address: 0107a3c0 */
/* Ghidra symbol: FUN_0107a3c0 */


undefined8 FUN_0107a3c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined8 local_20;
  undefined8 local_10;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_010b13a0(*(undefined8 *)(param_1 + 0xac8),local_res10[0],&local_10,0);
  if (cVar1 == '\0') {
    local_20 = 0;
  }
  else {
    local_20 = local_10;
  }
  FUN_00414480(local_res10);
  return local_20;
}

