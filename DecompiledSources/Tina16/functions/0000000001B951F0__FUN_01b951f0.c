/* Ghidra address: 01b951f0 */
/* Ghidra symbol: FUN_01b951f0 */


void FUN_01b951f0(longlong param_1)

{
  longlong lVar1;
  
  for (lVar1 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550)); lVar1 != 0;
      lVar1 = FUN_006dd600(lVar1)) {
    FUN_00418590(*(undefined8 *)(lVar1 + 0x18),&DAT_01b94ff0);
    FUN_006dc990(lVar1,0);
  }
  FUN_006ded30(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550));
  return;
}

