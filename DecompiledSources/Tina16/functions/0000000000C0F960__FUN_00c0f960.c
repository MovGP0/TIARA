/* Ghidra address: 00c0f960 */
/* Ghidra symbol: FUN_00c0f960 */


undefined8 FUN_00c0f960(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_20 [8];
  
  cVar1 = FUN_00c0f8e0(param_1,local_20);
  if (cVar1 != '\0') {
    FUN_00c0eaf0(param_1,param_2,local_20);
  }
  return param_2;
}

