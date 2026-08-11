/* Ghidra address: 00f13040 */
/* Ghidra symbol: FUN_00f13040 */


undefined8 FUN_00f13040(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x90) == 0) && (*(short *)(param_1 + 0x88) != -1)) {
    uVar1 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),(longlong)*(short *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x90) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x90);
}

