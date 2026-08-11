/* Ghidra address: 015df2e0 */
/* Ghidra symbol: FUN_015df2e0 */


void FUN_015df2e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_508 [32];
  ulonglong local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  undefined1 local_4d0;
  undefined8 local_4c8;
  undefined1 *local_4c0;
  undefined1 local_4b6 [599];
  undefined1 local_25f [61];
  undefined4 local_222;
  
  local_4c0 = auStack_508;
  local_4c8 = 0;
  FUN_00417580(local_25f,&DAT_015b8318);
  FUN_00417580(local_4b6,&DAT_015b8318);
  FUN_015ca1c0(param_1);
  local_4e8 = 0;
  cVar1 = FUN_015de7f0(param_1,param_2,local_25f,0x28bf);
  if (cVar1 == '\0') {
    local_4d0 = 0x11;
    local_4e8 = local_4e8 & 0xffffffff00000000;
    local_4e0 = param_1;
    local_4d8 = param_2;
    uVar3 = FUN_015b5d20(&PTR_FUN_015b5818,1,0x1e,&local_4d8);
    FUN_004134c0(uVar3);
  }
  else {
    FUN_015dce90(param_1);
    FUN_015deae0(auStack_508,local_25f);
    lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_222);
    if ((*(uint *)(lVar2 + 0x26) & 0x10) != 0) {
      lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_222);
      FUN_00416ba0(&local_4c8,*(undefined8 *)(lVar2 + 0x36),&LAB_015df510);
      local_4e8 = 0;
      cVar1 = FUN_015de7f0(param_1,local_4c8,local_4b6,0x28bf);
      while (cVar1 != '\0') {
        FUN_015deae0(auStack_508,local_4b6);
        cVar1 = FUN_015deaa0(param_1,local_4b6);
      }
    }
    FUN_015dcfc0(param_1);
  }
  FUN_00414480(&local_4c8);
  FUN_00417840(local_4b6,&DAT_015b8318,2);
  return;
}

