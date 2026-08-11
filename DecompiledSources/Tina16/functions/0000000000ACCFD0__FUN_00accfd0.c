/* Ghidra address: 00accfd0 */
/* Ghidra symbol: FUN_00accfd0 */


void FUN_00accfd0(longlong param_1,undefined8 param_2,undefined1 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  int local_44;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  longlong local_30;
  int local_28 [2];
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_50 = auStack_78;
  local_30 = 0;
  local_38 = 0;
  FUN_00414b50(&local_30,param_2);
  if (local_30 == 0) {
    FUN_00414b50(&local_30,&DAT_00acd1f8);
  }
  local_18 = FUN_00410e60(&DAT_00ac72b0,1);
  if (param_4 == 0) {
    FUN_00414480(&local_38);
  }
  else {
    FUN_004b4060(param_4,&local_38,L"Value");
  }
  if (local_38 == 0) {
    FUN_00414ad0(local_18 + 8,local_30);
  }
  else {
    FUN_00414ad0(local_18 + 8,local_38);
  }
  *(undefined1 *)(local_18 + 0x10) = param_3;
  *(longlong *)(local_18 + 0x18) = param_4;
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x80))
            (*(longlong **)(param_1 + 0x140),local_30,local_18);
  local_10 = thunk_FUN_040ef593(0);
  uVar1 = FUN_005fc8c0(*(undefined8 *)(param_1 + 0x148));
  local_20 = thunk_FUN_041a19a1(local_10,uVar1);
  local_3c = 0;
  if (local_30 != 0) {
    local_3c = *(undefined4 *)(local_30 + -4);
  }
  uVar1 = FUN_00416740(local_30);
  thunk_FUN_0418ae1a(local_10,uVar1,local_3c,local_28);
  thunk_FUN_041a19a1(local_10,local_20);
  thunk_FUN_041a9b5c(0,local_10);
  local_40 = *(int *)(param_1 + 0x154);
  local_44 = local_40;
  if (local_40 <= local_28[0]) {
    local_44 = local_28[0];
  }
  *(int *)(param_1 + 0x154) = local_44;
  FUN_00414560(&local_38,2);
  return;
}

