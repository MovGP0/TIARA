/* Ghidra address: 018cf510 */
/* Ghidra symbol: FUN_018cf510 */


void FUN_018cf510(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x128) + 0x1b8) != 0) {
    FUN_018cf610(param_1);
    FUN_00414ad0(*(longlong *)(param_1 + 0x40) + 0x158,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x10));
    FUN_01970cf0(*(undefined8 *)(param_1 + 0x40),&local_38,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x1b8),0);
    FUN_0046c3f0(&local_20,&local_38);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18);
    (**(code **)(*plVar1 + 0x28))(plVar1,local_20,0);
  }
  FUN_00460ba0(&local_38);
  FUN_00414480(&local_20);
  return;
}

