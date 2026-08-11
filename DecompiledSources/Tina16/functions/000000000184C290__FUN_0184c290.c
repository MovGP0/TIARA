/* Ghidra address: 0184c290 */
/* Ghidra symbol: FUN_0184c290 */


void FUN_0184c290(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 *local_30 [2];
  
  local_30[0] = (undefined2 *)0x0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_0046c3f0(local_30,param_2);
  lVar2 = FUN_00414de0(*(longlong *)(param_1 + 0x30) + 0x88);
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))(*(longlong **)(param_1 + 0xa0),&local_48);
  iVar1 = FUN_00462650(&local_48);
  *(undefined2 *)(lVar2 + -2 + (longlong)iVar1 * 2) = *local_30[0];
  FUN_00460ba0(&local_48);
  FUN_00414480(local_30);
  return;
}

