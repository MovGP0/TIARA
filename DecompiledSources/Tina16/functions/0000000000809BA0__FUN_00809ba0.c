/* Ghidra address: 00809ba0 */
/* Ghidra symbol: FUN_00809ba0 */


void FUN_00809ba0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_03cc587b(param_2,*(undefined4 *)(&DAT_01e15cb8 + (param_3 & 0xff) * 4));
  FUN_00808430(param_1,uVar1);
  return;
}

