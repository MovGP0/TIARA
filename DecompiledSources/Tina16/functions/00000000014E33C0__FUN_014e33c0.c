/* Ghidra address: 014e33c0 */
/* Ghidra symbol: FUN_014e33c0 */


bool FUN_014e33c0(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  bool local_9;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *param_3 = 0;
  local_9 = false;
  while ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x9c0),
         *param_3 < *(int *)(lVar1 + 0x10) && (local_9 == false))) {
    uVar3 = FUN_004aeac0(lVar1,*param_3);
    *(undefined8 *)(param_1 + 0x1b0) = uVar3;
    iVar2 = FUN_00416db0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 8) + 0x98),
                         local_res10[0]);
    local_9 = iVar2 == 0;
    if (!local_9) {
      *param_3 = *param_3 + 1;
    }
  }
  FUN_00414480(local_res10);
  return local_9;
}

