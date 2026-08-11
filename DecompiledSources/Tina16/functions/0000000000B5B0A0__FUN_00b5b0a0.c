/* Ghidra address: 00b5b0a0 */
/* Ghidra symbol: FUN_00b5b0a0 */


undefined1 FUN_00b5b0a0(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  int local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_39 = 0;
  if ((*(char *)(param_1 + 0x12e) == '\0') ||
     (*(int *)(param_1 + 0xd38) == *(int *)(param_1 + 0x130))) {
    uVar2 = FUN_00b5add0(param_1);
    *(undefined1 *)(param_1 + 0x12e) = uVar2;
  }
  if (*(char *)(param_1 + 0x12e) != '\0') {
    local_28 = 2;
    cVar3 = FUN_00b5af60(auStack_68,0);
    if (cVar3 != '\0') {
      uVar4 = FUN_00414df0(local_20);
      FUN_00409a70(uVar4,*(longlong *)(param_1 + 0x10) + 0x10,(longlong)local_28);
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) != 0) {
        local_28 = 2;
        cVar3 = FUN_00b5af60(auStack_68,0);
        if (cVar3 != '\0') {
          uVar4 = FUN_00414df0(local_20);
          FUN_00409a70(uVar4,*(longlong *)(param_1 + 0x10) + 0x14,(longlong)local_28);
          local_28 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x14);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
          (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x14));
          if (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x14)) {
            cVar3 = FUN_00b5af60(auStack_68,*(undefined1 *)(param_1 + 0x18));
            if (cVar3 == '\0') goto LAB_00b5b214;
            uVar4 = FUN_00414df0(local_20);
            FUN_00409a70(uVar4,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 8)
                         ,(longlong)local_28);
            FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),0);
          }
          local_39 = 1;
        }
      }
    }
  }
LAB_00b5b214:
  FUN_004144d0(local_20);
  return local_39;
}

