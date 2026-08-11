/* Ghidra address: 00dd2760 */
/* Ghidra symbol: FUN_00dd2760 */


void FUN_00dd2760(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  bool bVar3;
  undefined1 auStack_78 [32];
  double local_58;
  undefined8 local_50;
  char local_39;
  undefined8 local_38;
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    local_58 = 0.0;
    local_38 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 1),
                            *(undefined1 *)(param_1 + 4));
    if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x214) = 0;
    }
    if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
      if ((*(byte *)(param_3 + 0x88) & 0x40) == 0) {
        if ((*(byte *)(param_3 + 0x88) & 0x80) == 0) {
          if (param_4 == '\x06') {
            local_58 = 0.0;
            FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(byte *)(param_1 + 0x210) + 1);
            uVar2 = FUN_0040c770();
            *(undefined4 *)(param_1 + 0x214) = uVar2;
          }
          else {
            local_58 = 0.0;
            FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(byte *)(param_1 + 0x210) + 1);
            uVar2 = FUN_0040c770();
            *(undefined4 *)(param_1 + 0x214) = uVar2;
          }
        }
        else {
          local_58 = 0.0;
          FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(byte *)(param_1 + 0x210) + 1);
          uVar2 = FUN_0040c770();
          *(undefined4 *)(param_1 + 0x214) = uVar2;
        }
      }
      else {
        local_58 = 0.0;
        FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(byte *)(param_1 + 0x210) + 1);
        iVar1 = FUN_0040c770();
        *(int *)(param_1 + 0x214) = iVar1;
        local_58 = (double)iVar1;
        local_50 = 0;
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(byte *)(param_1 + 0x210) + 1);
        local_58 = (double)*(int *)(param_1 + 0x214);
        local_50 = 0;
        FUN_016eeca0(param_2,param_3 + 0x1b8,1,*(byte *)(param_1 + 0x210) + 1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x214) = 0;
    }
    FUN_00dd2560(auStack_78);
    if (local_39 == '\n') {
      *(undefined1 *)(param_1 + 0x11) = 1;
    }
    else if (local_39 == '\v') {
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    local_58 = (double)*(int *)(param_1 + 0x214);
    local_50 = 0;
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(byte *)(param_1 + 0x210) + 1);
  }
  return;
}

