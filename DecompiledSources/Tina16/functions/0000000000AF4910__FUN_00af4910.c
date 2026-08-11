/* Ghidra address: 00af4910 */
/* Ghidra symbol: FUN_00af4910 */


undefined1
FUN_00af4910(longlong param_1,undefined4 param_2,int param_3,int *param_4,int *param_5,
            undefined8 *param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  char *local_70;
  undefined4 local_68;
  int local_64;
  int *local_60;
  undefined1 local_51;
  undefined8 local_50 [2];
  undefined8 local_40;
  char local_37;
  undefined2 local_36;
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [16];
  
  local_50[0] = 0;
  local_40 = 0;
  *param_6 = 0;
  local_51 = 0;
  local_68 = param_2;
  local_64 = param_3;
  local_60 = param_4;
  FUN_00414480(param_6);
  plVar1 = *(longlong **)(param_1 + 0x8b0);
  local_37 = '\0';
  local_88 = local_24;
  local_80 = local_30;
  local_78 = local_2c;
  local_70 = &local_37;
  uVar3 = FUN_00a9bd50(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x490),local_68,
                       local_64 + *(int *)((longlong)plVar1 + 0x94));
  FUN_00afe5a0(param_1,uVar3);
  local_88 = local_34;
  (**(code **)(*plVar1 + 0x20))
            (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x490),
             *(undefined4 *)(param_1 + 0x8e8),local_28);
  if (local_37 != '\0') {
    *param_5 = *(int *)(param_1 + 0x8e8);
    *local_60 = *param_5 + -1;
    cVar2 = FUN_00a9bfa0(plVar1,*param_5,&local_36,local_20);
    if (cVar2 != '\0') {
      cVar2 = FUN_00af4890(auStack_a8,local_36);
      if (cVar2 != '\0') {
        FUN_00416780(param_6,local_36);
        local_51 = 1;
        *param_5 = *param_5 + 1;
        local_36 = FUN_00af48c0(auStack_a8,*param_5);
        while( true ) {
          cVar2 = FUN_00af4890(auStack_a8,local_36);
          if (cVar2 == '\0') break;
          FUN_00416780(&local_40,local_36);
          FUN_00416ad0(param_6,local_40);
          *param_5 = *param_5 + 1;
          local_36 = FUN_00af48c0(auStack_a8,*param_5);
        }
        if (-1 < *local_60) {
          local_36 = FUN_00af48c0(auStack_a8,*local_60);
          while (-1 < *local_60) {
            cVar2 = FUN_00af4890(auStack_a8,local_36);
            if (cVar2 == '\0') break;
            FUN_00416780(local_50,local_36);
            FUN_00416ea0(local_50[0],param_6,1);
            *local_60 = *local_60 + -1;
            if (-1 < *local_60) {
              local_36 = FUN_00af48c0(auStack_a8,*local_60);
            }
          }
        }
      }
    }
  }
  FUN_00414480(local_50);
  FUN_00414480(&local_40);
  return local_51;
}

