/* Ghidra address: 0116d980 */
/* Ghidra symbol: FUN_0116d980 */


void FUN_0116d980(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar1 = FUN_0040c770(((double)param_1 / 1.0) * DAT_0203aeb0);
  iVar2 = FUN_0040c770(((double)param_2 / 1.0) * DAT_0203aeb0);
  FUN_01167160(param_4,uVar1,DAT_0203d970 + iVar2,local_res18[0]);
  FUN_00414480(local_res18);
  return;
}

