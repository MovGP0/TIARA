/* Ghidra address: 0186dc80 */
/* Ghidra symbol: FUN_0186dc80 */


void FUN_0186dc80(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong *local_50;
  undefined1 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_004b67b0(param_3,1);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_2,iVar2);
      dVar4 = (double)FUN_01950860(uVar1);
      if (dVar4 < 0.0) {
        local_58 = FUN_01950860(uVar1);
        local_58 = local_58 ^ 0x8000000000000000;
        local_50 = &local_58;
        local_48 = 3;
        FUN_00442f70(&local_60,L"%9.2f",&local_50,0);
        FUN_00416ba0(local_30,&DAT_0186df5c,local_60);
      }
      else {
        local_58 = FUN_01950860(uVar1);
        local_50 = &local_58;
        local_48 = 3;
        FUN_00442f70(local_40,L"%9.2f",&local_50,0);
        FUN_00416ba0(local_30,&DAT_0186df34,local_40[0]);
      }
      dVar4 = (double)FUN_019508b0(uVar1);
      if (dVar4 < 0.0) {
        local_58 = FUN_019508b0(uVar1);
        local_58 = local_58 ^ 0x8000000000000000;
        local_50 = &local_58;
        local_48 = 3;
        FUN_00442f70(&local_70,L"%9.2f",&local_50,0);
        FUN_00416cd0(local_30,3,local_30[0],&DAT_0186df5c,local_70);
      }
      else {
        local_58 = FUN_019508b0(uVar1);
        local_50 = &local_58;
        local_48 = 3;
        FUN_00442f70(&local_68,L"%9.2f",&local_50,0);
        FUN_00416cd0(local_30,3,local_30[0],&DAT_0186df34,local_68);
      }
      (**(code **)(*param_3 + 0x80))(param_3,local_30[0],uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_70,3);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

