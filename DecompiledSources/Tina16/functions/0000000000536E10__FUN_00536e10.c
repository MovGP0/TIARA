/* Ghidra address: 00536e10 */
/* Ghidra symbol: FUN_00536e10 */


undefined8 FUN_00536e10(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00536dc0(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    FUN_004134c0(uVar2);
  }
  cVar1 = FUN_005360d0(param_1);
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

