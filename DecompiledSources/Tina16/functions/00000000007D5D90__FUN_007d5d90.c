/* Ghidra address: 007d5d90 */
/* Ghidra symbol: FUN_007d5d90 */


void FUN_007d5d90(longlong param_1,undefined4 param_2,longlong param_3,ulonglong param_4,
                 byte param_5)

{
  undefined8 uVar1;
  
  if ((param_3 != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) {
    uVar1 = FUN_007d56e0();
    uVar1 = thunk_FUN_041d081f(uVar1,param_2,
                               *(uint *)(&DAT_01e12560 + (param_4 & 0xff) * 4) |
                               *(uint *)(&DAT_01e12570 + (ulonglong)param_5 * 4));
    FUN_0060d3b0(param_3,uVar1);
  }
  return;
}

