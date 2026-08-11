/* Ghidra address: 015d3c60 */
/* Ghidra symbol: FUN_015d3c60 */


char FUN_015d3c60(longlong param_1,undefined4 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188 [5];
  undefined8 local_15a;
  undefined8 local_f8 [5];
  undefined8 local_ca;
  int local_68;
  bool local_61;
  int local_60;
  int local_5c;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  char local_29;
  
  local_190 = 0;
  local_198 = 0;
  puVar5 = local_188;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_f8;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_29 = '\0';
  if (*(char *)(param_3 + 0x256) != '\0') {
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_f8,param_2);
    FUN_015bf370(&local_38,local_ca,&DAT_015d40f4,&DAT_015d4104,1);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x28))();
    local_4c = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 200) + 0x18))
                  (*(longlong **)(param_1 + 200),&local_40,local_4c);
        cVar1 = FUN_015d4bc0(param_1,local_38,local_40);
        if (cVar1 != '\0') {
          local_29 = '\x01';
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x28))();
          local_50 = 0;
          if (-1 < iVar3 + -1) {
            do {
              (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x18))
                        (*(longlong **)(param_1 + 0xd0),&local_48,local_50);
              cVar1 = FUN_015d4bc0(param_1,local_38,local_48);
              if (cVar1 != '\0') {
                local_29 = '\0';
                goto LAB_015d4051;
              }
              local_50 = local_50 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        local_4c = local_4c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    goto LAB_015d4051;
  }
  FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_188,param_2);
  FUN_00414b50(&local_38,local_15a);
  if (local_38 != 0) {
    local_5c = 0;
    if (local_38 != 0) {
      local_5c = *(int *)(local_38 + -4);
    }
    if (*(short *)(local_38 + -2 + (longlong)local_5c * 2) == 0x5c) {
      local_61 = true;
    }
    else {
      local_60 = 0;
      if (local_38 != 0) {
        local_60 = *(int *)(local_38 + -4);
      }
      local_61 = *(short *)(local_38 + -2 + (longlong)local_60 * 2) == 0x2f;
    }
    if (local_61 != false) {
      local_68 = 0;
      if (local_38 != 0) {
        local_68 = *(int *)(local_38 + -4);
      }
      FUN_00416dc0(&local_38,local_38,1,local_68 + -1);
    }
  }
  FUN_00416830(&local_40,param_3 + 0x41,0x104);
  cVar1 = FUN_015d4bc0(param_1,local_38,local_40);
  if (cVar1 == '\0') {
    FUN_015bf370(&local_198,local_38,&DAT_015d40f4,&DAT_015d4104,1);
    FUN_015bf710(&local_190,local_198);
    cVar1 = FUN_015d4bc0(param_1,local_190,local_40);
    if (cVar1 != '\0') goto LAB_015d4013;
    local_29 = '\0';
  }
  else {
LAB_015d4013:
    local_29 = '\x01';
  }
  if ((local_29 != '\0') &&
     (cVar1 = FUN_015d4bc0(param_1,local_38,*(undefined8 *)(param_3 + 0x24e)), cVar1 != '\0')) {
    local_29 = '\0';
  }
LAB_015d4051:
  FUN_00414560(&local_198,2);
  FUN_00417840(local_188,&DAT_015b9418,2);
  FUN_00414560(&local_48,3);
  return local_29;
}

