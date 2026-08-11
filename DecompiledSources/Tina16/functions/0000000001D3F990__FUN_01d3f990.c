/* Ghidra address: 01d3f990 */
/* Ghidra symbol: FUN_01d3f990 */


undefined8 FUN_01d3f990(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01d3f970(param_1);
  if (((cVar1 == '\0') && ((param_1 < 0x61 || (0x66 < param_1)))) &&
     ((param_1 < 0x41 || (0x46 < param_1)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

