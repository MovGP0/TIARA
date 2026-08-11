/* Ghidra address: 0180e9b0 */
/* Ghidra symbol: FUN_0180e9b0 */


void FUN_0180e9b0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [2];
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  (**(code **)(*param_2 + 0x90))(param_2);
  FUN_00414b50(local_40,param_1);
  iVar4 = FUN_00414cb0(local_40[0]);
  if (0 < iVar4) {
    do {
      cVar3 = FUN_0043e100(*(undefined2 *)(local_40[0] + -2 + (longlong)iVar4 * 2),&DAT_0180ebec);
      if (cVar3 == '\0') {
        FUN_00416e20(local_40,iVar4,1);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_40[0] != 0) {
    iVar4 = FUN_00414cb0(local_40[0]);
    if (*(short *)(local_40[0] + -2 + (longlong)iVar4 * 2) == 0x2d) {
      FUN_0043f750(local_50,param_3);
      FUN_00416ad0(local_40,local_50[0]);
    }
    FUN_00416ad0(local_40,&LAB_0180ec18);
    iVar7 = 1;
    iVar4 = 1;
    bVar2 = false;
    for (iVar6 = 1; iVar5 = FUN_00414cb0(local_40[0]), iVar6 <= iVar5; iVar6 = iVar6 + 1) {
      sVar1 = *(short *)(local_40[0] + -2 + (longlong)iVar6 * 2);
      if (sVar1 == 0x2c) {
        FUN_00416dc0(&local_58,local_40[0],iVar7,iVar6 - iVar7);
        iVar5 = FUN_0043fc00(local_58);
        iVar7 = iVar6 + 1;
        if (bVar2) {
          for (; iVar4 <= iVar5; iVar4 = iVar4 + 1) {
            FUN_0043f750(&local_60,iVar4);
            (**(code **)(*param_2 + 0x78))(param_2,local_60);
          }
        }
        else {
          FUN_0043f750(&local_68,iVar5);
          (**(code **)(*param_2 + 0x78))(param_2,local_68);
        }
        bVar2 = false;
      }
      else if (sVar1 == 0x2d) {
        bVar2 = true;
        FUN_00416dc0(&local_70,local_40[0],iVar7,iVar6 - iVar7);
        iVar4 = FUN_0043fc00(local_70);
        iVar7 = iVar6 + 1;
      }
    }
  }
  FUN_00414560(&local_70,5);
  FUN_00414480(local_40);
  return;
}

