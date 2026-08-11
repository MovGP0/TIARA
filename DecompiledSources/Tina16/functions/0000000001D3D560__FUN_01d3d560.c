/* Ghidra address: 01d3d560 */
/* Ghidra symbol: FUN_01d3d560 */


undefined8 FUN_01d3d560(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01d3d530(param_1);
  if (((cVar1 == '\0') && ((short)param_1 != 0x889)) && ((short)param_1 != 0x45d)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

