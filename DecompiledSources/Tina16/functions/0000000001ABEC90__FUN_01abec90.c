/* Ghidra address: 01abec90 */
/* Ghidra symbol: FUN_01abec90 */


undefined8 FUN_01abec90(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  cVar1 = FUN_01abed90(param_1,&local_10,param_2);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    FUN_004134c0(uVar2);
  }
  return local_10;
}

