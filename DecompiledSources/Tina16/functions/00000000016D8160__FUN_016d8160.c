/* Ghidra address: 016d8160 */
/* Ghidra symbol: FUN_016d8160 */


undefined8 FUN_016d8160(longlong param_1,double param_2,double param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0040c770((param_2 * (double)*(int *)(param_1 + 0x1fc)) / *(double *)(param_1 + 0x1f0)
                       + (double)*(int *)(param_1 + 0x1ec));
  uVar2 = FUN_0040c770(((*(double *)(param_1 + 0x1e0) - param_3) * (double)*(int *)(param_1 + 0x1dc)
                       ) / (*(double *)(param_1 + 0x1e0) * 2.0) + (double)*(int *)(param_1 + 0x1d8))
  ;
  return CONCAT44(uVar2,uVar1);
}

