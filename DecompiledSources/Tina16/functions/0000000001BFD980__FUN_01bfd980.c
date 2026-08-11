/* Ghidra address: 01bfd980 */
/* Ghidra symbol: FUN_01bfd980 */


undefined8 FUN_01bfd980(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  }
  return uVar1;
}

