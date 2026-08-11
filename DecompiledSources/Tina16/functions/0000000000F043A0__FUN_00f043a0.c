/* Ghidra address: 00f043a0 */
/* Ghidra symbol: FUN_00f043a0 */


void FUN_00f043a0(longlong param_1)

{
  ushort uVar1;
  undefined8 unaff_RSI;
  
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 8) + 0x4f);
  *(ushort *)(*(longlong *)(param_1 + 8) + 0x4f) =
       *(ushort *)(*(longlong *)(param_1 + 8) + 0x4f) & 0xfe1f;
  FUN_00414480(param_1 + 0x10);
  FUN_00f042d0(param_1);
  FUN_004b1830(*(undefined8 *)(param_1 + 8),
               CONCAT71((int7)((ulonglong)unaff_RSI >> 8),(uVar1 & 0x100) != 0) & 0xffffffff);
  return;
}

