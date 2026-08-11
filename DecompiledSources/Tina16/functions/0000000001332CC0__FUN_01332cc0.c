/* Ghidra address: 01332cc0 */
/* Ghidra symbol: FUN_01332cc0 */


void FUN_01332cc0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x30))
                        (*(longlong **)(param_1 + 0x130),iVar3);
      if (*(char *)(lVar2 + 0x18) == '\x01') {
        uVar4 = FUN_016ee810(*(undefined8 *)(lVar2 + 0x38),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x118),
                             *(undefined1 *)(lVar2 + 0x24),*(undefined1 *)(lVar2 + 0x28),0);
        *(undefined8 *)(lVar2 + 0x30) = uVar4;
      }
      else if (*(char *)(lVar2 + 0x18) == '\x02') {
        uVar4 = FUN_016ee520(*(undefined8 *)(lVar2 + 0x38),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x118),
                             *(undefined1 *)(lVar2 + 0x20),*(undefined1 *)(lVar2 + 0x24),0);
        *(undefined8 *)(lVar2 + 0x30) = uVar4;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

