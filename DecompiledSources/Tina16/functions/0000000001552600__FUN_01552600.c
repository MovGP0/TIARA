/* Ghidra address: 01552600 */
/* Ghidra symbol: FUN_01552600 */


undefined8
FUN_01552600(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined2 param_5,
            byte *param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res20;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  byte local_21;
  undefined8 local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  *(undefined4 *)(param_1 + 0x16c) = 0;
  FUN_00414480(&local_20);
  *param_6 = 0;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x28) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_01571ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x28),iVar4);
      *(undefined8 *)(param_1 + 0x180) = uVar2;
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30);
      FUN_01571790(*(undefined8 *)(param_1 + 0x180),&local_30);
      FUN_00414b50(param_1 + 0x218,local_30);
      lVar3 = FUN_01571ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x750),
                           *(undefined4 *)(param_1 + 0x168));
      *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x28) = lVar3;
      if ((lVar3 != 0) && (FUN_01550b90(*(undefined8 *)(param_1 + 0x270),&local_38), local_38 != 0))
      {
        FUN_01550c40(*(undefined8 *)(param_1 + 0x270),&local_40,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x28));
        FUN_00414b50(param_1 + 0x218,local_40);
      }
      if (*(int *)(*(longlong *)(param_1 + 0x180) + 0x54) == 1) {
        FUN_01601c40(&local_48,*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),iVar4,
                     *(undefined8 *)(param_1 + 0x218),&local_21);
        FUN_00414b50(param_1 + 0x218,local_48);
        *param_6 = *param_6 | local_21;
        if ((*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x28) == 0) ||
           (cVar1 = FUN_0154f5b0(*(undefined8 *)(param_1 + 0x270)), cVar1 == '\0')) {
          FUN_00416ad0(&local_20,*(undefined8 *)(param_1 + 0x218));
        }
        else {
          FUN_00416ad0(&local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28));
        }
        *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
        if ((param_3 == 0) && (*(int *)(param_1 + 0x16c) <= *(int *)(param_1 + 0x164))) {
          FUN_00416ad0(&local_20,&DAT_01552a28);
          FUN_00416780(&local_50,param_5);
          puVar6 = &DAT_01552a4c;
          puVar7 = &DAT_01552a28;
          uVar2 = local_50;
          FUN_00416cd0(&local_20,6,local_20,&DAT_01552a38,&DAT_01552a4c,local_50,&DAT_01552a4c,
                       &DAT_01552a28);
          if (*(int *)(param_1 + 0x16c) < *(int *)(param_1 + 0x164)) {
            FUN_00416cd0(&local_20,3,local_20,local_res20,&DAT_01552a28,uVar2,puVar6,puVar7);
          }
        }
        if ((param_3 == 1) && (*(int *)(param_1 + 0x16c) < *(int *)(param_1 + 0x164))) {
          FUN_00416ad0(&local_20,&DAT_01552a28);
          FUN_00416cd0(&local_20,3,local_20,local_res20,&DAT_01552a28);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414ad0(param_2,local_20);
  FUN_00414560(&local_50,5);
  FUN_00414480(&local_20);
  FUN_00414480(&local_res20);
  return param_2;
}

