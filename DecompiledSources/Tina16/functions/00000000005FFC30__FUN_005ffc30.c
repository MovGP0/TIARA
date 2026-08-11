/* Ghidra address: 005ffc30 */
/* Ghidra symbol: FUN_005ffc30 */


void FUN_005ffc30(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_005fc8c0(*(undefined8 *)(param_1 + 0x70));
  thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x60),uVar2);
  uVar1 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x28));
  thunk_FUN_0412a071(*(undefined8 *)(param_1 + 0x60),uVar1);
  return;
}

