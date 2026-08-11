/* Ghidra address: 0041afb0 */
/* Ghidra symbol: FUN_0041afb0 */


undefined8 *
FUN_0041afb0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414480(param_2);
  iVar4 = 1;
  while( true ) {
    iVar2 = 0;
    if (local_res20 != 0) {
      iVar2 = *(int *)(local_res20 + -4);
    }
    iVar3 = iVar4;
    if (iVar2 < iVar4) break;
    while( true ) {
      iVar2 = 0;
      if (local_res20 != 0) {
        iVar2 = *(int *)(local_res20 + -4);
      }
      if ((iVar2 < iVar3) || (*(short *)(local_res20 + -2 + (longlong)iVar3 * 2) == 0x2c)) break;
      iVar3 = iVar3 + 1;
    }
    if (iVar4 != iVar3) {
      FUN_00416dc0(local_20,local_res20,iVar4,iVar3 - iVar4);
      FUN_00416ba0(param_2,local_res18,local_20[0]);
      cVar1 = FUN_0041af20(param_1,*param_2);
      if (cVar1 != '\0') goto LAB_0041b07a;
    }
    iVar4 = iVar3 + 1;
  }
  FUN_00414480(param_2);
LAB_0041b07a:
  FUN_00414480(local_20);
  FUN_00414560(&local_res18,2);
  return param_2;
}

