/* Ghidra address: 00d87d00 */
/* Ghidra symbol: FUN_00d87d00 */


undefined1 FUN_00d87d00(longlong param_1,char param_2)

{
  undefined1 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x48) + 0xf5);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

