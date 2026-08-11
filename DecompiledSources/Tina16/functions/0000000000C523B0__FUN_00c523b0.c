/* Ghidra address: 00c523b0 */
/* Ghidra symbol: FUN_00c523b0 */


void FUN_00c523b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_10;
  char local_9;
  
  local_20 = auStack_48;
  FUN_00c51bb0(param_1);
  local_9 = '\0';
  local_10 = FUN_00c52b80(param_1);
  local_10 = local_10 + -1;
  if (-1 < local_10) {
    do {
      lVar2 = FUN_00c52b60(param_1,local_10);
      if (*(longlong *)(lVar2 + 0x98) != 0) {
        local_9 = '\x01';
        uVar3 = FUN_00c52b60(param_1,local_10);
        FUN_00c51820(uVar3,param_2,param_3);
        if (*(char *)(param_1 + 0x88) != '\0') break;
      }
      local_10 = local_10 + -1;
    } while (local_10 != -1);
  }
  if (local_9 == '\0') {
    cVar1 = FUN_004113d0(param_3,&PTR_FUN_00434b98);
    if (cVar1 == '\0') {
      FUN_0080d620(*(undefined8 *)PTR_DAT_02004030,param_3);
    }
  }
  FUN_00c52ac0(param_1);
  return;
}

