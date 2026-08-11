/* Ghidra address: 0049fa80 */
/* Ghidra symbol: FUN_0049fa80 */


void FUN_0049fa80(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(uint *)(lVar1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  FUN_0049ed40(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8),param_3);
  return;
}

