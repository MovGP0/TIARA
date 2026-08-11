/* Ghidra address: 00bc50e0 */
/* Ghidra symbol: FUN_00bc50e0 */


undefined4 FUN_00bc50e0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x198) = 0;
  return uVar1;
}

