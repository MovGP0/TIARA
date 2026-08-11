/* Ghidra address: 0199ab80 */
/* Ghidra symbol: FUN_0199ab80 */


undefined8 FUN_0199ab80(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  while (*(int *)(param_1 + 0x370) < *(int *)(param_1 + 0x10)) {
    uVar2 = FUN_0198d420(param_1,*(undefined4 *)(param_1 + 0x370));
    cVar1 = FUN_0198a580(uVar2);
    if (cVar1 == '\x06') {
      lVar3 = FUN_0198d420(param_1,*(undefined4 *)(param_1 + 0x370));
      if (-1 < *(short *)(lVar3 + 0x2d8)) break;
    }
    *(int *)(param_1 + 0x370) = *(int *)(param_1 + 0x370) + 1;
  }
  if (*(int *)(param_1 + 0x370) < *(int *)(param_1 + 0x10)) {
    uVar2 = FUN_0198d420(param_1,*(int *)(param_1 + 0x370));
  }
  else {
    uVar2 = 0;
  }
  *(int *)(param_1 + 0x370) = *(int *)(param_1 + 0x370) + 1;
  return uVar2;
}

