/* Ghidra address: 00bc5f60 */
/* Ghidra symbol: FUN_00bc5f60 */


/* WARNING: Removing unreachable block (ram,0x00bc622a) */

undefined1 FUN_00bc5f60(undefined8 *param_1,longlong param_2)

{
  short sVar1;
  undefined1 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  short *psVar6;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  uint local_38;
  uint local_34;
  short *local_30;
  short *local_28;
  undefined1 local_19;
  
  local_40 = auStack_68;
  local_19 = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = param_2;
  puVar2 = auStack_68;
  if (param_1[0x30] != 0) {
    FUN_004095f0(param_1[0x30]);
    param_1[0x30] = 0;
    puVar2 = local_40;
  }
  local_40 = puVar2;
  if (param_2 == 0) {
    (**(code **)*param_1)(param_1,100);
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x1a4) = *(undefined4 *)((longlong)param_1 + 0x19c);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x19c);
    param_1[0x2a] = param_2;
    *(undefined4 *)(param_1 + 0x2b) = 1;
    *(undefined4 *)(param_1 + 0x2d) = 0;
    param_1[0x2c] = (longlong)param_1 + 0x15c;
    FUN_00bc5e70(param_1,0xd8);
    lVar4 = FUN_00bc62b0(param_1,0,&local_38);
    if (lVar4 != 0) {
      uVar5 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x2d) * 2));
      param_1[0x30] = uVar5;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x19c);
      param_1[0x2a] = param_2;
      *(undefined4 *)(param_1 + 0x2b) = 1;
      param_1[0x2c] = param_1[0x30];
      FUN_00bc5e70(param_1,0xd8);
      lVar4 = FUN_00bc62b0(param_1,0,&local_38);
      if (lVar4 != 0) {
        *(undefined2 *)((longlong)param_1 + 0x124) = 0;
        *(undefined2 *)((longlong)param_1 + 0x126) = 0;
        param_1[0x25] = 0;
        *(undefined4 *)(param_1 + 0x26) = 0;
        local_28 = (short *)(param_1[0x30] + 2);
        psVar6 = (short *)FUN_00bc8990(param_1,local_28);
        if (*psVar6 == 0) {
          sVar1 = *(short *)((longlong)local_28 + 6);
          if (sVar1 == 8) {
            *(undefined2 *)((longlong)param_1 + 0x124) = *(undefined2 *)((longlong)local_28 + 0xc);
          }
          else if (sVar1 == 1) {
            *(short *)((longlong)param_1 + 0x126) = *(short *)((longlong)param_1 + 0x126) + 1;
          }
          if ((local_38 & 4) != 0) {
            local_30 = (short *)0x0;
            local_34 = 0;
            for (local_28 = (short *)((longlong)local_28 + 6); local_28 != (short *)0x0;
                local_28 = (short *)FUN_00bc8990(param_1,local_28)) {
              if ((*local_28 == 8) && (uVar3 = FUN_00bc3b80(local_28 + 3), local_34 <= uVar3)) {
                local_30 = local_28 + 3;
                local_34 = FUN_00bc3b80(local_30);
              }
            }
            param_1[0x25] = local_30;
            *(uint *)(param_1 + 0x26) = local_34;
          }
        }
        param_1[0x2e] = 0;
        *(undefined1 *)(param_1 + 0x2f) = 1;
        return 1;
      }
    }
  }
  FUN_00bc6270(0,local_40);
  return local_19;
}

