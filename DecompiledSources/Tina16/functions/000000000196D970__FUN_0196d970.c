/* Ghidra address: 0196d970 */
/* Ghidra symbol: FUN_0196d970 */


void FUN_0196d970(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0196d800(param_1);
  if (cVar2 != (char)param_2) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
    uVar1 = FUN_0194e140(param_2);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  return;
}

