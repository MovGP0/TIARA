/* Ghidra address: 0110ae60 */
/* Ghidra symbol: FUN_0110ae60 */


undefined1 FUN_0110ae60(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined1 local_31;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *param_3 = -1;
  local_31 = 0;
  FUN_010c04f0(local_res10);
  iVar4 = *(int *)(param_1 + 0x194);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 8);
      (**(code **)(*plVar1 + 0x288))(plVar1,local_30);
      FUN_00414b50(param_1 + 0x198,local_30[0]);
      FUN_010c04f0(param_1 + 0x198);
      iVar2 = FUN_00416db0(local_res10[0],*(undefined8 *)(param_1 + 0x198));
      if (iVar2 == 0) {
        *param_3 = iVar3;
        local_31 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_31;
}

