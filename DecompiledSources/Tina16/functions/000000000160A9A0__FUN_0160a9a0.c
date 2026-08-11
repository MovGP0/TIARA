/* Ghidra address: 0160a9a0 */
/* Ghidra symbol: FUN_0160a9a0 */


undefined8 FUN_0160a9a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_10;
  undefined4 local_c;
  
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00414480(param_1);
  FUN_01609da0(&local_ac);
  cVar1 = FUN_0160a8c0(local_res10[0],&local_c,&local_10);
  if (cVar1 != '\0') {
    local_ac = local_c;
    local_a8 = local_10;
    FUN_0160a160(param_1,&local_ac);
  }
  FUN_004144d0(local_res10);
  return param_1;
}

