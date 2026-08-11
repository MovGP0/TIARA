/* Ghidra address: 01c04100 */
/* Ghidra symbol: FUN_01c04100 */


void FUN_01c04100(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 800);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x80) == param_1)) {
    *(undefined8 *)(lVar1 + 0x80) = 0;
  }
  FUN_0065f1b0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

