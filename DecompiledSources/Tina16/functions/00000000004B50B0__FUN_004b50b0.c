/* Ghidra address: 004b50b0 */
/* Ghidra symbol: FUN_004b50b0 */


void FUN_004b50b0(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  short *psVar2;
  bool bVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  ushort *local_28;
  ushort *local_20 [2];
  
  local_40 = auStack_68;
  local_30 = 0;
  FUN_004b3260(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  local_20[0] = (ushort *)FUN_00416740(param_2);
  if ((*(byte *)((longlong)param_1 + 0x32) & 1) == 0) {
    while( true ) {
      if (*local_20[0] < 0x40) {
        bVar3 = (1L << ((byte)*local_20[0] & 0x3f) & 0x1fffffffeU) != 0;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) break;
      local_20[0] = (ushort *)FUN_004983e0(local_20[0]);
    }
  }
  do {
    do {
      if (*local_20[0] == 0) {
        FUN_004b3390(param_1);
        FUN_00414480(&local_30);
        return;
      }
      uVar1 = *(ushort *)((longlong)param_1 + 0x2e);
      if ((*local_20[0] == uVar1) && (uVar1 != 0)) {
        FUN_0043eea0(&local_30,local_20,uVar1);
      }
      else {
        local_28 = local_20[0];
        for (; ((((*(byte *)((longlong)param_1 + 0x32) & 1) == 0 && (0x20 < *local_20[0])) ||
                (((*(byte *)((longlong)param_1 + 0x32) & 1) != 0 && (*local_20[0] != 0)))) &&
               (*local_20[0] != *(ushort *)((longlong)param_1 + 0x2c)));
            local_20[0] = (ushort *)FUN_004983e0(local_20[0])) {
        }
        FUN_00414740(&local_30,local_28,
                     ((longlong)local_20[0] - (longlong)local_28) / 2 & 0xffffffff);
      }
      (**(code **)(*param_1 + 0x78))(param_1,local_30);
      if ((*(byte *)((longlong)param_1 + 0x32) & 1) == 0) {
        while( true ) {
          if (*local_20[0] < 0x40) {
            bVar3 = (1L << ((byte)*local_20[0] & 0x3f) & 0x1fffffffeU) != 0;
          }
          else {
            bVar3 = false;
          }
          if (!bVar3) break;
          local_20[0] = (ushort *)FUN_004983e0(local_20[0]);
        }
      }
    } while (*local_20[0] != *(ushort *)((longlong)param_1 + 0x2c));
    local_28 = local_20[0];
    psVar2 = (short *)FUN_004983e0(local_20[0]);
    if (*psVar2 == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,0);
    }
    do {
      local_20[0] = (ushort *)FUN_004983e0(local_20[0]);
      if ((*(byte *)((longlong)param_1 + 0x32) & 1) != 0) break;
      if (*local_20[0] < 0x40) {
        bVar3 = (1L << ((byte)*local_20[0] & 0x3f) & 0x1fffffffeU) != 0;
      }
      else {
        bVar3 = false;
      }
    } while (bVar3);
  } while( true );
}

