/* Ghidra address: 00cd92b0 */
/* Ghidra symbol: FUN_00cd92b0 */


undefined8 * FUN_00cd92b0(longlong *param_1,undefined8 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if ((*param_3 < 0) || (iVar2 = (**(code **)(*param_1 + 0x28))(param_1), iVar2 <= *param_3)) {
    FUN_00414480(param_2);
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,local_20,*param_3);
    *param_3 = *param_3 + 1;
    FUN_0043eb80(&local_28,param_1[0xf]);
    iVar3 = (**(code **)PTR_PTR_020018b0)(local_28,local_20[0]);
    iVar2 = 0;
    if (local_28 != 0) {
      iVar2 = *(int *)(local_28 + -4);
    }
    FUN_00416dc0(&local_30,local_20[0],iVar3 + iVar2,0x7fffffff);
    FUN_0043eb50(param_2,local_30);
    if ((char)param_1[0x10] != '\0') {
      while (iVar2 = (**(code **)(*param_1 + 0x28))(param_1), *param_3 < iVar2) {
        (**(code **)(*param_1 + 0x18))(param_1,local_20,*param_3);
        cVar1 = FUN_008791b0(local_20[0],1,&DAT_00cd94b8);
        if (cVar1 == '\0') break;
        FUN_0043ea00(&local_38,*param_2);
        FUN_0043ea00(&local_40,local_20[0]);
        FUN_00416cd0(param_2,3,local_38,&DAT_00cd94cc,local_40);
        *param_3 = *param_3 + 1;
      }
    }
    FUN_0043ea00(&local_48,*param_2);
    FUN_00414ad0(param_2,local_48);
  }
  FUN_00414560(&local_48,6);
  return param_2;
}

