/* Ghidra address: 00c27eb0 */
/* Ghidra symbol: FUN_00c27eb0 */


void FUN_00c27eb0(longlong param_1)

{
  undefined2 uVar1;
  
  FUN_00c27910(param_1);
  if ((*(short *)(param_1 + 0x5c) < *(short *)(param_1 + 0x82)) ||
     (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      if (*(int *)(param_1 + 0x54) == 0xc) {
        *(undefined2 *)(param_1 + 0x5c) = 0x1000;
      }
      else {
        uVar1 = FUN_00c27900(param_1,*(int *)(param_1 + 0x54));
        *(undefined2 *)(param_1 + 0x5c) = uVar1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x58);
      uVar1 = FUN_00c27900(param_1,*(undefined4 *)(param_1 + 0x58));
      *(undefined2 *)(param_1 + 0x5c) = uVar1;
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
  }
  return;
}

