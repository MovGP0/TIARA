/* Ghidra address: 00c2e2d0 */
/* Ghidra symbol: FUN_00c2e2d0 */


void FUN_00c2e2d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x60) == param_1)) {
    *(undefined8 *)(lVar1 + 0x60) = 0;
  }
  FUN_00c2df20(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

