/* Ghidra address: 008955f0 */
/* Ghidra symbol: FUN_008955f0 */


void FUN_008955f0(undefined8 param_1,undefined2 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_20;
  int local_14;
  undefined8 *local_10;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  uVar2 = (**(code **)PTR_PTR_02002a88)(param_2);
  local_10 = (undefined8 *)(**(code **)PTR_PTR_02004ed8)(uVar2,0);
  if (local_10 == (undefined8 *)0x0) {
    FUN_0089ca80(param_1);
  }
  FUN_004b3260(param_3);
  FUN_004167a0(&local_38,*local_10);
  (**(code **)(*param_3 + 0x78))(param_3,local_38);
  local_14 = 0;
  local_20 = local_10[1];
  while (lVar1 = *(longlong *)(local_20 + (longlong)local_14 * 8), lVar1 != 0) {
    FUN_004167a0(&local_40,lVar1);
    (**(code **)(*param_3 + 0x78))(param_3,local_40);
    local_14 = local_14 + 1;
  }
  FUN_004b3390(param_3);
  FUN_00414560(&local_40,2);
  return;
}

