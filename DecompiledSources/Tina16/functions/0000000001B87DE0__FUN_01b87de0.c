/* Ghidra address: 01b87de0 */
/* Ghidra symbol: FUN_01b87de0 */


undefined1 FUN_01b87de0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong local_res10 [3];
  undefined1 local_41;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_41 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x18))
                (*(longlong **)(param_1 + 0x3c8),local_40,iVar3);
      FUN_00414ad0(param_3,local_40[0]);
      FUN_01b807d0(local_30,*param_3);
      if (local_30[0] == local_res10[0]) {
        bVar4 = true;
      }
      else if ((local_30[0] == 0) || (local_res10[0] == 0)) {
        bVar4 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_30[0],local_res10[0]);
        bVar4 = iVar2 == 0;
      }
      if (bVar4) {
        local_41 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_41;
}

