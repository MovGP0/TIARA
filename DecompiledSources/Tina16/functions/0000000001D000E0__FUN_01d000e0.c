/* Ghidra address: 01d000e0 */
/* Ghidra symbol: FUN_01d000e0 */


undefined8 FUN_01d000e0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  short sVar3;
  
  cVar1 = FUN_01d3d510(param_2);
  if ((((cVar1 == '\0') && (sVar3 = (short)param_2, sVar3 != 0x1d)) && (sVar3 != 0x1b)) &&
     (sVar3 != 0xd)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

