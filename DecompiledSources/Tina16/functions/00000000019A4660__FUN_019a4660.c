/* Ghidra address: 019a4660 */
/* Ghidra symbol: FUN_019a4660 */


undefined8 FUN_019a4660(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2770);
  }
  return uVar1;
}

