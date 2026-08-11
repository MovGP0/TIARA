/* Ghidra address: 00dfa7c0 */
/* Ghidra symbol: FUN_00dfa7c0 */


void FUN_00dfa7c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 0x325) == '\0') && (0.0 < *(double *)(param_1 + 0x450))) {
    FUN_01b053c0((undefined8 *)(param_1 + 0x530),param_1 + 0x538,param_1 + 0x540);
    *(undefined1 *)(param_1 + 0x528) = 1;
    iVar1 = *(int *)(param_1 + 0x308) + -1;
    *(int *)(param_1 + 0x540) = iVar1;
    uVar2 = FUN_00409570((longlong)(iVar1 * 8));
    *(undefined8 *)(param_1 + 0x530) = uVar2;
    uVar2 = FUN_00409570((longlong)(*(int *)(param_1 + 0x540) * 8));
    *(undefined8 *)(param_1 + 0x538) = uVar2;
    iVar3 = *(int *)(param_1 + 0x308) + -1;
    iVar1 = 1;
    if (0 < iVar3) {
      do {
        *(ulonglong *)(*(longlong *)(param_1 + 0x538) + -8 + (longlong)iVar1 * 8) =
             CONCAT44(iVar1,iVar1);
        FUN_017dcb20(*(undefined8 *)(param_1 + 0xd8),iVar1,iVar1);
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

