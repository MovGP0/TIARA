/* Ghidra address: 0095bbd0 */
/* Ghidra symbol: FUN_0095bbd0 */


byte FUN_0095bbd0(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  char local_26;
  byte local_25;
  int local_24;
  undefined1 local_20 [7];
  byte local_19;
  
  local_40 = auStack_88;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_19 = 1;
  (**(code **)(*(longlong *)param_1[2] + 0x90))((longlong *)param_1[2]);
  (**(code **)(*(longlong *)param_1[3] + 0x90))((longlong *)param_1[3]);
  if (*(char *)(param_1[1] + 0x21) != '\x06') {
    (**(code **)(*param_1 + 0xa8))(param_1,1);
    local_19 = *(char *)(param_1[1] + 0x21) != '\x04';
  }
  if (*(char *)(param_1[1] + 0x21) == '\a') {
    cVar1 = (**(code **)(*param_1 + 0x70))(param_1,1,0,param_1[4]);
  }
  else {
    (**(code **)(*param_1 + 0x88))(param_1,&local_25,&local_26);
    local_19 = local_19 & local_25;
    cVar1 = local_26;
  }
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*(longlong *)param_1[4] + 0x2f8))((longlong *)param_1[4]);
    if (lVar3 == 0) {
      local_19 = 0;
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1,0x5f,0,param_1[4]);
      if (cVar1 != '\0') goto code_r0x0095bf10;
    }
    else {
      lVar3 = (**(code **)(*(longlong *)param_1[4] + 0x2f0))((longlong *)param_1[4]);
      if (lVar3 != 0) {
        plVar4 = (longlong *)(**(code **)(*(longlong *)param_1[4] + 0x2f0))((longlong *)param_1[4]);
        (**(code **)(*plVar4 + 0x2c0))(plVar4,&local_48);
        plVar4 = (longlong *)(**(code **)(*(longlong *)param_1[4] + 0x2f8))((longlong *)param_1[4]);
        (**(code **)(*plVar4 + 0xe8))(plVar4,&local_50);
        iVar2 = FUN_00416420(local_48,local_50);
        if (iVar2 != 0) {
          local_19 = 0;
          uVar5 = (**(code **)(*(longlong *)param_1[4] + 0x2f8))((longlong *)param_1[4]);
          cVar1 = (**(code **)(*param_1 + 0x70))(param_1,0x31,0,uVar5);
          if (cVar1 == '\0') goto LAB_0095bf46;
        }
      }
      uVar5 = (**(code **)(*(longlong *)param_1[4] + 0x2f8))((longlong *)param_1[4]);
      local_68 = &local_26;
      (**(code **)(*param_1 + 0xa0))(param_1,uVar5,param_2,&local_25);
      local_19 = local_19 & local_25;
      if (local_26 != '\0') {
        iVar2 = (**(code **)(*(longlong *)param_1[3] + 0x38))();
        local_24 = 0;
        if (-1 < iVar2 + -1) {
          do {
            (**(code **)(*(longlong *)param_1[3] + 0x28))((longlong *)param_1[3],&local_58,local_24)
            ;
            cVar1 = (**(code **)(*(longlong *)param_1[2] + 0xb0))
                              ((longlong *)param_1[2],local_58,local_20);
            if (cVar1 == '\0') {
              local_19 = 0;
              uVar5 = (**(code **)(*(longlong *)param_1[3] + 0x40))((longlong *)param_1[3],local_24)
              ;
              uVar5 = FUN_004113f0(uVar5,&PTR_FUN_00909bd0);
              cVar1 = (**(code **)(*param_1 + 0x70))(param_1,0x26,0,uVar5);
              if (cVar1 == '\0') goto LAB_0095bf46;
            }
            local_24 = local_24 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
code_r0x0095bf10:
        if (local_19 == 0) {
          (**(code **)(*(longlong *)param_1[2] + 0x90))((longlong *)param_1[2]);
          (**(code **)(*(longlong *)param_1[3] + 0x90))((longlong *)param_1[3]);
        }
        goto LAB_0095bf54;
      }
    }
  }
LAB_0095bf46:
  FUN_0095bf70(0,local_40);
LAB_0095bf54:
  FUN_004145c0(&local_58,3);
  return local_19;
}

