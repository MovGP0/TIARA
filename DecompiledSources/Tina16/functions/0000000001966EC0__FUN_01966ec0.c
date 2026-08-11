/* Ghidra address: 01966ec0 */
/* Ghidra symbol: FUN_01966ec0 */


void FUN_01966ec0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01966bb0(param_1,0);
  FUN_01966bf0(param_1,0,uVar1);
  *(undefined1 *)(param_1 + 0x2d0) = 1;
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_01966f10(param_1);
    *(undefined4 *)(param_1 + 0x2c0) = 0;
  }
  FUN_01966c80(param_1);
  return;
}

