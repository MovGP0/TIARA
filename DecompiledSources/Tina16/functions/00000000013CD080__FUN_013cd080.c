/* Ghidra address: 013cd080 */
/* Ghidra symbol: FUN_013cd080 */


void FUN_013cd080(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_res18 [2];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50 [2];
  undefined8 local_40 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (*(int *)(param_1 + 0x938) == 0) {
    iVar3 = 0;
    iVar4 = 0;
    iVar1 = (**(code **)(*param_2 + 0x278))(param_2);
    while( true ) {
      (**(code **)(*(longlong *)param_2[0x9b] + 0x18))((longlong *)param_2[0x9b],&local_58,iVar4);
      iVar2 = 0;
      if (local_58 != 0) {
        iVar2 = *(int *)(local_58 + -4);
      }
      if (iVar1 <= iVar3 + iVar2) break;
      (**(code **)(*(longlong *)param_2[0x9b] + 0x18))((longlong *)param_2[0x9b],local_50,iVar4);
      iVar2 = 0;
      if (local_50[0] != 0) {
        iVar2 = *(int *)(local_50[0] + -4);
      }
      iVar3 = iVar3 + iVar2 + 2;
      iVar4 = iVar4 + 1;
    }
    (**(code **)(*(longlong *)param_2[0x9b] + 0x18))((longlong *)param_2[0x9b],local_40,iVar4);
    FUN_00416ea0(local_res18[0],local_40,(iVar1 - iVar3) + 1);
    (**(code **)(*(longlong *)param_2[0x9b] + 0x40))((longlong *)param_2[0x9b],iVar4,local_40[0]);
    iVar3 = 0;
    if (local_res18[0] != 0) {
      iVar3 = *(int *)(local_res18[0] + -4);
    }
    (**(code **)(*param_2 + 0x290))(param_2,iVar1 + iVar3);
  }
  else {
    iVar3 = 0;
    iVar4 = 0;
    iVar1 = FUN_00c08890(param_2);
    while( true ) {
      (**(code **)(*(longlong *)param_2[0x9d] + 0x18))((longlong *)param_2[0x9d],&local_68,iVar4);
      iVar2 = 0;
      if (local_68 != 0) {
        iVar2 = *(int *)(local_68 + -4);
      }
      if (iVar1 <= iVar3 + iVar2) break;
      (**(code **)(*(longlong *)param_2[0x9d] + 0x18))((longlong *)param_2[0x9d],&local_60,iVar4);
      iVar2 = 0;
      if (local_60 != 0) {
        iVar2 = *(int *)(local_60 + -4);
      }
      iVar3 = iVar3 + iVar2 + 2;
      iVar4 = iVar4 + 1;
    }
    (**(code **)(*(longlong *)param_2[0x9d] + 0x18))((longlong *)param_2[0x9d],local_40,iVar4);
    FUN_00416ea0(local_res18[0],local_40,(iVar1 - iVar3) + 1);
    (**(code **)(*(longlong *)param_2[0x9d] + 0x40))((longlong *)param_2[0x9d],iVar4,local_40[0]);
    iVar3 = 0;
    if (local_res18[0] != 0) {
      iVar3 = *(int *)(local_res18[0] + -4);
    }
    FUN_00c08950(param_2,iVar1 + iVar3);
  }
  FUN_00414560(&local_68,4);
  FUN_00414480(local_40);
  FUN_00414480(local_res18);
  return;
}

