/* Ghidra address: 0116d8d0 */
/* Ghidra symbol: FUN_0116d8d0 */


void FUN_0116d8d0(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  undefined1 local_118 [264];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  DAT_0203d94c = DAT_0203d94c + 1;
  lVar1 = (longlong)DAT_0203d94c;
  *(undefined4 *)(&DAT_0203af14 + lVar1 * 0x48) = param_1;
  (&DAT_0203af18)[lVar1 * 0x12] = param_2;
  FUN_00416910(local_118,local_res18[0],0xff);
  FUN_00415020(&DAT_0203aed4 + lVar1 * 0x12,local_118,0x3c);
  FUN_00414480(local_res18);
  return;
}

