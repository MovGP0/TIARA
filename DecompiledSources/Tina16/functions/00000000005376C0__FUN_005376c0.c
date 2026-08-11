/* Ghidra address: 005376c0 */
/* Ghidra symbol: FUN_005376c0 */


undefined8 FUN_005376c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00417740(param_2,&DAT_00527bf8);
  cVar1 = FUN_0053c240(param_1,param_3,uVar2,param_4);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    FUN_004134c0(uVar2);
  }
  return param_2;
}

