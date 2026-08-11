/* Ghidra address: 01113270 */
/* Ghidra symbol: FUN_01113270 */


void FUN_01113270(longlong param_1)

{
  int iVar1;
  undefined8 local_20 [2];
  
  FUN_01112870(param_1);
  *(undefined4 *)(param_1 + 0x618) = 0;
  if (*(char *)(param_1 + 0x61f) == '\0') {
    *(undefined4 *)(param_1 + 0x618) = 1;
  }
  else if (*(char *)(param_1 + 0x61d) != '\0') {
    *(undefined4 *)(param_1 + 0x618) = 1;
  }
  if ((*(char *)(param_1 + 0x61e) != '\0') && (*(char *)(param_1 + 0x61c) != '\0')) {
    *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 2;
  }
  local_20[0] = FUN_0065b870(param_1);
  iVar1 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x855,
                             (longlong)*(int *)(param_1 + 0x618),local_20);
  *(int *)(param_1 + 0x634) = iVar1;
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x61f) != '\0') {
      *(undefined1 *)(param_1 + 0x61f) = 0;
    }
    if (*(char *)(param_1 + 0x61e) != '\0') {
      *(undefined1 *)(param_1 + 0x61e) = 0;
    }
  }
  else {
    FUN_01112e90(param_1);
  }
  return;
}

