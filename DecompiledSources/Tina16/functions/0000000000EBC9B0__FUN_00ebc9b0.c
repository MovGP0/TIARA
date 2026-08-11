/* Ghidra address: 00ebc9b0 */
/* Ghidra symbol: FUN_00ebc9b0 */


void FUN_00ebc9b0(longlong param_1,undefined8 param_2,undefined1 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  plVar1 = *(longlong **)(param_1 + 0x6f0);
  if ((longlong *)*param_4 == plVar1) {
    iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    if (iVar2 < 0) {
      *param_3 = 0;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                        (*(longlong **)(param_1 + 0x6f0));
      FUN_004b3cf0(*(undefined8 *)(param_1 + 0x758),local_20,uVar3);
      FUN_00eba7f0(&local_10,local_20[0]);
      FUN_00414ad0(param_4 + 8,local_10);
      *param_3 = 1;
      *(undefined4 *)(param_4 + 7) = 100;
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

