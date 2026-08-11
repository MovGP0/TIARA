/* Ghidra address: 00896970 */
/* Ghidra symbol: FUN_00896970 */


ulonglong FUN_00896970(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  int local_230 [132];
  
  FUN_00896b60(param_1,local_230);
  FUN_008968f0(*param_1,local_230,0,0,param_3);
  if (local_230[0] != 0) {
    if (*param_2 == 0) {
      lVar1 = FUN_0089b820(&PTR_FUN_008988e0);
      *param_2 = lVar1;
    }
    FUN_00896af0(*param_2,local_230);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),local_230[0] != 0) & 0xffffffff;
}

