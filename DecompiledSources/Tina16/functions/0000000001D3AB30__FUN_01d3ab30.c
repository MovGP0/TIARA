/* Ghidra address: 01d3ab30 */
/* Ghidra symbol: FUN_01d3ab30 */


void FUN_01d3ab30(longlong *param_1,double param_2,double param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  double *local_78;
  longlong local_68;
  int local_5c;
  int local_58;
  int local_54;
  longlong local_50;
  double local_40;
  undefined1 local_38;
  double local_30;
  char local_28;
  
  local_80 = auStack_a8;
  if (param_4 != '\x05') {
    local_68 = 0;
    local_5c = (int)param_1[2] + -1;
    puVar1 = auStack_a8;
    if (-1 < local_5c) {
      do {
        local_80 = puVar1;
        uVar4 = FUN_00b94e60(param_1,local_5c);
        cVar2 = FUN_01d3ab10(auStack_a8,uVar4);
        if (cVar2 != '\0') {
          local_68 = FUN_00b94e60(param_1,local_5c);
          break;
        }
        local_5c = local_5c + -1;
        puVar1 = local_80;
      } while (local_5c != -1);
    }
    local_50 = local_68;
    if (local_68 != 0) {
      local_58 = (**(code **)(*param_1 + 0x18))(param_1,local_68);
      iVar3 = (int)param_1[2] + -1;
      if (local_58 < iVar3) {
        local_54 = local_58 + 1;
        if (local_54 <= iVar3) {
          iVar3 = (iVar3 - local_54) + 1;
          do {
            lVar5 = FUN_00b94e60(param_1,local_54);
            local_78 = (double *)(lVar5 + 8);
            *local_78 = (*local_78 + param_3) - param_2;
            local_54 = local_54 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      if (*(char *)(local_50 + 0x10) != param_4) {
        local_30 = param_2;
        local_28 = param_4;
        uVar4 = FUN_01d3aa00(0,&PTR_FUN_01d353b8,&local_30);
        FUN_00b94f50(param_1,local_58 + 1,uVar4);
        local_38 = *(undefined1 *)(local_50 + 0x10);
        local_40 = param_3;
        uVar4 = FUN_01d3aa00(0,&PTR_FUN_01d353b8,&local_40);
        FUN_00b94f50(param_1,local_58 + 2,uVar4);
      }
    }
  }
  return;
}

