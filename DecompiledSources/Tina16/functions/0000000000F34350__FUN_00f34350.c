/* Ghidra address: 00f34350 */
/* Ghidra symbol: FUN_00f34350 */


void FUN_00f34350(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    if (**(char **)(param_2 + 0x1d8) == '\r') {
      if (*(longlong *)(param_2 + 0x1a0) == 0) {
        cVar1 = FUN_00534e60(*(undefined8 *)(param_2 + 0x1d8));
        if (cVar1 != '\0') {
          lVar2 = (longlong)*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x1d0) + 0x10) + 0x10);
          if (lVar2 < 0) {
            lVar2 = FUN_00410a90();
          }
          FUN_004185d0(*(undefined8 *)(param_2 + 0x1a8),*(undefined8 *)(param_2 + 0x1d8),lVar2);
        }
      }
      FUN_004095f0(*(undefined8 *)(param_2 + 0x1a8));
    }
    else if ((**(char **)(param_2 + 0x1d8) == '\x11') && (*(longlong *)(param_2 + 0x1a0) == 0)) {
      FUN_00419430(param_2 + 0x1a8,*(undefined8 *)(param_2 + 0x1d8));
    }
  }
  return;
}

