/* Ghidra address: 004d3de0 */
/* Ghidra symbol: FUN_004d3de0 */


undefined8 FUN_004d3de0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_004ae960(&PTR_FUN_00472dd0,PTR_PTR_02004940,(longlong)(int)param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(uint *)(lVar1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  return *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8);
}

