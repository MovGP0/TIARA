/* Ghidra address: 00607230 */
/* Ghidra symbol: FUN_00607230 */


undefined8 FUN_00607230(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00606d90(param_1);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10);
  *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10) = 0;
  return uVar1;
}

