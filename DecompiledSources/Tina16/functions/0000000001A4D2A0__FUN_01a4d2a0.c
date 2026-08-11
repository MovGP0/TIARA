/* Ghidra address: 01a4d2a0 */
/* Ghidra symbol: FUN_01a4d2a0 */


undefined1 FUN_01a4d2a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_59 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x18))
                (*(longlong **)(param_1 + 0x2a8),&local_38,iVar3);
      FUN_0043e1a0(local_50,local_38);
      iVar2 = FUN_004170c0(local_res10,local_50[0],1);
      if (0 < iVar2) {
        (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x18))
                  (*(longlong **)(param_1 + 0x2a0),&local_40,iVar3);
        FUN_0043e1a0(&local_58,local_40);
        iVar2 = FUN_004170c0(local_res18,local_58,1);
        if (0 < iVar2) {
          local_59 = 1;
          break;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,3);
  FUN_00414560(&local_res10,2);
  return local_59;
}

