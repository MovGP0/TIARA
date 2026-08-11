/* Ghidra address: 0184fdf0 */
/* Ghidra symbol: FUN_0184fdf0 */


void FUN_0184fdf0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  int local_24;
  int local_20;
  int local_1c;
  
  local_30 = auStack_88;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),&local_48);
  local_20 = FUN_00462650(&local_48);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(*(longlong **)(param_1 + 0x38),&local_60);
  local_24 = FUN_00462650(&local_60);
  FUN_0184f250(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x138) == '\0') {
    if (*(char *)(param_1 + 0x30) == '\0') {
      local_1c = local_20;
      if (local_20 <= local_24) {
        iVar2 = (local_24 - local_20) + 1;
        do {
          FUN_00468530(*(longlong *)(param_1 + 0x40) + 0x60,local_1c,0xfffffffffffffffc);
          FUN_0184f110(param_1);
          lVar1 = *(longlong *)(param_1 + 0x10);
          if ((*(char *)(lVar1 + 0x80) != '\0') || (*(char *)(lVar1 + 0x82) != '\0')) break;
          *(undefined1 *)(lVar1 + 0x81) = 0;
          local_1c = local_1c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      local_1c = local_20;
      if (local_24 <= local_20) {
        iVar2 = (local_24 - local_20) + -1;
        do {
          FUN_00468530(*(longlong *)(param_1 + 0x40) + 0x60,local_1c,0xfffffffffffffffc);
          FUN_0184f110(param_1);
          lVar1 = *(longlong *)(param_1 + 0x10);
          if ((*(char *)(lVar1 + 0x80) != '\0') || (*(char *)(lVar1 + 0x82) != '\0')) break;
          *(undefined1 *)(lVar1 + 0x81) = 0;
          local_1c = local_1c + -1;
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0);
      }
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x80) = 0;
  }
  FUN_00417840(&local_60,&DAT_004013d8,2);
  return;
}

