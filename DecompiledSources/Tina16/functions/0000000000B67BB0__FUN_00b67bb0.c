/* Ghidra address: 00b67bb0 */
/* Ghidra symbol: FUN_00b67bb0 */


void FUN_00b67bb0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x70),0xe0);
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + -4);
  }
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x70),uVar2);
  uVar1 = FUN_00414df0(param_1 + 0x38);
  FUN_00b62d20(*(undefined8 *)(param_1 + 0x70),uVar1,uVar2);
  return;
}

