/* Ghidra address: 00c115d0 */
/* Ghidra symbol: FUN_00c115d0 */


void FUN_00c115d0(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_0040d200(param_3,0x80,0);
  iVar3 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_00c11460(param_1,iVar4);
      if (*(int *)(lVar1 + 8) == param_2) {
        iVar3 = iVar3 + 1;
        uVar2 = FUN_00c11460(param_1,iVar4);
        *(undefined8 *)(param_3 + -8 + (longlong)iVar3 * 8) = uVar2;
        if (iVar3 == 0x10) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

