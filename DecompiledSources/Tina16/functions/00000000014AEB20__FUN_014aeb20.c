/* Ghidra address: 014aeb20 */
/* Ghidra symbol: FUN_014aeb20 */


int FUN_014aeb20(undefined8 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar1 = -1;
  iVar2 = 1;
  pbVar3 = PTR_DAT_02004b98 + 1;
  do {
    if (*pbVar3 == param_2) {
      iVar1 = iVar2;
    }
    iVar2 = iVar2 + 1;
    pbVar3 = pbVar3 + 0x28;
  } while (iVar2 != 0x2e);
  return iVar1;
}

