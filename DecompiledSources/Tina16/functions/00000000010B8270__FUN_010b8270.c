/* Ghidra address: 010b8270 */
/* Ghidra symbol: FUN_010b8270 */


ulonglong FUN_010b8270(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 local_84 [76];
  undefined4 local_38;
  int local_30;
  
  thunk_FUN_04079bf6(*(undefined8 *)(param_1 + 0x38),0x6c,local_84);
  iVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x30),local_38,local_30 * 100);
  uVar2 = FUN_0040c770((double)iVar1 * *(double *)(param_1 + 0x60));
  if ((*(char *)(param_1 + 0xb) != '\0') && (*(int *)(param_1 + 0x68) != 0x3000000)) {
    uVar2 = (ulonglong)((int)uVar2 + *(char *)(param_1 + 0x80) * 2 + 2);
  }
  return uVar2;
}

