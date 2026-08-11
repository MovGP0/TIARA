/* Ghidra address: 005374f0 */
/* Ghidra symbol: FUN_005374f0 */


undefined8 FUN_005374f0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  cVar1 = FUN_00537530(param_1,&local_10);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    FUN_004134c0(uVar2);
  }
  return local_10;
}

