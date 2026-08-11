/* Ghidra address: 0164a8d0 */
/* Ghidra symbol: FUN_0164a8d0 */


int FUN_0164a8d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  int local_3c;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_3c = -1;
  FUN_00414480(param_3);
  iVar1 = local_3c;
  if (*(char *)(param_1 + 8) == '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                  (*(longlong **)(param_1 + 0x18),local_30,iVar4);
        if (local_30[0] != 0) {
          FUN_01b218c0(local_30[0],&local_38,param_3);
          iVar3 = FUN_00416db0(local_38,local_res10[0]);
          iVar1 = iVar4;
          if (iVar3 == 0) break;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
        iVar1 = local_3c;
      } while (iVar2 != 0);
    }
  }
  local_3c = iVar1;
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res10);
  return local_3c;
}

