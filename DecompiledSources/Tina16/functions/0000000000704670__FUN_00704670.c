/* Ghidra address: 00704670 */
/* Ghidra symbol: FUN_00704670 */


void FUN_00704670(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_007d56e0(param_2);
    FUN_0064fca0(param_1,0x402,0,uVar1);
  }
  return;
}

