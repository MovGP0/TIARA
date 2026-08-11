/* Ghidra address: 006dcf30 */
/* Ghidra symbol: FUN_006dcf30 */


void FUN_006dcf30(longlong param_1,char param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  int local_c;
  
  local_30 = auStack_58;
  if (*(char *)(param_1 + 0x38) == '\0') {
    puVar1 = auStack_58;
    local_18 = param_1;
    if (param_3 == '\0') {
      lVar3 = FUN_006dc7c0(param_1);
      *(undefined1 *)(lVar3 + 0x511) = 1;
      local_c = 0;
      if (param_2 == '\0') {
        cVar2 = FUN_006dce30(param_1,0);
        if (cVar2 != '\0') {
          local_c = 1;
          FUN_006dceb0(param_1,0);
        }
      }
      else {
        cVar2 = FUN_006dce30(param_1,1);
        if (cVar2 != '\0') {
          local_c = 2;
          FUN_006dceb0(param_1,1);
        }
      }
      if (local_c != 0) {
        local_20 = FUN_006dc7a0(param_1);
        local_28 = *(undefined8 *)(param_1 + 0x20);
        thunk_FUN_041b2403(local_20,0x1102,(longlong)local_c,local_28);
      }
      lVar3 = FUN_006dc7c0(param_1);
      *(undefined1 *)(lVar3 + 0x511) = 0;
    }
    else {
      do {
        local_30 = puVar1;
        FUN_006dcf30(local_18,param_2,0);
        local_18 = FUN_006dd600(local_18);
        if (local_18 == 0) {
          return;
        }
        cVar2 = FUN_006dc7d0(local_18,param_1);
        puVar1 = local_30;
      } while (cVar2 != '\0');
    }
  }
  return;
}

