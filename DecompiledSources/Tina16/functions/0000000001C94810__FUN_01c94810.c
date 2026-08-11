/* Ghidra address: 01c94810 */
/* Ghidra symbol: FUN_01c94810 */


void FUN_01c94810(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  FUN_007e2d20(*(longlong *)(param_1 + 0xfd8),
               *(char *)(*(longlong *)(param_1 + 0xfd8) + 0x80) == '\0');
  uVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0x1350));
  lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),uVar1);
  if ((*(longlong *)(lVar2 + 0x28) == 0) || (*(char *)(lVar2 + 0x978) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  FUN_01c8a4d0(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0xfd8) + 0x80),uVar1);
  FUN_01c8a7e0(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0xfd8) + 0x80),0);
  return;
}

