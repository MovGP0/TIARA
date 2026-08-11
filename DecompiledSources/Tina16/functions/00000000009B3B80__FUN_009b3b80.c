/* Ghidra address: 009b3b80 */
/* Ghidra symbol: FUN_009b3b80 */


undefined1 FUN_009b3b80(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2);
  FUN_00599430(param_1 + 8,param_2,3);
  return uVar1;
}

