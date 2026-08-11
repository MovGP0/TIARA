/* Ghidra address: 016bb7d0 */
/* Ghidra symbol: FUN_016bb7d0 */


longlong * FUN_016bb7d0(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  char local_9;
  
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  cVar2 = FUN_016bb790(param_1);
  if (cVar2 == '\0') {
    do {
      FUN_016bb340(param_1,param_2,&local_9);
      FUN_016b9120(local_20,*param_2);
      FUN_00414bf0(param_2,local_20[0]);
      FUN_00416880(&local_30,*param_2);
      FUN_0043eb50(&local_28,local_30);
      FUN_00415dd0(param_2,local_28,0);
      iVar3 = 0;
      if (*param_2 != 0) {
        iVar3 = *(int *)(*param_2 + -4);
      }
      if ((4000 < iVar3) && (*(char *)*param_2 != '*')) {
        local_38[0] = 0;
        FUN_016a4020(*(undefined8 *)(param_1 + 0x10),4,local_38,0xffffffff);
      }
      FUN_00416880(&local_40,*param_2);
      iVar3 = FUN_004170c0(&DAT_016bbb4c,local_40,1);
      if (0 < iVar3) {
        FUN_00416880(&local_48,*param_2);
        uVar4 = FUN_004170c0(&DAT_016bbb4c,local_48,1);
        uVar5 = 0;
        if (*param_2 != 0) {
          uVar5 = *(undefined4 *)(*param_2 + -4);
        }
        FUN_00415b50(param_2,uVar4,uVar5);
      }
      FUN_00416880(&local_58,*param_2);
      FUN_0043e130(&local_50,local_58);
      FUN_00415dd0(param_2,local_50,0);
      FUN_016b9200(&local_68,*param_2);
      FUN_00416880(&local_70,local_68);
      FUN_0043eb50(&local_60,local_70);
      FUN_00415dd0(param_2,local_60,0);
      if (param_3 != '\0') {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x244);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x240);
        *piVar1 = *piVar1 + 1;
      }
      if ((*param_2 != 0) && (*(char *)*param_2 != '*')) {
        FUN_016b8f10(&local_78,*param_2);
        if (local_78 != 0) break;
      }
    } while (local_9 == '\0');
    if ((*param_2 != 0) && (*(char *)*param_2 == '*')) {
      FUN_004144d0(param_2);
    }
  }
  else {
    FUN_004144d0(param_2);
  }
  FUN_004144d0(&local_78);
  FUN_00414480(&local_70);
  FUN_004144d0(&local_68);
  FUN_00414560(&local_60,5);
  FUN_00414560(&local_30,2);
  FUN_004144d0(local_20);
  return param_2;
}

