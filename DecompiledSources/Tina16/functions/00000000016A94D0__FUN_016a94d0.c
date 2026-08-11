/* Ghidra address: 016a94d0 */
/* Ghidra symbol: FUN_016a94d0 */


void FUN_016a94d0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if ((((char)param_2 == '\0') || (param_1 == 0)) || (*(char *)(param_1 + 0x50) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((param_1 != 0) != bVar1) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x40));
    if ((*(int *)(param_1 + 0x4c) == 0x32) && (*(longlong *)(param_1 + 0x60) != 0)) {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar2 = 0;
      if (-1 < iVar3 + -1) {
        do {
          FUN_016a94d0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10),0);
          FUN_016a94d0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8 + (longlong)iVar2 * 0x10));
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_004095f0(*(undefined8 *)(param_1 + 0x60));
    }
    FUN_016a94d0(*(undefined8 *)(param_1 + 8),param_2);
    FUN_016a94d0(*(undefined8 *)(param_1 + 0x10),param_2);
    if (*(char *)(param_1 + 0x90) == '\0') {
      FUN_004095f0(param_1);
    }
  }
  return;
}

