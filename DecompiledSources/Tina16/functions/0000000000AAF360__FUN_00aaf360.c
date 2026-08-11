/* Ghidra address: 00aaf360 */
/* Ghidra symbol: FUN_00aaf360 */


void FUN_00aaf360(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0xe0);
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = (int)*(undefined8 *)(lVar4 + -8);
  }
  iVar2 = 0;
  iVar1 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      iVar2 = iVar2 + *(int *)(lVar4 + (longlong)iVar1 * 4);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (iVar2 < 1000) {
    iVar2 = 1000;
  }
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x128) + -1;
  if (-1 < iVar3) {
    do {
      lVar4 = (longlong)iVar3;
      if ((*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x110) +
                    lVar4) == '\x02') &&
         (iVar1 = FUN_0040c840(((double)*(int *)(*(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)(param_1 + 0xb0) + 0x70) + 0xe0) +
                                                lVar4 * 4) / (double)iVar2 -
                               (double)*(int *)(*(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)(param_1 + 0xb0) + 0x70) + 0xf8) +
                                               lVar4 * 4) / (double)param_3) * 1000.0), 0 < iVar1))
      {
        *(int *)(*param_2 + lVar4 * 4) = iVar1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}

