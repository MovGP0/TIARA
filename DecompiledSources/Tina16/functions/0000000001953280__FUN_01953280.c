/* Ghidra address: 01953280 */
/* Ghidra symbol: FUN_01953280 */


void FUN_01953280(longlong *param_1,undefined1 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  int local_94;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  longlong *local_30;
  
  local_80 = 0;
  local_88 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_a0 = param_1;
  iVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))((longlong *)param_1[0x10]);
  if (iVar2 != 0) {
    local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b67b0(local_30,1);
    *(undefined1 *)((longlong)local_30 + 0x49) = 1;
    iVar2 = (**(code **)(*(longlong *)local_a0[0x10] + 0x30))();
    local_94 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar3 = (longlong *)
                 (**(code **)(*(longlong *)local_a0[0x10] + 0x20))
                           ((longlong *)local_a0[0x10],local_94);
        cVar1 = FUN_01953220(auStack_c8,plVar3);
        if (cVar1 != '\0') {
          (**(code **)(*plVar3 + 0x178))(plVar3,param_3);
          if ((double)plVar3[0x13] < 0.0) {
            local_90 = plVar3[0x13] ^ 0x8000000000000000;
            local_78 = &local_90;
            local_70 = 3;
            FUN_00442f70(&local_88,L"%9.2f",&local_78,0);
            FUN_00416ba0(&local_80,&DAT_019537c4,local_88);
            (**(code **)(*local_30 + 0x80))(local_30,local_80,plVar3);
          }
          else {
            local_78 = (ulonglong *)(plVar3 + 0x13);
            local_70 = 3;
            FUN_00442f70(&local_68,L"%9.2f",&local_78,0);
            FUN_00416ba0(local_60,&DAT_0195379c,local_68);
            (**(code **)(*local_30 + 0x80))(local_30,local_60[0],plVar3);
          }
        }
        local_94 = local_94 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    (**(code **)(*local_a0 + 0x210))(local_a0,&local_50);
    iVar2 = (**(code **)(*local_30 + 0x28))();
    local_94 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar4 = (**(code **)(*local_30 + 0x30))(local_30,local_94);
        uVar5 = FUN_01953220(auStack_c8,lVar4);
        if ((char)uVar5 != '\0') {
          if (*(byte *)(lVar4 + 0x1a0) < 8) {
            bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) <<
                     (*(byte *)(lVar4 + 0x1a0) & 0x1f) & 0x12U) != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            FUN_01952fd0(auStack_c8,lVar4,local_94,1);
          }
        }
        local_94 = local_94 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_94 = (**(code **)(*local_30 + 0x28))(local_30);
    local_94 = local_94 + -1;
    if (-1 < local_94) {
      do {
        lVar4 = (**(code **)(*local_30 + 0x30))(local_30,local_94);
        uVar5 = FUN_01953220(auStack_c8,lVar4);
        if ((char)uVar5 != '\0') {
          if (*(byte *)(lVar4 + 0x1a0) < 8) {
            bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) <<
                     (*(byte *)(lVar4 + 0x1a0) & 0x1f) & 0x14U) != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            FUN_01952fd0(auStack_c8,lVar4,local_94,0xffffffff);
          }
        }
        local_94 = local_94 + -1;
      } while (local_94 != -1);
    }
    iVar2 = (**(code **)(*(longlong *)local_a0[0x10] + 0x30))();
    local_94 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar3 = (longlong *)
                 (**(code **)(*(longlong *)local_a0[0x10] + 0x20))
                           ((longlong *)local_a0[0x10],local_94);
        cVar1 = FUN_01953220(auStack_c8,plVar3);
        if (cVar1 != '\0') {
          cVar1 = (char)plVar3[0x34];
          if (cVar1 == '\x03') {
            (**(code **)(*plVar3 + 200))(plVar3,(local_40 - (double)plVar3[0x15]) / 2.0);
          }
          else if (cVar1 == '\x05') {
            (**(code **)(*plVar3 + 0xd0))(plVar3,local_38 - (double)plVar3[0x16]);
          }
          else if (cVar1 == '\x06') {
            (**(code **)(*plVar3 + 200))(plVar3,local_50);
            (**(code **)(*plVar3 + 0xd0))(plVar3,local_48);
            (**(code **)(*plVar3 + 0xd8))(plVar3,local_40);
            (**(code **)(*plVar3 + 0xe0))(plVar3,local_38);
          }
          (**(code **)(*plVar3 + 0x198))(plVar3,param_2,param_3);
        }
        local_94 = local_94 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(local_30);
  }
  FUN_00414560(&local_88,2);
  FUN_00414560(&local_68,2);
  return;
}

