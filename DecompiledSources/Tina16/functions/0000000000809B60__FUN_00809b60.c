/* Ghidra address: 00809b60 */
/* Ghidra symbol: FUN_00809b60 */


void FUN_00809b60(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_03ee5c68(param_2,*(undefined4 *)(&DAT_01e15cb8 + (param_3 & 0xff) * 4));
  FUN_00808430(param_1,uVar1);
  return;
}

