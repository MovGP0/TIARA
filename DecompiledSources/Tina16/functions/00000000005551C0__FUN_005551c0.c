/* Ghidra address: 005551c0 */
/* Ghidra symbol: FUN_005551c0 */


int FUN_005551c0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  
  cVar1 = FUN_005471b0(param_1);
  if (cVar1 == '\x05') {
    pbVar3 = (byte *)FUN_00547190(param_1);
    iVar2 = *pbVar3 + 1;
  }
  else {
    iVar2 = 8;
  }
  return iVar2;
}

