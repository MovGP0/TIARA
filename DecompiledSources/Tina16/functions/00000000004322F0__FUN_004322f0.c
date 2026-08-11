/* Ghidra address: 004322f0 */
/* Ghidra symbol: FUN_004322f0 */


ulonglong FUN_004322f0(ushort *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  if (uVar1 < 0x100) {
    uVar2 = (ulonglong)(byte)PTR_DAT_0200c3f0[uVar1];
  }
  else {
    uVar2 = FUN_00431e30(uVar1);
  }
  return uVar2;
}

