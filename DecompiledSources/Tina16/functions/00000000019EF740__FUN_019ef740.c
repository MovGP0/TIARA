/* Ghidra address: 019ef740 */
/* Ghidra symbol: FUN_019ef740 */


void FUN_019ef740(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_68 = param_2;
  FUN_019ef170(auStack_a8,param_2,0);
  local_70 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = (**(code **)(*param_3 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_3 + 0x18))(param_3,local_30,iVar3);
      if (local_30[0] == 0) {
        (**(code **)(*param_3 + 0x18))(param_3,&local_60,iVar3);
        (**(code **)(*local_70 + 0x78))(local_70,local_60);
      }
      else {
        (**(code **)(*param_3 + 0x18))(param_3,&local_38,iVar3);
        cVar1 = FUN_019ef640(auStack_a8,local_38);
        if (cVar1 == '\0') {
          (**(code **)(*param_3 + 0x18))(param_3,&local_50,iVar3);
          FUN_0043f750(&local_58,iVar3);
          local_88 = local_58;
          FUN_00416cd0(&local_48,3,local_50,&LAB_019ef988);
          (**(code **)(*local_70 + 0x78))(local_70,local_48);
        }
        else {
          (**(code **)(*param_3 + 0x18))(param_3,&local_40,iVar3);
          (**(code **)(*local_70 + 0x78))(local_70,local_40);
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(*param_3 + 0x90))(param_3);
  (**(code **)(*param_3 + 0x88))(param_3,local_70);
  FUN_00410f20(local_70);
  FUN_00414560(&local_60,7);
  return;
}

