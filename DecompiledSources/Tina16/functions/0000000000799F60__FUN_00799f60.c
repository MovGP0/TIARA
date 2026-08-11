/* Ghidra address: 00799f60 */
/* Ghidra symbol: FUN_00799f60 */


undefined8 FUN_00799f60(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8);
  FUN_00599670(param_1 + 8,param_2,3);
  return uVar1;
}

