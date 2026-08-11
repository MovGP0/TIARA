/* Ghidra address: 01d3b630 */
/* Ghidra symbol: FUN_01d3b630 */


char FUN_01d3b630(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  longlong local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  longlong local_60;
  longlong local_58;
  char local_29;
  undefined8 local_20;
  
  local_90 = auStack_b8;
  local_78 = 0;
  local_70 = (int)param_1[2] + -1;
  puVar1 = auStack_b8;
  local_20 = param_2;
  if (-1 < local_70) {
    do {
      local_90 = puVar1;
      uVar3 = FUN_00b94e60(param_1,local_70);
      cVar2 = FUN_01d3b610(auStack_b8,uVar3);
      if (cVar2 != '\0') {
        local_78 = FUN_00b94e60(param_1,local_70);
        break;
      }
      local_70 = local_70 + -1;
      puVar1 = local_90;
    } while (local_70 != -1);
  }
  local_58 = local_78;
  local_78 = 0;
  local_70 = (int)param_1[2] + -1;
  local_20 = param_3;
  if (-1 < local_70) {
    do {
      uVar3 = FUN_00b94e60(param_1,local_70);
      cVar2 = FUN_01d3b610(auStack_b8,uVar3);
      if (cVar2 != '\0') {
        local_78 = FUN_00b94e60(param_1,local_70);
        break;
      }
      local_70 = local_70 + -1;
    } while (local_70 != -1);
  }
  local_60 = local_78;
  if ((local_58 != 0) && (local_78 != 0)) {
    local_68 = (**(code **)(*param_1 + 0x18))(param_1,local_58);
    local_6c = (**(code **)(*param_1 + 0x18))(param_1,local_60);
    local_29 = *(char *)(local_58 + 0x10);
    local_64 = local_68;
    if (local_68 <= local_6c) {
      iVar5 = (local_6c - local_68) + 1;
      do {
        lVar4 = FUN_00b94e60(param_1,local_64);
        if (local_29 != *(char *)(lVar4 + 0x10)) {
          local_29 = '\x05';
        }
        local_64 = local_64 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return local_29;
}

