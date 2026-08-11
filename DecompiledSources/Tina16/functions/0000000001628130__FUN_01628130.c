/* Ghidra address: 01628130 */
/* Ghidra symbol: FUN_01628130 */


undefined8 FUN_01628130(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01d3ffd0(param_1);
  if (((cVar1 == '\0') && (param_1 < -0x80000000)) || (param_1 == 0x39)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

