/* Ghidra address: 0162e810 */
/* Ghidra symbol: FUN_0162e810 */


undefined8 FUN_0162e810(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_016123d0(&DAT_01611258,1);
  FUN_01615b20(uVar1,0);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x68),uVar1);
  *(int *)(param_1 + 0x4c) = *(int *)(*(longlong *)(param_1 + 0x68) + 0x10) + -1;
  return uVar1;
}

