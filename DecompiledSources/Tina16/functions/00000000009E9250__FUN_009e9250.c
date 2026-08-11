/* Ghidra address: 009e9250 */
/* Ghidra symbol: FUN_009e9250 */


void FUN_009e9250(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  ushort *local_28;
  ushort *local_20 [2];
  
  local_40 = auStack_68;
  local_30 = 0;
  FUN_009e76c0(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  local_20[0] = (ushort *)FUN_00415f70(param_2);
  cVar1 = FUN_009e9570(param_1);
  if (cVar1 == '\0') {
    while (cVar1 = FUN_00711c60(*local_20[0],&DAT_009e9498), cVar1 != '\0') {
      local_20[0] = (ushort *)thunk_FUN_041d655c(local_20[0]);
    }
  }
  do {
    do {
      uVar3 = *local_20[0];
      if (uVar3 == 0) {
        FUN_009e77f0(param_1);
        FUN_00414520(&local_30);
        return;
      }
      uVar2 = FUN_009e9540(param_1);
      if (uVar3 == uVar2) {
        uVar4 = FUN_009e9540(param_1);
        FUN_00711a70(&local_30,local_20,uVar4);
      }
      else {
        local_28 = local_20[0];
        while ((((*(char *)((longlong)param_1 + 0x1c) == '\0' && (0x20 < *local_20[0])) ||
                ((*(char *)((longlong)param_1 + 0x1c) != '\0' && (*local_20[0] != 0)))) &&
               (uVar3 = FUN_009e94c0(param_1), *local_20[0] != uVar3))) {
          local_20[0] = (ushort *)thunk_FUN_041d655c(local_20[0]);
        }
        FUN_004147a0(&local_30,local_28,
                     ((longlong)local_20[0] - (longlong)local_28) / 2 & 0xffffffff);
      }
      (**(code **)(*param_1 + 0x70))(param_1,local_30);
      if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
        while (cVar1 = FUN_00711c60(*local_20[0],&DAT_009e9498), cVar1 != '\0') {
          local_20[0] = (ushort *)thunk_FUN_041d655c(local_20[0]);
        }
      }
      uVar3 = FUN_009e94c0(param_1);
    } while (*local_20[0] != uVar3);
    local_28 = local_20[0];
    psVar5 = (short *)thunk_FUN_041d655c(local_20[0]);
    if (*psVar5 == 0) {
      (**(code **)(*param_1 + 0x70))(param_1,0);
    }
    do {
      local_20[0] = (ushort *)thunk_FUN_041d655c(local_20[0]);
      if (*(char *)((longlong)param_1 + 0x1c) != '\0') break;
      cVar1 = FUN_00711c60(*local_20[0],&DAT_009e9498);
    } while (cVar1 != '\0');
  } while( true );
}

