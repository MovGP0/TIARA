/* Ghidra address: 00560240 */
/* Ghidra symbol: FUN_00560240 */


undefined4 FUN_00560240(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_c;
  
  cVar1 = FUN_0056dba0(param_1,&local_c,param_2);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    FUN_004134c0(uVar2);
  }
  return local_c;
}

