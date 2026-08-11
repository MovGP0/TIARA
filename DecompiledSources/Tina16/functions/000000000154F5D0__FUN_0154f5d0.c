/* Ghidra address: 0154f5d0 */
/* Ghidra symbol: FUN_0154f5d0 */


void FUN_0154f5d0(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  if (param_3 == 0) {
    lVar3 = FUN_01571ef0(*(undefined8 *)(param_1 + 0x750),*(undefined4 *)(param_2 + 0x30));
    if (lVar3 != 0) {
      cVar1 = FUN_015715c0(lVar3);
      if (cVar1 != '\0') {
        FUN_01d43440(&local_40,*(undefined4 *)(param_2 + 0x30));
        FUN_00416ba0(local_20,*(undefined8 *)PTR_PTR_020056d8,local_40);
        cVar1 = FUN_0154f5b0(param_1);
        if (cVar1 != '\0') {
          FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),*(undefined4 *)(param_2 + 0x30),&local_38);
          *(undefined1 *)(local_38 + 0x3a) = 1;
          FUN_01575810(*(undefined8 *)(param_1 + 0x8d0),*(undefined4 *)(param_2 + 0x30),local_20[0])
          ;
        }
        FUN_00414b50(&local_30,*(undefined8 *)PTR_PTR_02001278);
        if (*(longlong *)(param_1 + 0x938) != 0) {
          FUN_00e0f210(*(longlong *)(param_1 + 0x938),*(undefined4 *)(param_2 + 0x30),&local_30);
        }
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb0))
                          (*(longlong **)(param_1 + 0x38),local_20[0]);
        if (iVar2 == -1) {
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
                    (*(longlong **)(param_1 + 0x38),local_20[0]);
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x78))
                    (*(longlong **)(param_1 + 0x40),local_30);
          iVar2 = FUN_015715e0(lVar3);
          if (iVar2 == 1) {
            FUN_01550c40(param_1,&local_48,param_2);
            FUN_00416cd0(&local_28,5,&DAT_0154f8ac,local_20[0],L" <= ",local_48,&LAB_0154f8d4);
          }
          else {
            FUN_01550c40(param_1,&local_50,param_2);
            FUN_00416cd0(&local_28,5,&DAT_0154f8ac,local_50,L" <= ",local_20[0],&LAB_0154f8d4);
          }
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0x78))
                    (*(longlong **)(param_1 + 0x50),local_28);
        }
        FUN_00414ad0(param_2 + 0x28,local_20[0]);
      }
    }
  }
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_30,3);
  return;
}

