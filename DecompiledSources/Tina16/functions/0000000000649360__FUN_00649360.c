/* Ghidra address: 00649360 */
/* Ghidra symbol: FUN_00649360 */


undefined2 FUN_00649360(longlong param_1,char param_2)

{
  undefined2 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = 0xfff3;
  }
  else {
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0xe2);
  }
  return uVar1;
}

