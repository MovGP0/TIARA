/* Ghidra address: 00f42dd0 */
/* Ghidra symbol: FUN_00f42dd0 */


void FUN_00f42dd0(longlong param_1)

{
  undefined1 uVar1;
  
  if (*PTR_DAT_020039a8 == '\0') {
    uVar1 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d0));
    *(undefined1 *)(param_1 + 0x739) = uVar1;
    if (*(char *)(param_1 + 0x738) != '\0') {
      *(undefined1 *)(param_1 + 0x73a) = 1;
      FUN_00805200(param_1);
    }
  }
  else {
    FUN_00b0a960(*(undefined8 *)(param_1 + 0x6d0));
    if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x638) == 1) {
      *(undefined4 *)(param_1 + 0x508) = 1;
    }
  }
  return;
}

