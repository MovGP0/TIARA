/* Ghidra address: 00bc5600 */
/* Ghidra symbol: FUN_00bc5600 */


undefined8 FUN_00bc5600(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  if ((((param_3 < 0) || (0xe < param_3)) || (*(longlong *)(param_1 + 400) == 0)) ||
     ((*(longlong *)(param_1 + 8 + (longlong)param_3 * 8) == 0 ||
      (*(longlong *)(param_1 + 0x80 + (longlong)param_3 * 8) == 0)))) {
    FUN_00414480(param_2);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8 + (longlong)param_3 * 8);
    FUN_00414740(param_2,lVar1,(*(longlong *)(param_1 + 0x80 + (longlong)param_3 * 8) - lVar1) / 2);
  }
  return param_2;
}

