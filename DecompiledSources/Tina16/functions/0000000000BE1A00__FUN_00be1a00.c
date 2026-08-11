/* Ghidra address: 00be1a00 */
/* Ghidra symbol: FUN_00be1a00 */


void FUN_00be1a00(longlong param_1)

{
  char cVar1;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  longlong *local_20;
  
  local_60 = auStack_88;
  local_30 = *(undefined8 *)(param_1 + 0x18);
  local_20 = (longlong *)FUN_0082da80(&PTR_FUN_00824f98,1,local_30);
  while( true ) {
    local_38 = local_20;
    *(int *)(local_20 + 2) = (int)local_20[2] + 1;
    if (*(int *)(local_20[1] + 0x10) <= (int)local_20[2]) break;
    local_40 = local_20[1];
    local_24 = *(undefined4 *)(*(longlong *)(local_40 + 8) + (longlong)(int)local_20[2] * 4);
    cVar1 = FUN_00be0d70(param_1,local_24,&local_28);
    if (cVar1 != '\0') {
      local_48 = *(longlong *)(param_1 + 0x10);
      *(undefined1 *)(*(longlong *)(local_48 + 8) + 0x10 + (longlong)local_28 * 0x14) = 1;
    }
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  local_50 = *(longlong *)(param_1 + 0x18);
  FUN_00597fe0(local_50 + 8);
  return;
}

