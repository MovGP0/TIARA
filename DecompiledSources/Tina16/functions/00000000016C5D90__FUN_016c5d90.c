/* Ghidra address: 016c5d90 */
/* Ghidra symbol: FUN_016c5d90 */


void FUN_016c5d90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_2 + 0x10) != 0) {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x488);
    }
    FUN_016c5420(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x58),
                 *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),0,
                 *(undefined1 *)(param_1 + 0x78),uVar2);
    uVar1 = FUN_0040c770();
    *(undefined4 *)(param_2 + 0x28) = uVar1;
  }
  return;
}

