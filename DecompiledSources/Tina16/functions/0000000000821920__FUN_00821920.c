/* Ghidra address: 00821920 */
/* Ghidra symbol: FUN_00821920 */


undefined8 FUN_00821920(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00821f80(param_1,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00821e60(param_1,param_2);
    uVar2 = FUN_00820440(uVar2);
  }
  return uVar2;
}

