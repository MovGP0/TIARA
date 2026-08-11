/* Ghidra address: 0186d610 */
/* Ghidra symbol: FUN_0186d610 */


bool FUN_0186d610(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = FUN_00414cb0(*(undefined8 *)(param_1 + 0xa0));
  iVar2 = *(int *)(param_1 + 0xac);
  if (iVar2 <= iVar1) {
    iVar1 = (iVar1 - iVar2) + 1;
    do {
      bVar3 = *(short *)(*(longlong *)(param_1 + 0xa0) + -2 + (longlong)iVar2 * 2) == 9;
      if ((bVar3) ||
         (((*(short *)(*(longlong *)(param_1 + 0xa0) + -2 + (longlong)iVar2 * 2) == 10 &&
           (1 < iVar2)) &&
          (*(short *)(*(longlong *)(param_1 + 0xa0) + -2 + (longlong)(iVar2 + -1) * 2) == 0xd)))) {
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xac);
        *(int *)(param_1 + 0xac) = iVar2 + 1;
        *(int *)(param_1 + 0x98) = iVar2 - *(int *)(param_1 + 0x9c);
        if (param_2 == '\0') {
          return bVar3;
        }
        if (!bVar3) {
          return bVar3;
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_2 == '\0') {
    iVar2 = FUN_00414cb0(*(undefined8 *)(param_1 + 0xa0));
    *(int *)(param_1 + 0x98) = (iVar2 - *(int *)(param_1 + 0xac)) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xac);
  iVar2 = FUN_00414cb0(*(undefined8 *)(param_1 + 0xa0));
  *(int *)(param_1 + 0xac) = iVar2 + 1;
  return bVar3;
}

