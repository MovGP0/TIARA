/* Ghidra address: 01112db0 */
/* Ghidra symbol: FUN_01112db0 */


void FUN_01112db0(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  sVar1 = FUN_01112970(param_1);
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0x618) = 0;
    if (*(char *)(param_1 + 0x61e) == '\0') {
      *(undefined4 *)(param_1 + 0x618) = 2;
    }
    else {
      if (*(char *)(param_1 + 0x61c) != '\0') {
        *(undefined4 *)(param_1 + 0x618) = 2;
      }
      *(undefined1 *)(param_1 + 0x61e) = 0;
    }
    if (*(char *)(param_1 + 0x61f) != '\0') {
      if (*(char *)(param_1 + 0x61d) != '\0') {
        *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 1;
      }
      *(undefined1 *)(param_1 + 0x61f) = 0;
    }
    local_20[0] = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x804,
                               (longlong)*(int *)(param_1 + 0x618),local_20);
    *(int *)(param_1 + 0x634) = iVar2;
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x611) = 0;
      *(undefined2 *)(param_1 + 0x622) = 0;
      *(undefined2 *)(param_1 + 0x5be) = 0;
      FUN_01111400(param_1);
    }
  }
  return;
}

