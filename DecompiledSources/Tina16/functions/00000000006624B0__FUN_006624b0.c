/* Ghidra address: 006624b0 */
/* Ghidra symbol: FUN_006624b0 */


void FUN_006624b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(*(longlong *)(param_2 + 0xf0) + 0xa4) = *(undefined1 *)(param_2 + 0xbf);
  if (*(longlong *)(*(longlong *)(param_2 + 0xf0) + 0x90) == 0) {
    uVar1 = FUN_00660520(&DAT_006446d0,1,*(undefined8 *)(param_2 + 0xf0));
    *(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 0x90) = uVar1;
  }
  FUN_006611a0(*(undefined8 *)(param_2 + 0xf0));
  return;
}

