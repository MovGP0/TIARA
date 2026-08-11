/* Ghidra address: 01963420 */
/* Ghidra symbol: FUN_01963420 */


undefined8 FUN_01963420(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x330) == 0) {
    uVar1 = FUN_019812d0(&PTR_FUN_019185f0,1);
    *(undefined8 *)(param_1 + 0x330) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x330);
}

