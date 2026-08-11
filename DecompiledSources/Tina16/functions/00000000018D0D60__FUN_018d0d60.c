/* Ghidra address: 018d0d60 */
/* Ghidra symbol: FUN_018d0d60 */


longlong * FUN_018d0d60(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c;
  int local_28;
  int local_24;
  longlong local_20 [2];
  
  local_40 = auStack_68;
  FUN_00414ad0(param_1,param_2);
  local_2c = FUN_00414cb0(*param_1);
  local_20[0] = FUN_00410e60(&PTR_FUN_00472dd0,1);
  if ((local_2c < 3) || ((*(short *)(*param_1 + 2) != 0x3a && (*(short *)(*param_1 + 4) != 0x5c))))
  {
    FUN_018d0f20(0,local_40);
  }
  else {
    local_24 = 3;
    local_28 = 3;
    if (2 < local_2c) {
      do {
        lVar2 = (longlong)local_24;
        lVar1 = FUN_00414de0(param_1);
        *(undefined2 *)(lVar1 + -2 + (longlong)local_28 * 2) =
             *(undefined2 *)(param_2 + -2 + lVar2 * 2);
        if (*(short *)(param_2 + -2 + lVar2 * 2) == 0x5c) {
          FUN_004ae7e0(local_20[0],(longlong)local_28);
        }
        if ((*(short *)(param_2 + -2 + (longlong)local_24 * 2) == 0x2e) &&
           (*(short *)(param_2 + -2 + (longlong)(local_24 + -1) * 2) == 0x5c)) {
          if ((local_2c < local_24 + 1) ||
             (*(short *)(param_2 + -2 + (longlong)(local_24 + 1) * 2) != 0x5c)) {
            if (((local_24 + 2 <= local_2c) &&
                (*(short *)(param_2 + -2 + (longlong)(local_24 + 1) * 2) == 0x2e)) &&
               (*(short *)(param_2 + -2 + (longlong)(local_24 + 2) * 2) == 0x5c)) {
              local_24 = local_24 + 2;
              if (1 < *(int *)(local_20[0] + 0x10)) {
                FUN_004ae870(local_20[0],*(int *)(local_20[0] + 0x10) + -1);
                local_28 = FUN_004aeac0(local_20[0],*(int *)(local_20[0] + 0x10) + -1);
              }
            }
          }
          else {
            local_24 = local_24 + 1;
          }
        }
        local_24 = local_24 + 1;
        local_28 = local_28 + 1;
      } while (local_24 <= local_2c);
    }
    FUN_004169f0(param_1,local_28 + -1);
    FUN_00452320(local_20);
  }
  return param_1;
}

