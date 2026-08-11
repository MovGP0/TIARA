/* Ghidra address: 0074af60 */
/* Ghidra symbol: FUN_0074af60 */


void FUN_0074af60(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_0074b3f0(param_1,0);
  lVar1 = *(longlong *)(param_1 + 0x4a0);
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  FUN_00410f20(lVar1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x498));
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

