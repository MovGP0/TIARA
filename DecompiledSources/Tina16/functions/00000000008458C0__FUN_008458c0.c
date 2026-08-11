/* Ghidra address: 008458c0 */
/* Ghidra symbol: FUN_008458c0 */


void FUN_008458c0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  undefined1 local_8a;
  undefined1 local_89;
  undefined8 local_88;
  int local_6c;
  int local_34;
  
  local_a0 = auStack_c8;
  if (*(char *)((longlong)param_1 + 0x4e4) != '\0') {
    cVar1 = FUN_0065be20(param_1);
    if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x391) != '\0')) {
      local_6c = FUN_0064d0b0(param_1);
      local_34 = FUN_0064d120(param_1);
      cVar1 = FUN_008455e0(auStack_c8,0);
      if (cVar1 != '\0') {
        iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,3);
        local_34 = local_34 + iVar2;
      }
      cVar1 = FUN_008455e0(auStack_c8,1);
      if (cVar1 != '\0') {
        iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,2);
        local_6c = local_6c + iVar2;
      }
      local_88 = param_1[0x9d];
      local_8a = *(undefined1 *)((longlong)param_1 + 0x4e4);
      *(undefined1 *)((longlong)param_1 + 0x4e4) = 0;
      local_89 = 0;
      FUN_00845780(auStack_c8);
      local_34 = FUN_0064d120(param_1);
      FUN_00845850(auStack_c8);
      iVar2 = FUN_0064d0b0(param_1);
      if (local_6c != iVar2) {
        local_6c = FUN_0064d0b0(param_1);
        FUN_00845780(auStack_c8);
      }
      *(undefined1 *)((longlong)param_1 + 0x4e4) = local_8a;
      FUN_008453a0(param_1);
      if (((int)param_1[0x9d] != (int)local_88) ||
         (*(int *)((longlong)param_1 + 0x4ec) != local_88._4_4_)) {
        FUN_00845220(param_1,&local_88);
      }
    }
  }
  return;
}

