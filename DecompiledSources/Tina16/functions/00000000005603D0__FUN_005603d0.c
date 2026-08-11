/* Ghidra address: 005603d0 */
/* Ghidra symbol: FUN_005603d0 */


undefined8 FUN_005603d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0041b800(param_2);
  cVar1 = FUN_0056df10(param_1,uVar2,param_3);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    FUN_004134c0(uVar2);
  }
  return param_2;
}

