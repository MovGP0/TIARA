/* Ghidra address: 00ef9850 */
/* Ghidra symbol: FUN_00ef9850 */


void FUN_00ef9850(undefined8 *param_1,short param_2,longlong param_3)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_3 + 0x92) == '\0') {
    iVar4 = 1;
    while( true ) {
      iVar3 = FUN_00ef7f30(*param_1,param_3);
      if ((iVar3 <= iVar4) || (*(char *)(param_3 + 0x92) != '\0')) break;
      bVar1 = false;
      sVar2 = FUN_00ef8190(*param_1,iVar4);
      while( true ) {
        if (sVar2 == 5) break;
        iVar3 = FUN_00ef7f30(*param_1,param_3);
        if (iVar3 <= iVar4) break;
        if ((sVar2 == param_2) && (!bVar1)) {
          FUN_00ef9410(param_1,iVar4,1,param_3);
          bVar1 = true;
        }
        iVar4 = iVar4 + 1;
        sVar2 = FUN_00ef8190(*param_1,iVar4);
      }
      iVar4 = iVar4 + 1;
    }
  }
  return;
}

