/* Ghidra address: 0185aa80 */
/* Ghidra symbol: FUN_0185aa80 */


void FUN_0185aa80(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_01859a30(&PTR_FUN_018585b0,*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x18));
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_018697e0(param_1);
  return;
}

