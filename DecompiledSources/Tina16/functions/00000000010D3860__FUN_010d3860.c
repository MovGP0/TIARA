/* Ghidra address: 010d3860 */
/* Ghidra symbol: FUN_010d3860 */


void FUN_010d3860(longlong param_1,ushort param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((int)(uint)param_2 <= *(int *)(param_1 + 0x10) + -1) {
    lVar1 = FUN_00b94e60(param_1,param_2);
    FUN_013b4bc0(*(undefined8 *)(lVar1 + 0x10),param_2,param_3);
  }
  return;
}

