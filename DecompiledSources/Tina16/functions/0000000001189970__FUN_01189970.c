/* Ghidra address: 01189970 */
/* Ghidra symbol: FUN_01189970 */


undefined8 FUN_01189970(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*param_1 + 0x1fa0);
  iVar3 = (iVar1 + 1) / 2;
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      *(double *)(*param_1 + 0x50 + (longlong)iVar2 * 8) =
           ((double)iVar2 * 2.0) / ((double)iVar1 - 1.0);
      *(undefined8 *)(*param_1 + 0x50 + (longlong)((iVar1 - iVar2) + -1) * 8) =
           *(undefined8 *)(*param_1 + 0x50 + (longlong)iVar2 * 8);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

