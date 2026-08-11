/* Ghidra address: 00b110a0 */
/* Ghidra symbol: FUN_00b110a0 */


void FUN_00b110a0(longlong param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    FUN_00848790(*(undefined8 *)(param_1 + 0x40),0);
  }
  else {
    iVar1 = FUN_00b10ba0(*(undefined8 *)(param_1 + 0x40));
    if (iVar1 < 2) {
      FUN_00848a70(*(undefined8 *)(param_1 + 0x40),2);
    }
    FUN_00848790(*(undefined8 *)(param_1 + 0x40),1);
  }
  return;
}

