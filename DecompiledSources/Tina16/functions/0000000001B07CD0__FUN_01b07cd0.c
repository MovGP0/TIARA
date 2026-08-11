/* Ghidra address: 01b07cd0 */
/* Ghidra symbol: FUN_01b07cd0 */


void FUN_01b07cd0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x5db) == '\x06') && (*(char *)(param_1 + 9) == '\0')) {
    if (param_2 == '\0') {
      uVar1 = FUN_01b077e0(param_1);
      *(undefined8 *)(param_1 + 0x158) = uVar1;
      if (*(char *)(param_1 + 0x98) == '\b') {
        uVar1 = FUN_01b077e0(param_1);
        *(undefined8 *)(param_1 + 0x160) = uVar1;
      }
      *(undefined1 *)(param_1 + 9) = 1;
    }
    else {
      uVar1 = FUN_01b077e0(param_1);
      *(undefined8 *)(param_1 + 0x148) = uVar1;
      if (*(char *)(param_1 + 0x98) == '\b') {
        uVar1 = FUN_01b077e0(param_1);
        *(undefined8 *)(param_1 + 0x150) = uVar1;
      }
    }
  }
  return;
}

