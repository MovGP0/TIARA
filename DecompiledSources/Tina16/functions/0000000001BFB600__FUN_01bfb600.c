/* Ghidra address: 01bfb600 */
/* Ghidra symbol: FUN_01bfb600 */


undefined1 FUN_01bfb600(void)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)PTR_DAT_02004030 != 0) {
    uVar1 = *(undefined1 *)(*(longlong *)PTR_DAT_02004030 + 0xf8);
  }
  return uVar1;
}

