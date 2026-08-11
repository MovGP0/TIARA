/* Ghidra address: 0040e6e0 */
/* Ghidra symbol: FUN_0040e6e0 */


void FUN_0040e6e0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = DAT_01db9014 & 3;
  if (2 < bVar1) {
    bVar1 = 2;
  }
  FUN_0040e550(param_1,param_2,bVar1);
  return;
}

