/* Ghidra address: 00f30c70 */
/* Ghidra symbol: FUN_00f30c70 */


undefined8 FUN_00f30c70(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(uint *)(lVar1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  return *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8);
}

