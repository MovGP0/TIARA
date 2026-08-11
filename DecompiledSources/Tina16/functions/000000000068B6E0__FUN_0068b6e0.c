/* Ghidra address: 0068b6e0 */
/* Ghidra symbol: FUN_0068b6e0 */


void FUN_0068b6e0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  if ((char)param_1[0x92] == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x260))(param_1);
    if (iVar2 != -1) {
      uVar3 = (**(code **)(*param_1 + 0x260))(param_1);
      (**(code **)(*(longlong *)param_1[0x94] + 0x18))((longlong *)param_1[0x94],&local_40,uVar3);
      uVar4 = FUN_00416740(local_40);
      FUN_004167d0(&local_48,uVar4);
      uVar3 = (**(code **)(*param_1 + 0x260))(param_1);
      uVar4 = (**(code **)(*(longlong *)param_1[0x94] + 0x30))((longlong *)param_1[0x94],uVar3);
      (**(code **)(*param_2 + 0x270))(param_2,local_48,uVar4);
    }
  }
  else {
    iVar2 = (**(code **)(*(longlong *)param_1[0x94] + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        cVar1 = FUN_0068bca0(param_1,iVar5);
        if (cVar1 != '\0') {
          (**(code **)(*(longlong *)param_1[0x94] + 0x18))((longlong *)param_1[0x94],local_30,iVar5)
          ;
          uVar4 = FUN_00416740(local_30[0]);
          FUN_004167d0(&local_38,uVar4);
          uVar4 = (**(code **)(*(longlong *)param_1[0x94] + 0x30))((longlong *)param_1[0x94],iVar5);
          (**(code **)(*param_2 + 0x270))(param_2,local_38,uVar4);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414560(&local_48,4);
  return;
}

