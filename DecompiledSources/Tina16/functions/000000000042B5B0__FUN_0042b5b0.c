/* Ghidra address: 0042b5b0 */
/* Ghidra symbol: FUN_0042b5b0 */


undefined8 FUN_0042b5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0042b020();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (*DAT_0200c378)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}

