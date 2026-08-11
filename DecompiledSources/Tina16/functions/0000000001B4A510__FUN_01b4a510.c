/* Ghidra address: 01b4a510 */
/* Ghidra symbol: FUN_01b4a510 */


void FUN_01b4a510(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x10)) {
    lVar1 = FUN_01d347d0(*(longlong *)(param_1 + 8),0);
    FUN_00410f20(*(undefined8 *)(lVar1 + 0x30));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

