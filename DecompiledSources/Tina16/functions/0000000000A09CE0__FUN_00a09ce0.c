/* Ghidra address: 00a09ce0 */
/* Ghidra symbol: FUN_00a09ce0 */


void FUN_00a09ce0(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041ddd0(&local_10,PTR_PTR_02003ca8);
  local_20[0] = *(undefined4 *)(*param_1 + 0x28);
  local_18 = 0;
  uVar1 = FUN_0044d530(&PTR_FUN_00a09c50,1,local_10,local_20,0);
  FUN_004134c0(uVar1);
  FUN_00414480(&local_10);
  return;
}

