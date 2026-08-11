/* Ghidra address: 01bb4930 */
/* Ghidra symbol: FUN_01bb4930 */


void FUN_01bb4930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_004b3cf0(param_3,local_30,param_4);
  FUN_004b5390(param_3,&local_38,param_4);
  cVar1 = FUN_01bb48b0(param_1,local_res10[0],&local_48,&local_40);
  if (cVar1 != '\0') {
    lVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    FUN_01bb4370(local_48,local_40,lVar4);
    iVar2 = FUN_00416db0(local_30[0],L"Reference");
    if (iVar2 == 0) {
      iVar2 = *(int *)(lVar4 + 0x10);
      iVar5 = 0;
      if (-1 < iVar2 + -1) {
        do {
          local_40 = FUN_004aeac0(lVar4,iVar5);
          FUN_00414ad0(local_40 + 0x98,local_38);
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      iVar2 = FUN_00416db0(local_30[0],L"Package");
      if (iVar2 == 0) {
        iVar2 = *(int *)(lVar4 + 0x10);
        iVar5 = 0;
        if (-1 < iVar2 + -1) {
          do {
            local_40 = FUN_004aeac0(lVar4,iVar5);
            iVar3 = FUN_004170c0(&DAT_01bb4c60,*(undefined8 *)(local_40 + 0x180),1);
            FUN_00416e20(local_40 + 0x180,1,iVar3 + -1);
            FUN_00ea9ca0(&local_50,local_38);
            FUN_00416cd0(local_40 + 0x180,3,local_50,&DAT_01bb4c70,*(undefined8 *)(local_40 + 0x180)
                        );
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        iVar2 = FUN_00416db0(local_30[0],L"Pinswap");
        if (iVar2 == 0) {
          FUN_00416ad0(&local_38,&DAT_01bb4c9c);
          iVar2 = *(int *)(lVar4 + 0x10);
          iVar5 = 0;
          if (-1 < iVar2 + -1) {
            do {
              local_40 = FUN_004aeac0(lVar4,iVar5);
              iVar3 = (**(code **)(**(longlong **)(local_40 + 0x4f8) + 0xb0))
                                (*(longlong **)(local_40 + 0x4f8),local_38);
              if (iVar3 == -1) {
                (**(code **)(**(longlong **)(local_40 + 0x4f8) + 0x78))
                          (*(longlong **)(local_40 + 0x4f8),local_38);
              }
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        else {
          iVar2 = FUN_00416db0(local_30[0],L"Gateswap");
          if (iVar2 == 0) {
            FUN_01bb43e0(local_48,local_40,local_38);
          }
        }
      }
    }
    FUN_00410f20(lVar4);
  }
  FUN_00414480(&local_50);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res10);
  return;
}

