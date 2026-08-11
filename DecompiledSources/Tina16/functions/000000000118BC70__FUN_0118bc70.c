/* Ghidra address: 0118bc70 */
/* Ghidra symbol: FUN_0118bc70 */


undefined8 FUN_0118bc70(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*param_1 + 0x1fa0);
  iVar3 = (iVar1 + 1) / 2;
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      *(undefined8 *)(*param_1 + 0x50 + (longlong)iVar2 * 8) = 0x3ff0000000000000;
      *(undefined8 *)(*param_1 + 0x50 + (longlong)((iVar1 - iVar2) + -1) * 8) =
           *(undefined8 *)(*param_1 + 0x50 + (longlong)iVar2 * 8);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

