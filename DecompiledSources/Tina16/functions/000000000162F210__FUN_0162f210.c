/* Ghidra address: 0162f210 */
/* Ghidra symbol: FUN_0162f210 */


undefined8 FUN_0162f210(longlong param_1,longlong param_2)

{
  undefined8 unaff_XMM6_Qa;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    FUN_01613110(L"Get I(p,n): component not found");
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    unaff_XMM6_Qa =
         FUN_01650470(*(longlong *)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x38),
                      *(undefined1 *)(param_2 + 0x139b8),param_1);
  }
  return unaff_XMM6_Qa;
}

