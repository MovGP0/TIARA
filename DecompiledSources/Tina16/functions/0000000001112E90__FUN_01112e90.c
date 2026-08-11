/* Ghidra address: 01112e90 */
/* Ghidra symbol: FUN_01112e90 */


void FUN_01112e90(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01112870(param_1);
  if (*(char *)(param_1 + 0x65a) != '\0') {
    iVar1 = FUN_01114280(param_1);
    iVar2 = FUN_01114190(param_1);
    if (((iVar1 == iVar2) && (*(char *)(param_1 + 0x620) == '\0')) &&
       (*(char *)(param_1 + 0x621) == '\0')) {
      FUN_01113a50(param_1);
    }
  }
  *(undefined4 *)(param_1 + 0x618) = 0;
  if (*(char *)(param_1 + 0x61f) == '\0') {
    *(undefined4 *)(param_1 + 0x618) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x61d) != '\0') {
      *(undefined4 *)(param_1 + 0x618) = 1;
    }
    *(undefined1 *)(param_1 + 0x61f) = 0;
  }
  if (*(char *)(param_1 + 0x61e) != '\0') {
    if (*(char *)(param_1 + 0x61c) != '\0') {
      *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 2;
    }
    *(undefined1 *)(param_1 + 0x61e) = 0;
  }
  if (*(char *)(param_1 + 0x620) != '\0') {
    *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 4;
    local_20 = *(undefined4 *)(param_1 + 0x62c);
    *(undefined1 *)(param_1 + 0x620) = 0;
  }
  if (*(char *)(param_1 + 0x621) != '\0') {
    *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 8;
    local_1c = *(undefined4 *)(param_1 + 0x628);
    *(undefined1 *)(param_1 + 0x621) = 0;
  }
  local_28 = FUN_0065b870(param_1);
  uVar3 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x806,
                             (longlong)*(int *)(param_1 + 0x618),&local_28);
  *(undefined4 *)(param_1 + 0x634) = uVar3;
  return;
}

