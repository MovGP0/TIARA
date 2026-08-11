/* Ghidra address: 015ec3b0 */
/* Ghidra symbol: FUN_015ec3b0 */


void FUN_015ec3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,param_1);
  if (((short)param_1 == 0x3a) || ((short)param_1 == 0x96)) {
    *(undefined1 *)(lVar1 + 0xd1) = param_4;
    *(undefined4 *)(lVar1 + 0xc) = param_2;
    *(undefined4 *)(lVar1 + 0x10) = param_3;
  }
  return;
}

