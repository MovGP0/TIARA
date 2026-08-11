/* Ghidra address: 016c5e90 */
/* Ghidra symbol: FUN_016c5e90 */


void FUN_016c5e90(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x10) != 0) {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x488);
    }
    uVar1 = FUN_016c58e0(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x58),
                         *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                         *(undefined8 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x78),uVar1);
    *(undefined8 *)(param_2 + 0x30) = uVar1;
  }
  return;
}

