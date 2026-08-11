/* Ghidra address: 00b62660 */
/* Ghidra symbol: FUN_00b62660 */


void FUN_00b62660(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined1 *local_40;
  undefined8 *local_30;
  int local_24;
  int local_20;
  int local_1c;
  
  local_40 = auStack_68;
  local_48 = (undefined8 *)0x0;
  local_30 = (undefined8 *)0x0;
  uVar4 = FUN_00b191b0(&DAT_00b18820,1);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  iVar1 = FUN_00b59a10();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 8),
                           local_1c);
      FUN_00415530(&local_30,*(undefined8 *)(lVar5 + 0x38),0);
      FUN_00b193b0(*(undefined8 *)(param_1 + 0x68),local_30);
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00b194f0(*(undefined8 *)(param_1 + 0x68));
  iVar1 = FUN_00b19370();
  local_20 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b19380(*(undefined8 *)(param_1 + 0x68),&local_30,local_20);
      local_1c = -1;
      iVar2 = FUN_00b59a10();
      local_24 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar5 = FUN_00b598d0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 8),local_24);
          FUN_00415530(&local_48,*(undefined8 *)(lVar5 + 0x38),0);
          iVar3 = FUN_00415a60(local_30,local_48);
          if (iVar3 == 0) {
            local_1c = local_24;
            break;
          }
          local_24 = local_24 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (-1 < local_1c) {
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x60),(longlong)local_1c);
      }
      local_20 = local_20 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x68) + -0x20))(*(longlong **)(param_1 + 0x68),1);
  FUN_004144d0(&local_48);
  FUN_004144d0(&local_30);
  return;
}

