/* Ghidra address: 00653b80 */
/* Ghidra symbol: FUN_00653b80 */


void FUN_00653b80(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_60 = auStack_88;
  local_48 = 0;
  local_40 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  FUN_00419430(&local_48,&DAT_006535f0);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x310) = uVar2;
  do {
    local_4c = *(int *)(*(longlong *)(param_1 + 0x40) + 0x10) + -1;
    if (-1 < local_4c) {
      do {
        local_20 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x40),local_4c);
        local_50 = FUN_004aeba0(local_40,local_20);
        if ((local_50 == -1) || (*(int *)(local_48 + (longlong)local_50 * 4) < 10)) {
          *(undefined8 *)(local_20 + 0x310) = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x310)
          ;
          FUN_00654450(local_20);
          if (local_20 != *(longlong *)(param_1 + 0x70)) {
            *(undefined8 *)(local_20 + 0x310) = 0;
          }
          if (local_50 != -1) {
            piVar1 = (int *)(local_48 + (longlong)local_50 * 4);
            *piVar1 = *piVar1 + 1;
          }
          FUN_004ae7e0(local_40,local_20);
          local_58 = local_48;
          if (local_48 != 0) {
            local_58 = *(longlong *)(local_48 + -8);
          }
          if (local_58 != *(int *)(local_40 + 0x14)) {
            FUN_00419260(&local_48,&DAT_006535f0,1,(longlong)*(int *)(local_40 + 0x14));
          }
        }
        local_4c = local_4c + -1;
      } while (local_4c != -1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40));
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x310);
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x310) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = local_28;
  } while (*(int *)(*(longlong *)(param_1 + 0x40) + 0x10) != 0);
  local_30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x310);
  local_38 = *local_30;
  *local_30 = 0;
  FUN_00410f20(local_38);
  local_4c = *(int *)(local_40 + 0x10) + -1;
  if (-1 < local_4c) {
    do {
      local_20 = FUN_004aeac0(local_40,local_4c);
      if ((*(ushort *)(local_20 + 0x34) & 1) == 0) {
        pcVar3 = (code *)FUN_00411550(local_20,0xffce);
        (*pcVar3)(local_20);
      }
      local_4c = local_4c + -1;
    } while (local_4c != -1);
  }
  FUN_00410f20(local_40);
  FUN_00419430(&local_48,&DAT_006535f0);
  return;
}

