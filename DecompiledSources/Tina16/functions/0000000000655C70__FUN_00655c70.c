/* Ghidra address: 00655c70 */
/* Ghidra symbol: FUN_00655c70 */


void FUN_00655c70(longlong *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_20;
  char local_19;
  
  local_30 = auStack_58;
  if ((((*(char *)((longlong)param_1 + 0xa9) == '\0') ||
       (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0 &&
        ((*(uint *)((longlong)param_1 + 0xa4) & 0x800) != 0)))) &&
      (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0 ||
       (((*(uint *)((longlong)param_1 + 0xa4) & 0x800) != 0 ||
        ((*(uint *)(param_1 + 0x14) & 0x400) != 0)))))) ||
     (((*(uint *)((longlong)param_1 + 0xa4) & 8) != 0 ||
      ((*(ushort *)((longlong)param_1 + 0x34) & 8) != 0)))) {
    local_19 = '\0';
  }
  else {
    local_19 = '\x01';
  }
  puVar1 = auStack_58;
  if (local_19 != '\0') {
    puVar1 = auStack_58;
    if (param_1[0x8d] == 0) {
      (**(code **)(*param_1 + 0x1b8))();
      puVar1 = local_30;
    }
    local_30 = puVar1;
    puVar1 = local_30;
    if (param_1[0x6f] != 0) {
      iVar3 = *(int *)(param_1[0x6f] + 0x10);
      local_20 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar2 = FUN_004aeac0(param_1[0x6f],local_20);
          FUN_00655c70(uVar2);
          local_20 = local_20 + 1;
          iVar3 = iVar3 + -1;
          puVar1 = local_30;
        } while (iVar3 != 0);
      }
    }
  }
  local_30 = puVar1;
  if ((param_1[0x8d] != 0) && (*(char *)((longlong)param_1 + 0x391) != local_19)) {
    *(char *)((longlong)param_1 + 0x391) = local_19;
    *(undefined1 *)((longlong)param_1 + 0x396) = 1;
    FUN_0064fca0(param_1,0xb019,0,0);
    *(undefined1 *)((longlong)param_1 + 0x396) = 0;
  }
  return;
}

