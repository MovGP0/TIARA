/* Ghidra address: 01ac89b0 */
/* Ghidra symbol: FUN_01ac89b0 */


void FUN_01ac89b0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0064cf60(param_1,0x20c);
  uVar1 = FUN_005fd250(&PTR_FUN_005f3290,1);
  *(undefined8 *)(param_1 + 0x700) = uVar1;
  return;
}

