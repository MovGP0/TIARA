/* Ghidra address: 0045bd00 */
/* Ghidra symbol: FUN_0045bd00 */


undefined8 FUN_0045bd00(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_00414480(param_1);
  }
  else {
    uVar2 = FUN_00458d50();
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = (undefined4)*(undefined8 *)(param_2 + -8);
    }
    FUN_0045aba0(uVar2,param_1,param_2,0,uVar1);
  }
  return param_1;
}

