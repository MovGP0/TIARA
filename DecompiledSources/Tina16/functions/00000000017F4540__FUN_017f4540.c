/* Ghidra address: 017f4540 */
/* Ghidra symbol: FUN_017f4540 */


void FUN_017f4540(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                 longlong param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar2 = FUN_0198d430(param_1);
  (**(code **)(*param_2 + 0x70))(param_2,uVar2);
  uVar2 = FUN_0198d430(param_1);
  (**(code **)(*param_2 + 0x78))(param_2,uVar2);
  *(longlong **)(param_5 + 0x20) = param_2;
  local_54 = 0;
  if (-1 < *(int *)(param_4 + 8) + -2) {
    local_50 = *(int *)(param_4 + 8) + -1;
    do {
      local_58 = 0;
      if (-1 < *(int *)(param_3 + 8) + -2) {
        local_4c = *(int *)(param_3 + 8) + -1;
        do {
          FUN_017f43b0(auStack_78,&local_48,local_54,local_58);
          local_38 = local_48;
          uStack_30 = uStack_40;
          lVar3 = 0;
          iVar5 = *(int *)(param_1 + 0x10);
          iVar4 = 0;
          if (-1 < iVar5 + -1) {
            do {
              uVar2 = FUN_00b94e60(param_1,iVar4);
              cVar1 = FUN_017f44a0(auStack_78,uVar2);
              if (cVar1 != '\0') {
                lVar3 = FUN_00b94e60(param_1,iVar4);
                break;
              }
              iVar4 = iVar4 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          if (lVar3 == 0) {
            FUN_017f40f0(param_5,&local_38);
          }
          local_58 = local_58 + 1;
          local_4c = local_4c + -1;
        } while (local_4c != 0);
      }
      local_54 = local_54 + 1;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  }
  return;
}

