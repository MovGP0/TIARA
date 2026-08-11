/* Ghidra address: 019a4690 */
/* Ghidra symbol: FUN_019a4690 */


void FUN_019a4690(longlong param_1,int *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar5 = -1;
  bVar1 = false;
LAB_019a46c0:
  do {
    iVar5 = iVar5 + 1;
    if (iVar5 < *(int *)(param_1 + 0x10)) {
      uVar4 = FUN_00b94e60(param_1,iVar5);
      cVar2 = FUN_0198a580(uVar4);
      if (cVar2 != '\x04') goto LAB_019a46c0;
    }
    if (iVar5 < *(int *)(param_1 + 0x10)) {
      uVar4 = FUN_00b94e60(param_1,iVar5);
      cVar2 = FUN_0198a580(uVar4);
      if (cVar2 == '\x04') {
        uVar4 = FUN_00b94e60(param_1,iVar5);
        cVar2 = FUN_01d01970(uVar4);
        if (cVar2 != '\0') {
          uVar4 = FUN_00b94e60(param_1,iVar5);
          iVar3 = FUN_01d01940(uVar4);
          if (2 < iVar3) {
            *param_2 = *param_2 + 1;
            iVar3 = FUN_01d01940(uVar4);
            *param_3 = *param_3 + iVar3;
          }
        }
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
  } while( true );
}

