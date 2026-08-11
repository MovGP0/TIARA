/* Ghidra address: 01113700 */
/* Ghidra symbol: FUN_01113700 */


void FUN_01113700(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_24;
  undefined4 local_1c;
  
  FUN_01112870(param_1);
  if (*(char *)(param_1 + 0x617) != '\0') {
    if (*(char *)(param_1 + 0x65a) != '\0') {
      iVar1 = FUN_01114280(param_1);
      iVar2 = FUN_01114190(param_1);
      if (iVar1 == iVar2) {
        FUN_01113a50(param_1);
      }
    }
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
    *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 0x20000;
    local_1c = *(undefined4 *)(param_1 + 0x630);
    local_24 = FUN_0065b870(param_1);
    uVar3 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x80e,
                               (longlong)*(int *)(param_1 + 0x618),&local_24);
    *(undefined4 *)(param_1 + 0x634) = uVar3;
  }
  return;
}

