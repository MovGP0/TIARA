/* Ghidra address: 019678d0 */
/* Ghidra symbol: FUN_019678d0 */


undefined8 FUN_019678d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    uVar1 = FUN_019812d0(&PTR_FUN_019185f0,1);
    *(undefined8 *)(param_1 + 0x2b8) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x2b8);
}

