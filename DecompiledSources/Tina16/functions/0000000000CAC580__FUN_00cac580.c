/* Ghidra address: 00cac580 */
/* Ghidra symbol: FUN_00cac580 */


undefined8 FUN_00cac580(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((DAT_01eaaf20 != 0) && (iVar3 = *(int *)(DAT_01eaaf20 + 0x10) + -1, -1 < iVar3)) {
    do {
      uVar2 = FUN_004aeac0(DAT_01eaaf20,iVar3);
      cVar1 = FUN_00411580(uVar2,param_2);
      if (cVar1 != '\0') {
        uVar2 = FUN_004aeac0(DAT_01eaaf20,iVar3);
        uVar2 = FUN_00882920(uVar2,1);
        return uVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0;
}

