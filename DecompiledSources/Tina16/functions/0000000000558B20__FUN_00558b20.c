/* Ghidra address: 00558b20 */
/* Ghidra symbol: FUN_00558b20 */


void FUN_00558b20(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_00558b70(param_1);
  lVar2 = FUN_00558b10(param_1);
  FUN_00542660(DAT_020116a8,
               **(undefined8 **)
                 (*(longlong *)(lVar1 + 0x50) + 2 + (ulonglong)*(ushort *)(lVar2 + 4) * 8));
  return;
}

