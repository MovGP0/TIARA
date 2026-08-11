/* Ghidra address: 01437880 */
/* Ghidra symbol: FUN_01437880 */


void FUN_01437880(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  if (*(int *)(param_1 + 0x718) < 1000) {
    lVar2 = *(longlong *)(param_1 + 0x6b0);
    if (*(int *)(param_1 + 0x718) == 0) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),local_30);
      FUN_0043f750(&local_38,*(int *)(param_1 + 0x718) + 1);
      FUN_00416ba0(local_20,local_30[0],local_38);
      iVar1 = *(int *)(param_1 + 0x718);
      (&DAT_0210c580)[iVar1] = 0x3ff0000000000000;
      uVar3 = FUN_014313c0(&PTR_FUN_0142bf08,0x3ff0000000000001,&DAT_0210c580 + iVar1,0);
      FUN_00b0ab70(lVar2,local_20[0],uVar3);
    }
    else {
      FUN_00848a70(lVar2,*(int *)(lVar2 + 0x4e0) + 1);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_40);
      FUN_0043f750(&local_48,*(int *)(param_1 + 0x718) + 1);
      FUN_00416ba0(local_20,local_40,local_48);
      iVar1 = *(int *)(param_1 + 0x718);
      (&DAT_0210c580)[iVar1] = (double)(&DAT_0210c580)[iVar1 + -1] * 1.2;
      uVar3 = FUN_014313c0(&PTR_FUN_0142bf08,&DAT_0210c501,&DAT_0210c580 + iVar1,0);
      FUN_00b0ab70(lVar2,local_20[0],uVar3);
    }
    *(int *)(param_1 + 0x718) = *(int *)(param_1 + 0x718) + 1;
  }
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

