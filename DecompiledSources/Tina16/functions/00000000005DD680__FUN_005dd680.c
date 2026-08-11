/* Ghidra address: 005dd680 */
/* Ghidra symbol: FUN_005dd680 */


void FUN_005dd680(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined1 auStack_68 [36];
  int local_44;
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  local_20[0] = 0;
  FUN_004b3260(param_3);
  (**(code **)(*param_3 + 0x90))(param_3);
  local_30 = FUN_005dc860(*(undefined8 *)(param_1 + 0x18),param_2);
  if (local_30 != 0) {
    iVar1 = (**(code **)(**(longlong **)(local_30 + 8) + 0x28))();
    local_44 = iVar1 + -1;
    local_24 = 0;
    if (-1 < local_44) {
      do {
        local_44 = iVar1;
        FUN_00414480(local_20);
        (**(code **)(**(longlong **)(local_30 + 8) + 0x18))
                  (*(longlong **)(local_30 + 8),local_20,local_24);
        (**(code **)(*param_3 + 0x78))(param_3,local_20[0]);
        FUN_00414480(local_20);
        local_24 = local_24 + 1;
        local_44 = local_44 + -1;
        iVar1 = local_44;
      } while (local_44 != 0);
    }
  }
  FUN_004b3390(param_3);
  FUN_00414480(local_20);
  return;
}

