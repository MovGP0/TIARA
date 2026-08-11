/* Ghidra address: 010798b0 */
/* Ghidra symbol: FUN_010798b0 */


longlong * FUN_010798b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  int local_84;
  int local_80;
  int local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40 = 0;
  local_30 = 0;
  local_a0 = param_1;
  local_98 = param_2;
  local_68 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_70 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414b50(&local_30,L"main.c");
  iVar5 = *(int *)(*(longlong *)(local_98 + 0x18) + 0x10);
  local_84 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_90 = FUN_004aeac0(*(undefined8 *)(local_98 + 0x18),local_84);
      if (((*(char *)(local_a0 + 0xb58) == '\0') ||
          (cVar2 = FUN_01079780(auStack_c8,*(undefined8 *)(local_90 + 0x30)), cVar2 == '\0')) &&
         (*(char *)(local_a0 + 0xb58) != '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_010795c0(auStack_c8,local_50,*(undefined8 *)(local_90 + 0x30));
        FUN_00414b50(&local_40,local_50[0]);
        iVar3 = (**(code **)(*local_70 + 0xb0))(local_70,local_40);
        if (iVar3 == -1) {
          (**(code **)(*local_70 + 0x80))(local_70,local_40,local_90);
        }
      }
      local_84 = local_84 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)(*local_70 + 0x148))(local_70);
  cVar2 = FUN_0160ef50(local_70,&local_34);
  if (cVar2 != '\0') {
    (**(code **)(*local_70 + 0xa0))(local_70,0,local_34);
  }
  iVar5 = (**(code **)(*local_70 + 0x28))();
  local_84 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_90 = (**(code **)(*local_70 + 0x30))(local_70,local_84);
      FUN_010795c0(auStack_c8,&local_58,*(undefined8 *)(local_90 + 0x30));
      FUN_00414b50(&local_40,local_58);
      if ((*(char *)(local_a0 + 0xb52) == '\0') ||
         (iVar3 = FUN_010b0750(local_98,local_40), iVar3 == 1)) {
        local_80 = FUN_01079540(auStack_c8,local_40);
        bVar1 = false;
        iVar3 = (**(code **)(*local_68 + 0x28))();
        local_7c = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(*local_68 + 0x18))(local_68,&local_60,local_7c);
            iVar4 = FUN_01079540(auStack_c8,local_60);
            if ((local_80 <= iVar4) &&
               (iVar4 = (**(code **)(*local_68 + 0xb0))(local_68,local_40), iVar4 == -1)) {
              (**(code **)(*local_68 + 0x80))(local_68,local_40,local_90);
              bVar1 = true;
              break;
            }
            local_7c = local_7c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if ((!bVar1) && (iVar3 = (**(code **)(*local_68 + 0xb0))(local_68,local_40), iVar3 == -1)) {
          (**(code **)(*local_68 + 0x80))(local_68,local_40,local_90);
        }
      }
      local_84 = local_84 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(local_70);
  local_78 = local_68;
  FUN_00414560(&local_60,3);
  FUN_00414480(&local_40);
  FUN_00414480(&local_30);
  return local_78;
}

