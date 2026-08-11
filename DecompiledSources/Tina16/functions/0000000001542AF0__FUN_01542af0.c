/* Ghidra address: 01542af0 */
/* Ghidra symbol: FUN_01542af0 */


undefined8 FUN_01542af0(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01d3e460(param_1);
  if (((cVar1 == '\0') || (param_1 == 0x2901)) || (param_1 == 0x2902)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

