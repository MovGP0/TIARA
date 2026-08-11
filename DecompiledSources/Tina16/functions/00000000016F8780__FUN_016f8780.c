/* Ghidra address: 016f8780 */
/* Ghidra symbol: FUN_016f8780 */


void FUN_016f8780(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00da9f40(DAT_0210fee8);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    FUN_01cc4620(uVar1,*puVar2);
    FUN_01cc4700(uVar1,puVar2 + 1,DAT_0210fef0);
    FUN_016f75f0(param_1,6,*puVar2);
  }
  (**(code **)(*DAT_0210fee8 + -0x20))(DAT_0210fee8,1);
  DAT_0210fee8 = (longlong *)0x0;
  if (DAT_0210ff08 != (longlong *)0x0) {
    puVar2 = (undefined8 *)FUN_00da9f40(DAT_0210ff08);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 0xb8);
      FUN_01cc4620(uVar1,*puVar2);
      FUN_01cc4700(uVar1,puVar2 + 1,DAT_0210ff10);
    }
    (**(code **)(*DAT_0210ff08 + -0x20))(DAT_0210ff08,1);
  }
  return;
}

