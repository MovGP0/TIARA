/* Ghidra address: 0056b530 */
/* Ghidra symbol: FUN_0056b530 */


undefined8 FUN_0056b530(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00572ff0(&PTR_FUN_00581188,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

