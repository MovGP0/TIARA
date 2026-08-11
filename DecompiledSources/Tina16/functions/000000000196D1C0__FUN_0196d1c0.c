/* Ghidra address: 0196d1c0 */
/* Ghidra symbol: FUN_0196d1c0 */


void FUN_0196d1c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_00414ad0(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
    if (lVar1 != 0) {
      uVar2 = FUN_01953bb0(lVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
  }
  return;
}

