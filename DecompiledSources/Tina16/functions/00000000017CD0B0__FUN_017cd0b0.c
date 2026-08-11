/* Ghidra address: 017cd0b0 */
/* Ghidra symbol: FUN_017cd0b0 */


void FUN_017cd0b0(undefined8 param_1,longlong *param_2,undefined1 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_017ccbd0(param_1,param_2,param_3,param_4);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = (**(code **)(*param_2 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_30,iVar4);
      if (local_30 == 0) {
        (**(code **)(*param_2 + 0x18))(param_2,&local_60,iVar4);
        (**(code **)(*plVar3 + 0x78))(plVar3,local_60);
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2,&local_38,iVar4);
        cVar1 = FUN_017ccfc0(local_38,param_2);
        if (cVar1 == '\0') {
          (**(code **)(*param_2 + 0x18))(param_2,&local_50,iVar4);
          FUN_0043f750(&local_58,iVar4);
          FUN_00416cd0(&local_48,3,local_50,&LAB_017cd2c8,local_58);
          (**(code **)(*plVar3 + 0x78))(plVar3,local_48);
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2,&local_40,iVar4);
          (**(code **)(*plVar3 + 0x78))(plVar3,local_40);
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(*param_2 + 0x90))(param_2);
  (**(code **)(*param_2 + 0x88))(param_2,plVar3);
  FUN_00410f20(plVar3);
  FUN_00414560(&local_60,7);
  return;
}

