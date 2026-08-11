/* Ghidra address: 00c7b2b0 */
/* Ghidra symbol: FUN_00c7b2b0 */


void FUN_00c7b2b0(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + 0x3dc) = param_2;
  if ((param_2 != 6) && (*(longlong *)(param_1 + 0x298) != 0)) {
    if (*(char *)(param_1 + 0x3d9) == '\0') {
      uVar1 = FUN_00c7a690();
      thunk_FUN_041b2403(uVar1,0x111,(longlong)*(int *)(PTR_DAT_020035b0 + (ulonglong)param_2 * 4),0
                        );
    }
    else {
      uVar1 = FUN_00c7a690();
      thunk_FUN_041b2403(uVar1,0x111,(longlong)*(int *)(PTR_DAT_020059e0 + (ulonglong)param_2 * 4),0
                        );
    }
  }
  return;
}

