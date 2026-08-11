/* Ghidra address: 00560610 */
/* Ghidra symbol: FUN_00560610 */


undefined2 FUN_00560610(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 local_a;
  
  cVar1 = FUN_0056e360(param_1,&local_a,param_2);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    FUN_004134c0(uVar2);
  }
  return local_a;
}

