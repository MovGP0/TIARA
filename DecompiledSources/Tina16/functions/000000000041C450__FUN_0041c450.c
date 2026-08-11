/* Ghidra address: 0041c450 */
/* Ghidra symbol: FUN_0041c450 */


void FUN_0041c450(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  int local_20;
  int local_1c;
  
  local_50 = auStack_78;
  local_20 = (int)(((param_3 >> 0xd) + (param_3 >> 5)) % 0x1f);
  FUN_0041c360(param_1);
  local_30 = *(longlong *)(param_2 + (longlong)local_20 * 8);
  local_38 = local_30;
  if (local_30 != 0) {
    local_38 = *(longlong *)(local_30 + -8);
  }
  iVar1 = (int)local_38;
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (*(longlong *)(*(longlong *)(param_2 + (longlong)local_20 * 8) + (longlong)local_1c * 8) ==
          0) {
        *(ulonglong *)(*(longlong *)(param_2 + (longlong)local_20 * 8) + (longlong)local_1c * 8) =
             param_3;
        FUN_0041c5d0(0,local_50);
        return;
      }
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  lVar2 = (longlong)local_20;
  local_40 = *(longlong *)(param_2 + lVar2 * 8);
  local_48 = local_40;
  if (local_40 != 0) {
    local_48 = *(longlong *)(local_40 + -8);
  }
  local_1c = (int)local_48;
  if ((int)local_48 == 0) {
    FUN_0041c190(param_2 + lVar2 * 8,10);
  }
  else {
    FUN_0041c190(param_2 + lVar2 * 8,(longlong)((int)local_48 * 2));
  }
  *(ulonglong *)(*(longlong *)(param_2 + lVar2 * 8) + (longlong)local_1c * 8) = param_3;
  FUN_0041c380(param_1);
  return;
}

