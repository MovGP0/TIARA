/* Ghidra address: 017d16e0 */
/* Ghidra symbol: FUN_017d16e0 */


undefined8 * FUN_017d16e0(undefined8 *param_1,longlong param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar2 = FUN_01d347d0(param_2,param_3);
    lVar1 = *(longlong *)(lVar2 + 0x10);
    *param_1 = *(undefined8 *)(*(longlong *)(lVar2 + 8) + (longlong)param_4 * 8);
    param_1[1] = *(undefined8 *)(lVar1 + (longlong)param_4 * 8);
  }
  return param_1;
}

