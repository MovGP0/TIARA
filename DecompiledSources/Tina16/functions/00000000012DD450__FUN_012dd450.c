/* Ghidra address: 012dd450 */
/* Ghidra symbol: FUN_012dd450 */


ulonglong FUN_012dd450(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),param_2);
  lVar2 = 0;
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + -8);
  }
  if (0 < lVar2) {
    lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),param_2);
    uVar3 = 0;
    if (*(longlong *)(lVar2 + 0x20) != 0) {
      uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + -8);
    }
  }
  lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),param_2);
  lVar2 = 0;
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + -8);
  }
  if ((int)uVar3 < lVar2) {
    lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),param_2);
    uVar3 = 0;
    if (*(longlong *)(lVar2 + 0x28) != 0) {
      uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x28) + -8);
    }
  }
  lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),param_2);
  lVar2 = 0;
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + -8);
  }
  if ((int)uVar3 < lVar2) {
    lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),param_2);
    uVar3 = 0;
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x30) + -8);
    }
  }
  return uVar3 & 0xffffffff;
}

