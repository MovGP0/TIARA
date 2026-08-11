/* Ghidra address: 01530bb0 */
/* Ghidra symbol: FUN_01530bb0 */


void FUN_01530bb0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043e1a0(local_20,local_res10[0]);
  FUN_00414ad0(param_1 + 0x968,local_20[0]);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x958) + 0x4e8);
  (**(code **)(*plVar1 + 0xd8))(plVar1,*(undefined8 *)(param_1 + 0x968));
  FUN_00c0dad0(*(undefined8 *)(param_1 + 0x958),0);
  *(undefined1 *)(param_1 + 0x1c49) = 1;
  FUN_00441920(&local_40,*(undefined8 *)(param_1 + 0x968));
  local_38 = local_40;
  local_30 = 0x11;
  FUN_00442f70(&local_28,*(undefined8 *)(param_1 + 0x970),&local_38,0);
  FUN_0064de00(param_1,local_28);
  FUN_019953b0(*(undefined8 *)(param_1 + 0x1c28));
  FUN_00414ad0(*(longlong *)(param_1 + 0x1c28) + 0x360,*(undefined8 *)(param_1 + 0x968));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x920),0);
  FUN_01d0e500();
  PTR_DAT_02004010[0x814] = *(undefined1 *)(param_1 + 0x119c);
  PTR_DAT_02004010[0x815] = *(undefined1 *)(param_1 + 0x119d);
  PTR_DAT_02004010[0x816] = *(undefined1 *)(param_1 + 0x119e);
  FUN_00417c40(param_1 + 0x12c0,PTR_DAT_02004010,&DAT_01d0d0b8);
  (**(code **)(**(longlong **)(param_1 + 0x930) + 0x278))(*(longlong **)(param_1 + 0x930));
  FUN_01530440(param_1,*(undefined8 *)(param_1 + 0x968));
  FUN_00414480(&local_40);
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return;
}

