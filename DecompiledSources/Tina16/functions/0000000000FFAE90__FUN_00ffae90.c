/* Ghidra address: 00ffae90 */
/* Ghidra symbol: FUN_00ffae90 */


void FUN_00ffae90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int local_50;
  int local_4c;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x10);
  local_50 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x90),local_50);
      if (*(char *)(lVar3 + 0x30) == '\f') {
        iVar1 = (**(code **)(**(longlong **)(lVar3 + 0x5c0) + 0x28))(*(longlong **)(lVar3 + 0x5c0));
        *(undefined1 *)(param_1 + 0x9be) = 0;
        local_4c = 0;
        iVar5 = iVar1;
        if (-1 < iVar1 + -1) {
          do {
            (**(code **)(**(longlong **)(lVar3 + 0x5c0) + 0x18))
                      (*(longlong **)(lVar3 + 0x5c0),local_40,local_4c);
            iVar2 = FUN_004170c0(L"RETLW",local_40[0],1);
            if (0 < iVar2) {
              *(undefined1 *)(param_1 + 0x9be) = 1;
            }
            local_4c = local_4c + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if ((*(char *)(param_1 + 0x9be) != '\0') && (local_4c = 0, -1 < iVar1 + -1)) {
          do {
            (**(code **)(**(longlong **)(lVar3 + 0x5c0) + 0x18))
                      (*(longlong **)(lVar3 + 0x5c0),local_40,local_4c);
            FUN_00f787d0(param_1,param_2,local_40[0]);
            local_4c = local_4c + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      local_50 = local_50 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_40);
  return;
}

