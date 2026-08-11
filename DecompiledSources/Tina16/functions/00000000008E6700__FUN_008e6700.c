/* Ghidra address: 008e6700 */
/* Ghidra symbol: FUN_008e6700 */


void FUN_008e6700(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_0044d530(&PTR_FUN_008d33d0,CONCAT71((int7)((ulonglong)param_4 >> 8),1) & 0xffffffff,
                       param_1,param_2,param_3);
  *(int *)(lVar1 + 0x30) = (int)param_4;
  return;
}

