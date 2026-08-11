/* Ghidra address: 01d39f60 */
/* Ghidra symbol: FUN_01d39f60 */


undefined8 FUN_01d39f60(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = (**(code **)(*DAT_03567a98 + 0xb0))(DAT_03567a98,local_res18[0]);
  if (iVar1 == -1) {
    iVar1 = DAT_03567aa0;
  }
  lVar2 = (**(code **)(*DAT_03567a98 + 0x30))(DAT_03567a98,iVar1);
  FUN_00416830(param_1,lVar2 + (longlong)param_2 * 0x3e,0x1f);
  FUN_00414480(local_res18);
  return param_1;
}

