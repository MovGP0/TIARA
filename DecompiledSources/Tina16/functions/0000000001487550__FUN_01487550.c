/* Ghidra address: 01487550 */
/* Ghidra symbol: FUN_01487550 */


undefined8 FUN_01487550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_014869a0(param_1,param_3);
  iVar2 = FUN_014868f0(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_01486390(param_2,param_3,0);
  }
  else {
    uVar1 = FUN_01486c10(param_1,param_3,uVar1,3);
    FUN_01486390(param_2,param_3,uVar1);
  }
  return param_2;
}

