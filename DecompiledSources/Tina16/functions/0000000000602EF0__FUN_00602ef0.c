/* Ghidra address: 00602ef0 */
/* Ghidra symbol: FUN_00602ef0 */


void FUN_00602ef0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      puVar1 = (undefined8 *)FUN_004aeac0(param_1,iVar3);
      cVar2 = FUN_00411580(*puVar1,param_2);
      if (cVar2 != '\0') {
        FUN_00418590(puVar1,&DAT_006023f8);
        FUN_004ae870(param_1,iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}

