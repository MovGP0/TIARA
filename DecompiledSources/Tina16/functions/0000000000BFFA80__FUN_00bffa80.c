/* Ghidra address: 00bffa80 */
/* Ghidra symbol: FUN_00bffa80 */


void FUN_00bffa80(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  bool local_22;
  char local_21;
  char local_20;
  char local_1f;
  char local_1e;
  byte local_1d;
  int local_1c;
  longlong local_18;
  undefined4 local_c;
  
  local_30 = auStack_58;
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 == '\0') {
    local_1d = FUN_00bd11e0(param_1[0xab]);
    local_1e = local_1d == 10;
    local_1f = local_1d == 0xc;
    local_20 = local_1d == 0xe;
    local_21 = local_1d == 0x10;
    local_18 = FUN_00bd10f0(param_1[0xab]);
    if (local_18 != 0) {
      local_1c = *(int *)(local_18 + 0x28);
      local_c = *(undefined4 *)(param_1[0xaa] + 8);
      *(int *)(param_1[0xaa] + 8) = local_1c;
      do {
        FUN_00bffd10(param_1);
        local_18 = FUN_00bd10f0(param_1[0xab]);
        if (local_18 == 0) {
          local_22 = false;
        }
        else {
          if (local_1e == '\0') {
            if (local_1f == '\0') {
              if (local_20 == '\0') {
                if (local_21 == '\0') {
                  if (*(int *)(local_18 + 0x28) == local_1c) {
                    local_22 = true;
                  }
                  else {
                    if (((*(uint *)((longlong)param_1 + 0x63a) & 0x100) != 0) &&
                       (local_1d == *(byte *)(local_18 + 8))) {
                      if (local_1d < 8) {
                        bVar2 = ((int)CONCAT71((int7)((ulonglong)local_18 >> 8),1) <<
                                 (local_1d & 0x1f) & 0xc0U) != 0;
                      }
                      else {
                        bVar2 = false;
                      }
                      if (!bVar2) {
                        local_22 = true;
                        goto LAB_00bffc37;
                      }
                    }
                    local_22 = false;
                  }
                }
                else {
                  cVar1 = FUN_00bd11e0(param_1[0xab]);
                  local_22 = cVar1 != '\x11';
                }
              }
              else {
                cVar1 = FUN_00bd11e0(param_1[0xab]);
                local_22 = cVar1 != '\x0f';
              }
            }
            else {
              cVar1 = FUN_00bd11e0(param_1[0xab]);
              local_22 = cVar1 != '\r';
            }
          }
          else {
            cVar1 = FUN_00bd11e0(param_1[0xab]);
            local_22 = cVar1 != '\v';
          }
LAB_00bffc37:
          local_1d = *(byte *)(local_18 + 8);
        }
      } while (local_22 != false);
      if (((((local_1e != '\0') && (cVar1 = FUN_00bd11e0(param_1[0xab]), cVar1 == '\v')) ||
           ((local_1f != '\0' && (cVar1 = FUN_00bd11e0(param_1[0xab]), cVar1 == '\r')))) ||
          ((local_20 != '\0' && (cVar1 = FUN_00bd11e0(param_1[0xab]), cVar1 == '\x0f')))) ||
         ((local_21 != '\0' && (cVar1 = FUN_00bd11e0(param_1[0xab]), cVar1 == '\x11')))) {
        FUN_00bffd10(param_1);
        FUN_00c0ea50(param_1);
      }
      *(undefined4 *)(param_1[0xaa] + 8) = local_c;
      FUN_00bff9a0(auStack_58);
    }
  }
  return;
}

