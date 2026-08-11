/* Ghidra address: 0112f2b0 */
/* Ghidra symbol: FUN_0112f2b0 */


undefined8 FUN_0112f2b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_0112f390(param_2,param_1,PTR_DAT_02004830);
  if (cVar1 == '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_02003c38);
    FUN_0112d8d0(local_10,param_2);
  }
  FUN_00414480(&local_10);
  return param_1;
}

