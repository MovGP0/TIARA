/* Ghidra address: 006d6520 */
/* Ghidra symbol: FUN_006d6520 */


void FUN_006d6520(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x498);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x540) == param_1) {
      *(undefined8 *)(lVar1 + 0x540) = 0;
    }
    FUN_006d77b0(*(undefined8 *)(param_1 + 0x498),param_1);
  }
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

