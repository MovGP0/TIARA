/* Ghidra address: 005894c0 */
/* Ghidra symbol: FUN_005894c0 */


undefined8 * FUN_005894c0(undefined8 *param_1,char *param_2,int param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_40;
  byte *local_38;
  byte *local_30;
  longlong local_28;
  byte *local_20;
  byte *local_18;
  char *local_10;
  
  local_40 = 0;
  if (*param_2 == '\x01') {
    FUN_0043f750(param_1,param_3);
  }
  else {
    local_20 = (byte *)(param_2 + 1);
    local_28 = **(longlong **)(param_2 + (ulonglong)*local_20 + 0xb);
    local_38 = (byte *)(local_28 + 1);
    lVar2 = local_28 + 2 + (ulonglong)*local_38;
    local_30 = local_38;
    local_18 = local_20;
    local_10 = param_2;
    if ((param_2 == "\x03\aBoolean\x01") || (*(int *)(lVar2 + 1) < 0)) {
      FUN_00414ad0(param_1,(&PTR_u_False_01de0ec0)[param_3 != 0]);
      if (*(undefined ***)PTR_PTR_02005288 == &PTR_DAT_00589664) {
        bVar4 = true;
      }
      else if (*(longlong *)PTR_PTR_02005288 == 0) {
        bVar4 = false;
      }
      else {
        iVar3 = FUN_0043e420(*(undefined8 *)PTR_PTR_02005288,&PTR_DAT_00589664);
        bVar4 = iVar3 == 0;
      }
      if (bVar4) {
        FUN_0043e1a0(&local_40,*param_1);
        FUN_00414ad0(param_1,local_40);
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x11);
      for (; param_3 != 0; param_3 = param_3 + -1) {
        pbVar1 = pbVar1 + (ulonglong)*pbVar1 + 1;
      }
      FUN_00589400(param_1,pbVar1);
    }
  }
  FUN_00414480(&local_40);
  return param_1;
}

