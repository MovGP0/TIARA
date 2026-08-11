/* Ghidra address: 01d3ad60 */
/* Ghidra symbol: FUN_01d3ad60 */


void FUN_01d3ad60(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  longlong local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  char local_30;
  undefined8 local_20;
  
  local_80 = auStack_a8;
  if (param_4 != '\x05') {
    local_70 = 0;
    local_68 = (int)param_1[2] + -1;
    puVar1 = auStack_a8;
    local_20 = param_2;
    if (-1 < local_68) {
      do {
        local_80 = puVar1;
        uVar3 = FUN_00b94e60(param_1,local_68);
        cVar2 = FUN_01d3ad40(auStack_a8,uVar3);
        if (cVar2 != '\0') {
          local_70 = FUN_00b94e60(param_1,local_68);
          break;
        }
        local_68 = local_68 + -1;
        puVar1 = local_80;
      } while (local_68 != -1);
    }
    local_50 = local_70;
    local_70 = 0;
    local_68 = (int)param_1[2] + -1;
    local_20 = param_3;
    if (-1 < local_68) {
      do {
        uVar3 = FUN_00b94e60(param_1,local_68);
        cVar2 = FUN_01d3ad40(auStack_a8,uVar3);
        if (cVar2 != '\0') {
          local_70 = FUN_00b94e60(param_1,local_68);
          break;
        }
        local_68 = local_68 + -1;
      } while (local_68 != -1);
    }
    local_58 = local_70;
    if ((local_50 != 0) && (local_70 != 0)) {
      local_60 = (**(code **)(*param_1 + 0x18))(param_1,local_50);
      local_64 = (**(code **)(*param_1 + 0x18))(param_1,local_58);
      if ((local_50 != local_58) && (*(char *)(local_50 + 0x10) == *(char *)(local_58 + 0x10))) {
        local_64 = local_64 + 1;
        local_58 = local_50;
      }
      local_5c = local_60 + 1;
      if (local_5c <= local_64 + -1) {
        iVar4 = ((local_64 + -1) - local_5c) + 1;
        do {
          FUN_00b94f10(param_1,local_60 + 1);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (*(char *)(local_50 + 0x10) == param_4) {
        if (local_50 != local_58) {
          *(undefined8 *)(local_58 + 8) = param_3;
        }
      }
      else if (local_50 == local_58) {
        local_38 = param_2;
        local_30 = param_4;
        uVar3 = FUN_01d3aa00(0,&PTR_FUN_01d353b8,&local_38);
        FUN_00b94f50(param_1,local_60 + 1,uVar3);
        local_40 = *(undefined1 *)(local_50 + 0x10);
        local_48 = param_3;
        uVar3 = FUN_01d3aa00(0,&PTR_FUN_01d353b8,&local_48);
        FUN_00b94f50(param_1,local_60 + 2,uVar3);
      }
      else {
        *(undefined8 *)(local_58 + 8) = param_2;
      }
    }
  }
  return;
}

