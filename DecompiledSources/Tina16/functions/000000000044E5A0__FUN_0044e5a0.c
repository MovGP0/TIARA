/* Ghidra address: 0044e5a0 */
/* Ghidra symbol: FUN_0044e5a0 */


undefined8 FUN_0044e5a0(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0044e4d0();
  return *(undefined8 *)
          (PTR_PTR_02002300 + (ulonglong)(byte)PTR_DAT_02005028[(uVar1 & 0xff) * 0x10 + -0x30] * 8);
}

