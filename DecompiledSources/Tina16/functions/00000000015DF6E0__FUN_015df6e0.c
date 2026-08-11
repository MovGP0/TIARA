/* Ghidra address: 015df6e0 */
/* Ghidra symbol: FUN_015df6e0 */


void FUN_015df6e0(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_2b8 [32];
  ulonglong local_298;
  longlong local_290;
  undefined8 local_280;
  undefined1 local_278;
  undefined1 *local_270;
  undefined1 local_25f [61];
  undefined4 local_222;
  
  local_270 = auStack_2b8;
  FUN_00417580(local_25f,&DAT_015b8318);
  FUN_015ca1c0(param_1);
  local_298 = 0;
  cVar1 = FUN_015de7f0(param_1,param_2,local_25f,0x28bf);
  if (cVar1 == '\0') {
    local_278 = 0x11;
    local_298 = local_298 & 0xffffffff00000000;
    local_290 = param_1;
    local_280 = param_2;
    uVar3 = FUN_015b5d20(&PTR_FUN_015b5818,1,0x26,&local_280);
    FUN_004134c0(uVar3);
  }
  else {
    FUN_015dce90(param_1);
    do {
      lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_222);
      *(undefined2 *)(lVar2 + 0x24) = param_3;
      lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_222);
      if (*(char *)(lVar2 + 0x6c) == '\0') {
        lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_222);
        *(undefined1 *)(lVar2 + 0x6c) = 1;
        lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_222);
        *(undefined1 *)(lVar2 + 0x8e) = 7;
      }
      cVar1 = FUN_015deaa0(param_1,local_25f);
    } while (cVar1 != '\0');
    FUN_015dcfc0(param_1);
  }
  FUN_00417740(local_25f,&DAT_015b8318);
  return;
}

