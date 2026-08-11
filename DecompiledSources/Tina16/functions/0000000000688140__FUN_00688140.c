/* Ghidra address: 00688140 */
/* Ghidra symbol: FUN_00688140 */


void FUN_00688140(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_0044f0c0(5,1);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x4d0) != -1)) {
    FUN_007d6450(*(undefined8 *)(param_1 + 0x4e8));
    FUN_007d7650(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0),
                 *(undefined4 *)(param_1 + 0x4d0));
    if (*(int *)(param_1 + 0x4bc) == -1) {
      FUN_007d7650(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0),
                   *(undefined4 *)(param_1 + 0x4d0));
    }
    else {
      FUN_007d7650(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0),
                   *(int *)(param_1 + 0x4bc));
    }
    if (*(int *)(param_1 + 0x4f4) == -1) {
      FUN_007d7650(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0),
                   *(undefined4 *)(param_1 + 0x4d0));
    }
    else {
      FUN_007d7650(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0),
                   *(int *)(param_1 + 0x4f4));
    }
    if (*(int *)(param_1 + 0x4ac) == -1) {
      FUN_007d7650(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0),
                   *(undefined4 *)(param_1 + 0x4d0));
    }
    else {
      FUN_007d7650(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0),
                   *(int *)(param_1 + 0x4ac));
    }
    if (*(int *)(param_1 + 0x4f8) == -1) {
      FUN_007d7650(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0),
                   *(undefined4 *)(param_1 + 0x4d0));
    }
    else {
      FUN_007d7650(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0),
                   *(int *)(param_1 + 0x4f8));
    }
    if (*(int *)(param_1 + 0x500) == -1) {
      if (*(int *)(param_1 + 0x4f8) == -1) {
        FUN_007d7650(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0),
                     *(undefined4 *)(param_1 + 0x4d0));
      }
      else {
        FUN_007d7650(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0),
                     *(int *)(param_1 + 0x4f8));
      }
    }
    else {
      FUN_007d7650(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0),
                   *(int *)(param_1 + 0x500));
    }
  }
  return;
}

