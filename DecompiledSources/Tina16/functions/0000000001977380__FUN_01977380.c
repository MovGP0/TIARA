/* Ghidra address: 01977380 */
/* Ghidra symbol: FUN_01977380 */


void FUN_01977380(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (*(char *)(param_2 + 0x88) == '\0') {
    if ((*(char *)(param_2 + 0x4f) == '\0') ||
       (*(char *)(*(longlong *)(param_2 + 0x70) + 0x2b0) == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_2 + 0x4f) = uVar1;
  }
  return;
}

