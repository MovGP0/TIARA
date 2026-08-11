/* Ghidra address: 017ff2c0 */
/* Ghidra symbol: FUN_017ff2c0 */


undefined4 FUN_017ff2c0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01cf0520(param_1);
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_017ff310(param_1);
  return uVar1;
}

