/* Ghidra address: 00eaa2e0 */
/* Ghidra symbol: FUN_00eaa2e0 */


int FUN_00eaa2e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_54 = -1;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x28))();
  iVar4 = 0;
  iVar2 = local_54;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x130) + 0x18))
                (*(longlong **)(param_1 + 0x130),local_40,iVar4);
      iVar2 = FUN_004170c0(&LAB_00eaa4a4,local_40[0],1);
      if (iVar2 < 1) {
        FUN_0043f750(local_30,iVar4 + 1);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x130) + 0x18))
                  (*(longlong **)(param_1 + 0x130),&local_48,iVar4);
        (**(code **)(**(longlong **)(param_1 + 0x130) + 0x18))
                  (*(longlong **)(param_1 + 0x130),&local_50,iVar4);
        iVar2 = FUN_004170c0(&LAB_00eaa4a4,local_50,1);
        FUN_00416dc0(local_30,local_48,1,iVar2 + -1);
      }
      iVar3 = FUN_00416db0(local_res10[0],local_30[0]);
      iVar2 = iVar4;
      if (iVar3 == 0) break;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
      iVar2 = local_54;
    } while (iVar1 != 0);
  }
  local_54 = iVar2;
  FUN_00414560(&local_50,3);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_54;
}

