/* Ghidra address: 01b8aea0 */
/* Ghidra symbol: FUN_01b8aea0 */


int FUN_01b8aea0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_res10 [3];
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  local_68 = param_1;
  local_60 = param_3;
  FUN_00414610(param_2);
  local_54 = 0;
  if (0 < *(int *)(*(longlong *)(local_68 + 0x3b0) + 0x10)) {
    iVar6 = *(int *)(*(longlong *)(local_68 + 0x3a8) + 0x10);
    local_58 = 0;
    if (-1 < iVar6 + -1) {
      do {
        local_48 = FUN_004aeac0(*(undefined8 *)(local_68 + 0x3a8),local_58);
        lVar4 = FUN_004aeac0(*(undefined8 *)(local_68 + 0x3b0),local_58);
        iVar3 = FUN_00416db0(*(undefined8 *)(local_48 + 0x18),local_res10[0]);
        if (iVar3 == 0) {
          iVar3 = (**(code **)(**(longlong **)(local_48 + 8) + 0x1c8))(*(longlong **)(local_48 + 8))
          ;
          lVar1 = *(longlong *)(lVar4 + 0x28);
          lVar5 = 0;
          if (lVar1 != 0) {
            lVar5 = *(longlong *)(lVar1 + -8);
          }
          FUN_01b803e0(local_40,lVar1,lVar5 + -1);
          FUN_00414ad0(local_60,local_40[0]);
          local_4c = 0;
          if (-1 < iVar3 + -1) {
            do {
              (**(code **)(**(longlong **)(local_48 + 8) + 0x298))
                        (*(longlong **)(local_48 + 8),&local_30,local_4c);
              cVar2 = FUN_01b8ad70(auStack_88,local_30);
              if ((cVar2 != '\0') &&
                 (*(char *)(*(longlong *)(lVar4 + 0x28) + (longlong)local_4c) != '\0')) {
                local_54 = local_54 + 1;
              }
              local_4c = local_4c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        local_58 = local_58 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  local_50 = local_54;
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return local_50;
}

