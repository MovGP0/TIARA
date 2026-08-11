/* Ghidra address: 0181f7b0 */
/* Ghidra symbol: FUN_0181f7b0 */


void FUN_0181f7b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar2 = FUN_00414df0(param_1 + 0x10);
    uVar1 = FUN_00414cd0(*(undefined8 *)(param_1 + 0x10));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
              (*(longlong **)(param_1 + 0x18),uVar2,uVar1);
  }
  FUN_004144d0(param_1 + 0x10);
  return;
}

