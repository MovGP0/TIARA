/* Ghidra address: 00960f80 */
/* Ghidra symbol: FUN_00960f80 */


undefined8 FUN_00960f80(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == 0x2e) || (param_2 - 0x30U < 10)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

