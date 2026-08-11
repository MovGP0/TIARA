/* Ghidra address: 00c3d2f0 */
/* Ghidra symbol: FUN_00c3d2f0 */


longlong FUN_00c3d2f0(longlong param_1,short param_2)

{
  longlong lVar1;
  
  if ((param_2 < 0) || (*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) + -1 < (int)param_2)) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),(longlong)param_2);
    lVar1 = lVar1 + 0xc;
  }
  return lVar1;
}

