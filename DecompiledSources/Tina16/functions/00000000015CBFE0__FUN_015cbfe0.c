/* Ghidra address: 015cbfe0 */
/* Ghidra symbol: FUN_015cbfe0 */


undefined1 FUN_015cbfe0(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong local_60;
  undefined1 *local_50;
  int local_3c;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined1 local_19;
  
  local_50 = auStack_88;
  local_19 = 0;
  if (0 < *(longlong *)(param_1 + 0xf8)) {
    puVar1 = auStack_88;
    if (*(char *)(param_1 + 0xf7) != '\0') {
      if (*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\0') {
        local_50 = auStack_88;
        FUN_015c0f10(param_1 + 0x1b8,*(undefined4 *)(param_1 + 0xf8),param_1 + 0x1a0);
        puVar1 = local_50;
      }
      else if (((*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\x01') ||
               (*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\x02')) ||
              (puVar1 = auStack_88, *(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\x03')) {
        local_68 = param_1 + 0x1b8;
        local_60 = local_60 & 0xffffffff00000000;
        (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xe8) + 0x30))
                  ((longlong *)**(undefined8 **)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0x1b8),0,
                   *(undefined4 *)(param_1 + 0xf8));
        puVar1 = local_50;
      }
    }
    local_50 = puVar1;
    if (*(short *)(*(longlong *)(param_1 + 0x208) + 0x8b) == 0) {
      local_28 = 0;
      local_30 = 0xffff;
      uVar3 = FUN_00409570(0xffff);
      *(undefined8 *)(param_1 + 0xe0) = uVar3;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      do {
        if (*(longlong *)(param_1 + 0xf8) <= (longlong)local_28) break;
        if ((longlong)local_30 < (longlong)(*(longlong *)(param_1 + 0xf8) - local_28)) {
          local_38 = local_30;
        }
        else {
          local_38 = *(longlong *)(param_1 + 0xf8) - local_28;
        }
        FUN_00409a70(*(longlong *)(param_1 + 0x1b8) + local_28,*(undefined8 *)(param_1 + 0xe0),
                     local_38);
        *(ulonglong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + local_38;
        FUN_015c0d50(*(undefined8 *)(param_1 + 0xe0),local_38 & 0xffffffff,param_1 + 0x19c);
        local_28 = local_28 + local_38;
        *(ulonglong *)(*(longlong *)(param_1 + 0x1f0) + 0x118) =
             local_28 + *(longlong *)(param_1 + 0xd0);
        if (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x101) != '\0') {
          local_68 = CONCAT71(local_68._1_7_,1);
          local_60 = *(longlong *)(param_1 + 0x1f0) + 0x100;
          (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0xa0))
                    (*(longlong **)(param_1 + 0x1f0),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x2e),
                     ((double)*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x118) /
                     (double)*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x120)) * 100.0,
                     *(undefined1 *)(*(longlong *)(param_1 + 0x208) + 0x8e));
          if (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x100) != '\0') break;
          local_68 = *(longlong *)(param_1 + 0x1f0) + 0x100;
          (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x98))
                    (*(longlong **)(param_1 + 0x1f0),
                     (((double)*(int *)(*(longlong *)(param_1 + 0x1f0) + 0xe4) +
                      (double)*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x118) /
                      (double)*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x120)) /
                     (double)*(int *)(*(longlong *)(param_1 + 0x1f0) + 0xe8)) * 100.0,
                     *(undefined1 *)(*(longlong *)(param_1 + 0x208) + 0x8e),1);
          if (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x100) != '\0') break;
        }
        cVar2 = FUN_015e3070(*(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x200),
                             *(undefined8 *)(param_1 + 0xe0),local_38 & 0xffffffff);
      } while (cVar2 != '\0');
    }
    else {
      *(undefined8 *)(param_1 + 0x13c) = *(undefined8 *)(param_1 + 0x1b8);
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0xf8);
      *(longlong *)(param_1 + 0xc0) = (longlong)*(int *)(param_1 + 0xcc);
      uVar3 = FUN_00409570(*(undefined8 *)(param_1 + 0xc0));
      *(undefined8 *)(param_1 + 0xe0) = uVar3;
      *(undefined8 *)(param_1 + 0x14c) = *(undefined8 *)(param_1 + 0xe0);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0xc0);
      *(ulonglong *)(param_1 + 0xb8) = (ulonglong)*(uint *)(param_1 + 0x158);
      local_28 = (ulonglong)*(uint *)(param_1 + 0x158);
      if (*(longlong *)(param_1 + 0xd0) == 0) {
        FUN_00409a70(*(undefined8 *)(param_1 + 0x1b8),*(longlong *)(param_1 + 0x1b8) + 2,
                     *(undefined8 *)(param_1 + 0xf8));
        uVar4 = FUN_015c0c60(1);
        *(ulonglong *)(param_1 + 400) = uVar4 & 0xffff;
        FUN_00409a70(param_1 + 400,*(undefined8 *)(param_1 + 0x1b8),2);
        *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0xf8) + 2;
      }
      while( true ) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x1f0) + 0x118) =
             (ulonglong)*(uint *)(param_1 + 0x158);
        if (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x101) != '\0') {
          local_68 = CONCAT71(local_68._1_7_,1);
          local_60 = *(longlong *)(param_1 + 0x1f0) + 0x100;
          (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0xa0))
                    (*(longlong **)(param_1 + 0x1f0),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x2e),
                     ((double)*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x118) /
                     (double)*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x120)) * 100.0,
                     *(undefined1 *)(*(longlong *)(param_1 + 0x208) + 0x8e));
          if (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x100) != '\0') goto code_r0x015cc8cf;
          local_68 = *(longlong *)(param_1 + 0x1f0) + 0x100;
          (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x98))
                    (*(longlong **)(param_1 + 0x1f0),
                     (((double)*(int *)(*(longlong *)(param_1 + 0x1f0) + 0xe4) +
                      (double)*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x118) /
                      (double)*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x120)) /
                     (double)*(int *)(*(longlong *)(param_1 + 0x1f0) + 0xe8)) * 100.0,
                     *(undefined1 *)(*(longlong *)(param_1 + 0x208) + 0x8e),1);
          if (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x100) != '\0') goto code_r0x015cc8cf;
        }
        local_3c = FUN_0159c770(param_1 + 0x13c,0);
        if (local_3c < 0) break;
        cVar2 = FUN_015e3070(*(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x200),
                             *(undefined8 *)(param_1 + 0xe0),
                             *(int *)(param_1 + 0x158) - *(int *)(param_1 + 0xb8));
        if (((cVar2 == '\0') ||
            ((FUN_015c0d50(*(undefined8 *)(param_1 + 0xe0),
                           *(int *)(param_1 + 0x158) - *(int *)(param_1 + 0xb8),param_1 + 0x19c),
             *(int *)(param_1 + 0x154) != 0 && (*(int *)(param_1 + 0x144) == 0)))) ||
           (local_3c == 1)) goto code_r0x015cc8cf;
        *(undefined8 *)(param_1 + 0x14c) = *(undefined8 *)(param_1 + 0xe0);
        *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0xcc);
        *(ulonglong *)(param_1 + 0xb8) = (ulonglong)*(uint *)(param_1 + 0x158);
      }
      if (*(int *)(param_1 + 0x144) != 0) {
        return local_19;
      }
      if (local_3c != -5) {
        return local_19;
      }
code_r0x015cc8cf:
      *(ulonglong *)(param_1 + 0xd8) = *(uint *)(param_1 + 0x158) - local_28;
    }
    local_19 = 1;
  }
  return local_19;
}

