/* Ghidra address: 018a9580 */
/* Ghidra symbol: FUN_018a9580 */


void FUN_018a9580(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  int local_4c;
  longlong local_48;
  int local_3c;
  int local_2c;
  
  local_2c = 0;
  local_60 = param_2;
  iVar1 = FUN_004b2060();
  local_4c = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (0 < local_4c) {
        lVar4 = FUN_018b0ad0(*(undefined8 *)(param_1 + 0x578),local_4c);
        (**(code **)(*local_60 + 0x130))(local_60,*(undefined8 *)(lVar4 + 0x38));
      }
      lVar4 = FUN_018b0ad0(*(undefined8 *)(param_1 + 0x578),local_4c);
      local_58 = *(undefined8 **)(lVar4 + 0x38);
      iVar2 = (**(code **)*local_58)();
      local_3c = 0;
      if (-1 < iVar2 + -1) {
        do {
          local_48 = (**(code **)(*local_60 + 8))(local_60,local_3c + local_2c);
          iVar3 = (**(code **)(**(longlong **)(local_48 + 0x80) + 0x30))();
          iVar6 = 0;
          if (-1 < iVar3 + -1) {
            do {
              uVar5 = (**(code **)(**(longlong **)(local_48 + 0x80) + 0x20))
                                (*(longlong **)(local_48 + 0x80),iVar6);
              FUN_018a93f0(auStack_88,uVar5);
              iVar6 = iVar6 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(*local_60 + 0x108))(local_60,local_3c + local_2c,local_48);
          local_3c = local_3c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (**(code **)*local_58)(local_58);
      local_2c = local_2c + iVar2;
      local_4c = local_4c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

