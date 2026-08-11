/* Ghidra address: 014979d0 */
/* Ghidra symbol: FUN_014979d0 */


void FUN_014979d0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  (**(code **)(*param_2 + 0x90))(param_2);
  (**(code **)(*param_3 + 0x90))(param_3);
  lVar1 = *(longlong *)(param_1 + 0x700);
  iVar3 = 0;
  if (-1 < *(int *)(lVar1 + 0x4e0) + -2) {
    iVar5 = *(int *)(lVar1 + 0x4e0) + -1;
    do {
      iVar4 = iVar3 + 1;
      FUN_0084e320(lVar1,&local_30,0,iVar4);
      cVar2 = FUN_014937c0(param_1,iVar4);
      if (cVar2 == '\0') {
        FUN_0084e320(lVar1,&local_38,1,iVar4);
        FUN_0084e320(lVar1,&local_40,2,iVar4);
        FUN_0084e320(lVar1,&local_48,3,iVar4);
        FUN_00416cd0(&local_50,7,local_30,&DAT_01497bd8,local_38,&DAT_01497be8,local_40,
                     &DAT_01497bf8,local_48);
        (**(code **)(*param_2 + 0x78))(param_2,local_50);
        FUN_0084e320(lVar1,&local_58,4,iVar4);
        (**(code **)(*param_3 + 0x78))(param_3,local_58);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_58,6);
  return;
}

