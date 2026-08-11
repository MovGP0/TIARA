/* Ghidra address: 012dcef0 */
/* Ghidra symbol: FUN_012dcef0 */


undefined8 FUN_012dcef0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8);
  }
  if (lVar1 + -1 < (longlong)param_3) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)param_3 * 8));
  }
  return param_2;
}

