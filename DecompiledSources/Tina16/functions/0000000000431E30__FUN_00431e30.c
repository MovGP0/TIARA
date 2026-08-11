/* Ghidra address: 00431e30 */
/* Ghidra symbol: FUN_00431e30 */


undefined1 FUN_00431e30(uint param_1)

{
  undefined1 uVar1;
  
  if (param_1 < 0x110000) {
    uVar1 = PTR_DAT_0200c3f0
            [(uint)*(ushort *)
                    (PTR_DAT_0200c3e8 +
                    (ulonglong)
                    ((uint)(byte)PTR_DAT_0200c3e0[param_1 >> 8] * 0x10 + (param_1 >> 4 & 0xf)) * 2)
             + (param_1 & 0xf)];
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

