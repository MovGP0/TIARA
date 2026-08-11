/* Ghidra address: 01a34170 */
/* Ghidra symbol: FUN_01a34170 */


void FUN_01a34170(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0043f750(&local_10,param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb0))
                    (*(longlong **)(param_1 + 0x38),local_10);
  if (iVar1 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))(*(longlong **)(param_1 + 0x38),local_10);
  }
  FUN_0043f750(&local_10,param_3);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb0))
                    (*(longlong **)(param_1 + 0x38),local_10);
  if (iVar1 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))(*(longlong **)(param_1 + 0x38),local_10);
  }
  uVar2 = FUN_01a32ef0(&DAT_01a30e90,1,param_2,param_3,param_4);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),uVar2);
  FUN_00414480(&local_10);
  return;
}

