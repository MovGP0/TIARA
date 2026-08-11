/* Ghidra address: 016f3790 */
/* Ghidra symbol: FUN_016f3790 */


void FUN_016f3790(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(char *)(*(longlong *)(param_1 + 0x110) + 9) == '\0') {
    iVar3 = *(int *)(param_1 + 0x31c);
    iVar1 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar2 = (longlong)iVar1;
        uVar4 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + lVar2 * 8));
        uVar4 = FUN_00b90620(uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x180) + lVar2 * 8));
        *(undefined8 *)(*(longlong *)(param_1 + 0x180) + lVar2 * 8) = uVar4;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x110) + 0xe8))();
  }
  return;
}

