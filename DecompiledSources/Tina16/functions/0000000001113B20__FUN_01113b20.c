/* Ghidra address: 01113b20 */
/* Ghidra symbol: FUN_01113b20 */


void FUN_01113b20(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  FUN_01112870(param_1);
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_20 = FUN_00416740(*(undefined8 *)(param_1 + 0x650));
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
    local_28 = FUN_0065b870(param_1);
    *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 0x100;
    uVar1 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x813,
                               (longlong)*(int *)(param_1 + 0x618),&local_28);
    *(undefined4 *)(param_1 + 0x634) = uVar1;
  }
  return;
}

