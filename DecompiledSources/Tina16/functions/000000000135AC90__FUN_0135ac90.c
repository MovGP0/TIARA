/* Ghidra address: 0135ac90 */
/* Ghidra symbol: FUN_0135ac90 */


void FUN_0135ac90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                    (*(longlong **)(param_1 + 8),local_res10[0]);
  if (-1 < iVar1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar1);
    FUN_004095f0(uVar2);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),iVar1,0);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),iVar1);
  }
  FUN_0135a5e0(DAT_02108120,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

