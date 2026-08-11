/* Ghidra address: 01b0fa40 */
/* Ghidra symbol: FUN_01b0fa40 */


undefined4 FUN_01b0fa40(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18 + (longlong)param_2 * 8);
  if (*(uint *)(lVar1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  return *(undefined4 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_3 * 4);
}

