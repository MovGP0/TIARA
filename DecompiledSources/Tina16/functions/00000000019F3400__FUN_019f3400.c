/* Ghidra address: 019f3400 */
/* Ghidra symbol: FUN_019f3400 */


bool FUN_019f3400(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                 int *param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong local_res18;
  longlong local_res20;
  bool local_39;
  longlong local_38;
  longlong local_30 [4];
  
  local_38 = 0;
  local_30[0] = 0;
  local_30[2] = 0;
  local_30[1] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  local_39 = false;
  *param_5 = -1;
  for (iVar2 = 0;
      (local_39 == false && (iVar1 = (**(code **)(*param_2 + 0x28))(param_2), iVar2 < iVar1));
      iVar2 = iVar2 + 1) {
    FUN_004b3cf0(param_2,local_30,iVar2);
    if (local_30[0] == local_res18) {
      bVar3 = true;
    }
    else if ((local_30[0] == 0) || (local_res18 == 0)) {
      bVar3 = false;
    }
    else {
      iVar1 = FUN_0043e420(local_30[0],local_res18);
      bVar3 = iVar1 == 0;
    }
    if (bVar3) {
      *param_5 = *param_5 + 1;
      FUN_004b5390(param_2,&local_38,iVar2);
      if (local_38 == local_res20) {
        local_39 = true;
      }
      else if ((local_38 == 0) || (local_res20 == 0)) {
        local_39 = false;
      }
      else {
        iVar1 = FUN_0043e420(local_38,local_res20);
        local_39 = iVar1 == 0;
      }
    }
  }
  FUN_00414560(&local_38,4);
  FUN_00414560(&local_res18,2);
  return local_39;
}

