/* Ghidra address: 01be1bf0 */
/* Ghidra symbol: FUN_01be1bf0 */


void FUN_01be1bf0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x5d0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x580) = 0;
    FUN_01be54a0(lVar1,0);
  }
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x5a8) + 0x578) = 0;
  }
  *(undefined1 *)(param_1 + 0x592) = 0;
  lVar1 = *(longlong *)(param_1 + 0x5d0);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x648) != 0)) {
    lVar1 = FUN_01be0910(*(undefined8 *)(lVar1 + 0x648));
    if (lVar1 == *(longlong *)(param_1 + 0x5d0)) {
      *(undefined1 *)(param_1 + 0x592) = 0;
      lVar1 = FUN_01be2d90(param_1);
      if (lVar1 != 0) {
        lVar1 = FUN_01be2d90(param_1);
        (**(code **)(**(longlong **)(lVar1 + 0x80) + 600))(*(longlong **)(lVar1 + 0x80),0);
      }
    }
    else {
      FUN_01be0920(*(undefined8 *)(*(longlong *)(param_1 + 0x5d0) + 0x648));
    }
  }
  return;
}

