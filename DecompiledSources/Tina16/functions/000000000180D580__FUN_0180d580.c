/* Ghidra address: 0180d580 */
/* Ghidra symbol: FUN_0180d580 */


undefined8 FUN_0180d580(longlong param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar2 = *param_4;
  while( true ) {
    iVar1 = FUN_00414cb0(local_res18[0]);
    if ((iVar1 < iVar2) ||
       (*(short *)(local_res18[0] + -2 + (longlong)iVar2 * 2) == *(short *)(param_1 + 0x80))) break;
    iVar2 = iVar2 + 1;
  }
  FUN_00416dc0(param_2,local_res18[0],*param_4,iVar2 - *param_4);
  iVar1 = FUN_00414cb0(local_res18[0]);
  if ((iVar2 <= iVar1) &&
     (*(short *)(local_res18[0] + -2 + (longlong)iVar2 * 2) == *(short *)(param_1 + 0x80))) {
    iVar2 = iVar2 + 1;
  }
  *param_4 = iVar2;
  FUN_00414480(local_res18);
  return param_2;
}

