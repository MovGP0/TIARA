/* Ghidra address: 0095bfe0 */
/* Ghidra symbol: FUN_0095bfe0 */


void FUN_0095bfe0(longlong param_1,longlong *param_2,char param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_50;
  char local_45;
  int local_44;
  undefined1 local_40 [15];
  undefined1 local_31;
  longlong *local_30;
  byte local_21;
  undefined8 local_20;
  
  local_60 = auStack_98;
  local_68 = 0;
  local_50 = 0;
  *param_5 = 1;
  *param_4 = 1;
  if (param_3 == '\0') {
    local_45 = '\0';
    local_44 = 0;
    local_60 = auStack_98;
    while( true ) {
      puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
      iVar3 = (**(code **)*puVar4)(puVar4);
      if (iVar3 <= local_44) break;
      plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
      local_30 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_44);
      cVar2 = (**(code **)(*local_30 + 0x168))(local_30);
      if (cVar2 == '\x05') {
        local_45 = '\x01';
        (**(code **)(*local_30 + 0xe8))(local_30,&local_68);
        uVar6 = FUN_00414520(&local_50);
        local_78 = local_40;
        local_21 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x38))
                             (*(longlong **)(param_1 + 0xc0),local_68,uVar6,&local_31);
        if (local_21 != 0) {
          if (local_21 < 0xa0) {
            bVar7 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_21 >> 3] >> (local_21 & 7) & 1
                    ) != 0;
          }
          else {
            bVar7 = false;
          }
          if (!bVar7) {
            *param_4 = 0;
          }
          cVar2 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x70))
                            (*(longlong **)(param_1 + 0xc0),local_21,0,local_30);
          if (cVar2 == '\0') {
            *param_5 = 0;
            puVar1 = local_60;
            goto LAB_0095c37f;
          }
        }
        local_20 = FUN_00958f40(*(undefined8 *)(param_1 + 0xc0),local_50);
        (**(code **)(*param_2 + 0x2a8))(param_2,local_20,local_30);
        FUN_00410f20(local_30);
        local_44 = local_44 + -1;
        FUN_00410f20(local_20);
      }
      local_44 = local_44 + 1;
    }
    puVar1 = local_60;
    if (local_45 != '\0') {
      (**(code **)(*param_2 + 0x298))(param_2);
      puVar1 = local_60;
    }
  }
  else {
    puVar1 = auStack_98;
    if (param_3 == '\x01') {
      puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
      iVar3 = (**(code **)*puVar4)();
      local_44 = 0;
      puVar1 = local_60;
      if (-1 < iVar3 + -1) {
        do {
          plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
          local_30 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_44);
          cVar2 = (**(code **)(*local_30 + 0x168))(local_30);
          if (cVar2 == '\x05') {
            uVar6 = FUN_004113f0(local_30,&PTR_FUN_0090d088);
            local_21 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))
                                 (*(longlong **)(param_1 + 0xc0),uVar6);
            if (local_21 != 0) {
              if (local_21 < 0xa0) {
                bVar7 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_21 >> 3] >> (local_21 & 7)
                        & 1) != 0;
              }
              else {
                bVar7 = false;
              }
              if (!bVar7) {
                *param_4 = 0;
              }
              cVar2 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x70))
                                (*(longlong **)(param_1 + 0xc0),local_21,0,local_30);
              if (cVar2 == '\0') {
                *param_5 = 0;
                puVar1 = local_60;
                break;
              }
            }
          }
          local_44 = local_44 + 1;
          iVar3 = iVar3 + -1;
          puVar1 = local_60;
        } while (iVar3 != 0);
      }
    }
  }
LAB_0095c37f:
  local_60 = puVar1;
  FUN_00414520(&local_68);
  FUN_00414520(&local_50);
  return;
}

