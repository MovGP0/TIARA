/* Ghidra address: 01647cc0 */
/* Ghidra symbol: FUN_01647cc0 */


void FUN_01647cc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_01647a70(param_1,local_res10[0]);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))(*(longlong **)(param_1 + 0x38));
  FUN_00419260(param_1 + 0x40,&DAT_01620200,1,(longlong)iVar2);
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8) = param_3;
  FUN_00414480(local_res10);
  return;
}

