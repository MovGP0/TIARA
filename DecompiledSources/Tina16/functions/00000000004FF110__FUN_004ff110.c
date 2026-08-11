/* Ghidra address: 004ff110 */
/* Ghidra symbol: FUN_004ff110 */


undefined4 FUN_004ff110(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 4);
  FUN_005995b0(param_1 + 8,param_2,3);
  return uVar1;
}

