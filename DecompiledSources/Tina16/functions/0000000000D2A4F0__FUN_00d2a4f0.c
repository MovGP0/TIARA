/* Ghidra address: 00d2a4f0 */
/* Ghidra symbol: FUN_00d2a4f0 */


undefined8 FUN_00d2a4f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_00d0cca0();
    FUN_00d2a560(param_1,uVar1);
  }
  return *(undefined8 *)(param_1 + 0x78);
}

