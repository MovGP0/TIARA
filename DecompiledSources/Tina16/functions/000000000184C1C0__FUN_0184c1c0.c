/* Ghidra address: 0184c1c0 */
/* Ghidra symbol: FUN_0184c1c0 */


undefined8 FUN_0184c1c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))(*(longlong **)(param_1 + 0xa0),&local_30);
  iVar1 = FUN_00462650(&local_30);
  FUN_00416780(&local_38,
               *(undefined2 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x88) + -2 + (longlong)iVar1 * 2));
  FUN_00468a10(param_2,local_38);
  FUN_00414480(&local_38);
  FUN_00460ba0(&local_30);
  return param_2;
}

