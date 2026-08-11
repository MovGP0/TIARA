/* Ghidra address: 016a95b0 */
/* Ghidra symbol: FUN_016a95b0 */


void FUN_016a95b0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x4c) == 0x32) && (*(longlong *)(param_1 + 0x60) != 0)) {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar2 = 0;
      if (-1 < iVar3 + -1) {
        do {
          FUN_016a95b0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10));
          FUN_016a95b0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8 + (longlong)iVar2 * 0x10));
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    FUN_00410f20(uVar1);
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_004095f0(*(longlong *)(param_1 + 200));
      *(undefined8 *)(param_1 + 200) = 0;
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
    FUN_016a95b0(*(undefined8 *)(param_1 + 8));
    FUN_016a95b0(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}

