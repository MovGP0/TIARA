/* Ghidra address: 0089d9b0 */
/* Ghidra symbol: FUN_0089d9b0 */


int FUN_0089d9b0(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34;
  ushort local_30;
  ushort local_2e;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  longlong local_10;
  
  local_40 = auStack_68;
  local_1c = 0;
  local_10 = FUN_0089df10(*param_1,param_2);
  *param_3 = local_10 == 0;
  if (*param_3 == '\0') {
    cVar1 = *(char *)((longlong)param_1 + 0xc);
    *param_3 = cVar1 != *(char *)(local_10 + 0xc);
    if (*param_3 == '\0') {
      if (cVar1 == '\0') {
        local_24 = *(uint *)(param_1 + 1);
        local_28 = *(uint *)(local_10 + 8);
        if (local_28 < local_24) {
          local_2c = 1;
        }
        else if (local_24 < local_28) {
          local_2c = -1;
        }
        else {
          local_2c = 0;
        }
        local_1c = local_2c;
      }
      else {
        local_20 = 0;
        do {
          local_2e = *(ushort *)((longlong)param_1 + (longlong)local_20 * 2 + 0xe);
          local_30 = *(ushort *)(local_10 + 0xe + (longlong)local_20 * 2);
          if (local_30 < local_2e) {
            local_34 = 1;
          }
          else if (local_2e < local_30) {
            local_34 = -1;
          }
          else {
            local_34 = 0;
          }
          local_1c = local_34;
        } while ((local_34 == 0) && (local_20 = local_20 + 1, local_20 != 8));
      }
    }
    local_18 = 0;
    FUN_00410f20(local_10);
  }
  return local_1c;
}

