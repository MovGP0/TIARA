/* Ghidra address: 00e0e4a0 */
/* Ghidra symbol: FUN_00e0e4a0 */


undefined1 FUN_00e0e4a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [4];
  undefined1 local_2c [12];
  
  local_40 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_41 = 0;
  FUN_00414480(param_3);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))
                (*(longlong **)(param_1 + 0x58),&local_40,iVar3);
      FUN_00e0e2f0(local_40,&local_38,local_2c,local_30);
      iVar2 = FUN_004170c0(local_38,local_res10[0],1);
      if (iVar2 == 1) {
        local_41 = 1;
        FUN_00414ad0(param_3,local_38);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_40,2);
  FUN_00414480(local_res10);
  return local_41;
}

