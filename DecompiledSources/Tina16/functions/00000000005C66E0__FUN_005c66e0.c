/* Ghidra address: 005c66e0 */
/* Ghidra symbol: FUN_005c66e0 */


undefined2 FUN_005c66e0(longlong param_1,uint param_2)

{
  undefined2 uVar1;
  
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 2);
  FUN_005994f0(param_1 + 8,param_2,3);
  return uVar1;
}

