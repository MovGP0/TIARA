/* Ghidra address: 00f02150 */
/* Ghidra symbol: FUN_00f02150 */


void FUN_00f02150(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_28 [16];
  
  if (*(char *)(param_1 + 0x530) != '\0') {
    FUN_00498350(local_28,*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x518),0,
                 *(int *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    uVar2 = FUN_00498310((longlong)*(short *)(param_2 + 0x10),(longlong)*(short *)(param_2 + 0x12));
    iVar1 = thunk_FUN_03f16006(local_28,uVar2);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_00650b30(param_1,param_2);
  return;
}

