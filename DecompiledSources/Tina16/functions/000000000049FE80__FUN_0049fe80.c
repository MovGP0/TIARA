/* Ghidra address: 0049fe80 */
/* Ghidra symbol: FUN_0049fe80 */


void FUN_0049fe80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_a8 [36];
  int local_84;
  undefined1 *local_80;
  undefined8 local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_34;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  
  local_80 = auStack_a8;
  FUN_00417580(&local_50,&DAT_004990d8);
  local_28 = FUN_0049fc40(param_1,param_3);
  if (local_28 == 0) {
    FUN_0049fdc0(auStack_a8);
  }
  FUN_0049ed40(local_28,param_2);
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  local_84 = iVar1 + -1;
  local_34 = 0;
  if (-1 < local_84) {
    do {
      local_84 = iVar1;
      local_60 = *(longlong *)(param_1 + 8);
      if (*(uint *)(local_60 + 0x10) <= local_34) {
        FUN_00594f90();
      }
      local_30 = *(longlong *)(*(longlong *)(local_60 + 8) + (longlong)(int)local_34 * 8);
      if ((local_30 != local_28) && (*(longlong *)(local_30 + 8) != 0)) {
        if (DAT_02011620 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = DAT_02011620 + 0x10;
        }
        local_40 = FUN_004e5fc0(&PTR_FUN_0049ad90,1,lVar3);
        local_20 = (longlong *)FUN_004e6aa0(*(undefined8 *)(local_30 + 8));
        while (cVar2 = thunk_FUN_004e7393(local_20), cVar2 != '\0') {
          FUN_004e7230(local_20,&local_50);
          cVar2 = FUN_00411580(local_48,param_2);
          if ((cVar2 == '\0') || (lVar3 = FUN_0049fc40(param_1,local_48), lVar3 != local_28)) {
            FUN_004e6500(local_40,local_50,local_48);
          }
          else {
            FUN_0049f1b0(local_28,local_48);
          }
        }
        if (local_20 != (longlong *)0x0) {
          (**(code **)(*local_20 + -0x20))(local_20,1);
        }
        local_68 = (undefined8 *)(local_30 + 8);
        local_70 = *local_68;
        *local_68 = 0;
        FUN_00410f20(local_70);
        *(undefined8 *)(local_30 + 8) = local_40;
      }
      local_34 = local_34 + 1;
      local_84 = local_84 + -1;
      iVar1 = local_84;
    } while (local_84 != 0);
  }
  FUN_00417740(&local_50,&DAT_004990d8);
  return;
}

