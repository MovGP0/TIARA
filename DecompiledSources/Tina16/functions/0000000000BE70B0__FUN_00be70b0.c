/* Ghidra address: 00be70b0 */
/* Ghidra symbol: FUN_00be70b0 */


undefined2 FUN_00be70b0(longlong param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if (0 < param_2) {
    iVar2 = FUN_00be7fe0(param_1);
    if (param_2 <= iVar2) goto LAB_00be7109;
  }
  FUN_0041ddd0(&local_10,PTR_PTR_02004940);
  FUN_004ae910(&PTR_FUN_00472dd0,local_10,(longlong)param_2);
LAB_00be7109:
  uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x20) + (longlong)(param_2 + -1) * 2);
  FUN_00414480(&local_10);
  return uVar1;
}

