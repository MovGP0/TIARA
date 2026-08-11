/* Ghidra address: 00c3d260 */
/* Ghidra symbol: FUN_00c3d260 */


int FUN_00c3d260(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_68 [19];
  byte local_55;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 == 0) {
    *param_2 = 0;
    iVar3 = 0;
  }
  else {
    iVar2 = 0;
    *param_2 = 0;
    iVar5 = *(int *)(lVar1 + 0x10);
    iVar4 = 0;
    iVar3 = 0;
    if (-1 < iVar5 + -1) {
      do {
        FUN_00c3d330(param_1,local_68,iVar4);
        if ((local_55 & 4) == 0) {
          iVar2 = iVar2 + 1;
        }
        else {
          *param_2 = *param_2 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
        iVar3 = iVar2;
      } while (iVar5 != 0);
    }
  }
  return iVar3;
}

