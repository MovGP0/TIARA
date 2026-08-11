/* Ghidra address: 0042a560 */
/* Ghidra symbol: FUN_0042a560 */


undefined8 FUN_0042a560(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_0042a4a0();
  if (cVar1 != '\0') {
    uVar2 = (*DAT_0200c2f8)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}

