/* Ghidra address: 01d3fe60 */
/* Ghidra symbol: FUN_01d3fe60 */


undefined8 FUN_01d3fe60(undefined8 param_1,char param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0198a580(param_1);
  if (cVar1 == '\x04') {
    sVar2 = FUN_01d03160(param_1);
    if (param_2 == '\0') {
      cVar1 = FUN_01d3d530(sVar2);
      if ((((cVar1 == '\0') && (cVar1 = FUN_01d3d590(sVar2), cVar1 == '\0')) && (sVar2 != 0x3ef)) &&
         (((sVar2 != 0x44f && (sVar2 != 0x889)) && (sVar2 != 0x45d)))) {
        return 0;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

