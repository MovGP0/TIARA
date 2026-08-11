/* Ghidra address: 0112e140 */
/* Ghidra symbol: FUN_0112e140 */


undefined8 FUN_0112e140(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_0112f340(param_2,param_1);
  if (cVar1 == '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_02002268);
    uVar2 = FUN_0044d490(&PTR_FUN_0112d6f8,1,local_10);
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_10);
  return param_1;
}

