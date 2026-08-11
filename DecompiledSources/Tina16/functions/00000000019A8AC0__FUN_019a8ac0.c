/* Ghidra address: 019a8ac0 */
/* Ghidra symbol: FUN_019a8ac0 */


void FUN_019a8ac0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  int local_34;
  undefined8 local_30;
  
  local_30 = 0;
  local_50 = param_2;
  local_48 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(local_48,1);
  FUN_004b6d10(local_48,1);
  *(undefined1 *)((longlong)local_48 + 0x49) = 0;
  iVar6 = *(int *)(local_50 + 0x10);
  local_34 = 0;
  if (-1 < iVar6 + -1) {
    do {
      local_40 = (longlong *)FUN_00b94e60(local_50,local_34);
      if ((((*PTR_DAT_02001ab0 != '\0') && (cVar2 = FUN_0198a580(local_40), cVar2 == '\x04')) &&
          (sVar3 = (**(code **)(*local_40 + 0xf8))(local_40), sVar3 == 0x39)) &&
         (((char)local_40[0x34] == '\x01' && (*(longlong *)(local_40[0x35] + 8) != 0)))) {
        iVar4 = (**(code **)(*local_40 + 0x1c8))();
        iVar5 = 0;
        if (-1 < iVar4 + -1) {
          do {
            (**(code **)(*local_40 + 0x298))(local_40,&local_30,iVar5);
            (**(code **)(*local_48 + 0x78))(local_48,local_30);
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        plVar1 = local_40;
        FUN_019a8810(auStack_78,local_48,*(undefined8 *)(local_40[0x35] + 8));
        FUN_019a8ac0(param_1,*(undefined8 *)(plVar1[0x35] + 8));
      }
      local_34 = local_34 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00410f20(local_48);
  FUN_00414480(&local_30);
  return;
}

