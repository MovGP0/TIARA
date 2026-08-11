/* Ghidra address: 017ccbd0 */
/* Ghidra symbol: FUN_017ccbd0 */


/* WARNING: Removing unreachable block (ram,0x017ccd8b) */

void FUN_017ccbd0(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong *local_88;
  char local_7d;
  int local_7c;
  int local_78;
  uint local_74;
  longlong local_70;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  if (param_4 == 0) {
    local_7c = 0;
  }
  else {
    local_7c = *(int *)(*(longlong *)(param_4 + 0x1a8) + 100);
  }
  iVar6 = *(int *)(param_1 + 0x10);
  local_78 = 0;
  local_90 = param_1;
  local_88 = param_2;
  local_7d = param_3;
  local_70 = param_4;
  if (-1 < iVar6 + -1) {
    do {
      plVar5 = (longlong *)FUN_0198d420(local_90,local_78);
      cVar1 = FUN_0198a580(plVar5);
      if (cVar1 == '\x03') {
        local_64 = 2;
        (**(code **)(*plVar5 + 0x288))(plVar5,local_40);
        FUN_0043ea00(&local_30,local_40[0]);
        iVar3 = (**(code **)(*plVar5 + 0x210))(plVar5,0);
        if (((local_30 != 0) && (local_7c <= iVar3)) &&
           ((iVar4 = (**(code **)(*local_88 + 0x28))(local_88), iVar3 < iVar4 &&
            (iVar4 = (**(code **)(*local_88 + 0x30))(local_88,iVar3), iVar4 < local_64)))) {
          FUN_017ccb20(auStack_b8,&local_48,local_30);
          (**(code **)(*local_88 + 0x40))(local_88,iVar3,local_48);
          (**(code **)(*local_88 + 0x48))(local_88,iVar3,(longlong)local_64);
        }
      }
      else {
        cVar1 = FUN_0198a580(plVar5);
        if (cVar1 == '\x04') {
          uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          local_74 = (uint)uVar2;
          if ((local_7d == '\0') && (local_74 == 4)) {
            local_64 = 1;
            (**(code **)(*plVar5 + 0x288))(plVar5,&local_50);
            FUN_0043ea00(&local_30,local_50);
            iVar3 = (**(code **)(*plVar5 + 0x210))(plVar5,0);
            if (((local_30 != 0) &&
                ((-1 < iVar3 && (iVar4 = (**(code **)(*local_88 + 0x28))(local_88), iVar3 < iVar4)))
                ) && (iVar4 = (**(code **)(*local_88 + 0x30))(local_88,iVar3), iVar4 < local_64)) {
              FUN_017ccb20(auStack_b8,&local_58,local_30);
              (**(code **)(*local_88 + 0x40))(local_88,iVar3,local_58);
              (**(code **)(*local_88 + 0x48))(local_88,iVar3,(longlong)local_64);
            }
          }
          if (((local_74 == 0x39) && (*(char *)(plVar5[0x35] + 0x70) == '\x01')) &&
             (*(longlong *)(plVar5[0x35] + 8) != 0)) {
            FUN_017ccbd0(*(undefined8 *)(plVar5[0x35] + 8),local_88,local_7d,plVar5);
          }
        }
        else {
          cVar1 = FUN_0198a580(plVar5);
          if (cVar1 == '\x05') {
            local_64 = 3;
            FUN_004169a0(&local_60,plVar5 + 0x5b);
            FUN_0043ea00(&local_30,local_60);
            iVar3 = (**(code **)(*plVar5 + 0x210))(plVar5,0);
            if ((((local_30 != 0) && (local_7c <= iVar3)) &&
                (iVar4 = (**(code **)(*local_88 + 0x28))(local_88), iVar3 < iVar4)) &&
               (iVar4 = (**(code **)(*local_88 + 0x30))(local_88,iVar3), iVar4 < local_64)) {
              (**(code **)(*local_88 + 0x40))(local_88,iVar3,local_30);
              (**(code **)(*local_88 + 0x48))(local_88,iVar3,(longlong)local_64);
            }
          }
        }
      }
      local_78 = local_78 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_60,5);
  FUN_00414480(&local_30);
  return;
}

