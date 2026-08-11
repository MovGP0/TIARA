/* Ghidra address: 005605c0 */
/* Ghidra symbol: FUN_005605c0 */


undefined1 FUN_005605c0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_9;
  
  cVar1 = FUN_0056e2b0(param_1,&local_9,param_2);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    FUN_004134c0(uVar2);
  }
  return local_9;
}

