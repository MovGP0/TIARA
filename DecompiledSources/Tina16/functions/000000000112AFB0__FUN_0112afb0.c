/* Ghidra address: 0112afb0 */
/* Ghidra symbol: FUN_0112afb0 */


undefined8 FUN_0112afb0(undefined8 param_1,short *param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = FUN_0112b0e0();
  if (*param_2 == sVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0046e770(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}

