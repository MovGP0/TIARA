/* Ghidra address: 006e94c0 */
/* Ghidra symbol: FUN_006e94c0 */


undefined1 FUN_006e94c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong local_res10 [3];
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  int local_20;
  int local_1c;
  longlong local_18;
  undefined1 local_d;
  int local_c;
  
  local_40 = auStack_68;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  local_d = 1;
  local_30 = local_res10[0];
  if (local_res10[0] != 0) {
    local_30 = *(longlong *)(local_res10[0] + -8);
  }
  local_24 = (int)local_30;
  local_c = FUN_004b6da0(param_1);
  FUN_00419260(&local_18,&DAT_00406578,1,(longlong)local_24);
  local_20 = (**(code **)(*param_1 + 0x18))(param_1,local_18,local_24);
  FUN_004b6dc0(param_1,(longlong)local_c);
  if (local_20 == local_24) {
    local_1c = 1;
    iVar1 = local_24;
    if (0 < local_24) {
      do {
        if (*(char *)(local_18 + (local_1c + -1)) != *(char *)(local_res10[0] + (local_1c + -1))) {
          local_d = 0;
          break;
        }
        local_1c = local_1c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    local_d = 0;
  }
  FUN_00419430(&local_18,&DAT_00406578);
  FUN_00419430(local_res10,&DAT_00406578);
  return local_d;
}

