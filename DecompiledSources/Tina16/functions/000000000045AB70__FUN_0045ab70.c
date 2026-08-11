/* Ghidra address: 0045ab70 */
/* Ghidra symbol: FUN_0045ab70 */


undefined8 FUN_0045ab70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = (undefined4)*(undefined8 *)(param_3 + -8);
  }
  FUN_0045aba0(param_1,param_2,param_3,0,uVar1);
  return param_2;
}

