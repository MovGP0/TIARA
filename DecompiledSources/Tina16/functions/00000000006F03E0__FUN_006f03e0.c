/* Ghidra address: 006f03e0 */
/* Ghidra symbol: FUN_006f03e0 */


void FUN_006f03e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_70;
  longlong local_60;
  byte *local_50;
  byte *local_48;
  undefined4 *local_40;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  longlong local_20;
  
  local_80 = auStack_b8;
  local_90 = 0;
  local_88 = 0;
  FUN_006efe10(param_1);
  FUN_004b84c0(param_2,&local_24,4);
  local_20 = FUN_00409570((longlong)local_24);
  FUN_004b84c0(param_2,local_20 + 4,(longlong)(local_24 + -4));
  local_40 = (undefined4 *)(local_20 + 8);
  local_48 = (byte *)0x0;
  iVar1 = *(int *)(local_20 + 4);
  local_28 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_60 = FUN_006efb70(param_1);
      FUN_004169a0(&local_88,local_40 + 5);
      FUN_006ef050(local_60,local_88);
      FUN_006ef370(local_60,0,*local_40);
      FUN_006ef370(local_60,1,local_40[2]);
      FUN_006ef370(local_60,2,local_40[1]);
      FUN_006ef160(local_60,(longlong)(int)local_40[4]);
      local_48 = (byte *)((longlong)(local_40 + 5) + (ulonglong)(*(byte *)(local_40 + 5) + 1));
      local_34 = 0;
      iVar2 = local_40[3];
      local_2c = 0;
      if (-1 < iVar2 + -1) {
        do {
          FUN_004169a0(&local_90,local_48);
          (**(code **)(**(longlong **)(local_60 + 0x10) + 0x78))
                    (*(longlong **)(local_60 + 0x10),local_90);
          local_30 = (uint)*local_48;
          local_34 = local_34 + local_30 + 1;
          local_48 = local_48 + (int)(local_30 + 1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_40 = (undefined4 *)
                 ((longlong)local_40 +
                 (longlong)(int)((uint)*(byte *)(local_40 + 5) + local_34 + 0x15));
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (((longlong)local_48 - local_20) / 2 < (longlong)local_24) {
    local_50 = local_48;
    iVar1 = FUN_006efc30();
    local_28 = 0;
    if (-1 < iVar1 + -1) {
      do {
        local_70 = FUN_006efcb0(param_1,local_28);
        iVar2 = (**(code **)(**(longlong **)(local_70 + 0x10) + 0x28))();
        local_2c = 0;
        if (-1 < iVar2 + -1) {
          do {
            FUN_006ef850(local_70,local_2c,(longlong)*(short *)local_50);
            local_50 = local_50 + 2;
            local_2c = local_2c + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_28 = local_28 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_004095f0(local_20,(longlong)local_24);
  FUN_00414560(&local_90,2);
  return;
}

