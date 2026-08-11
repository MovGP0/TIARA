/* Ghidra address: 00721cc0 */
/* Ghidra symbol: FUN_00721cc0 */


undefined8 FUN_00721cc0(void)

{
  undefined8 uVar1;
  
  if ((*(char *)(*(longlong *)PTR_DAT_02004030 + 0x193) == '\0') ||
     (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8) == 0)) {
    uVar1 = *(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0);
  }
  else {
    uVar1 = FUN_0080f4a0(*(undefined8 *)PTR_DAT_02004030);
  }
  return uVar1;
}

