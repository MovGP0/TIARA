/* Ghidra address: 00d2a520 */
/* Ghidra symbol: FUN_00d2a520 */


undefined8 FUN_00d2a520(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_00d2a4f0(param_1);
    uVar1 = FUN_00cd6090(uVar1,1,0);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x80);
}

