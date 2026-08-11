/* Ghidra address: 00a44e70 */
/* Ghidra symbol: FUN_00a44e70 */


void FUN_00a44e70(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x90))(*(longlong **)(param_1 + 0x48));
  iVar1 = (**(code **)(*param_3 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_3 + 0x18))(param_3,&local_38,iVar2);
      FUN_00416ba0(local_30,&DAT_00a45008,local_38);
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x78))
                (*(longlong **)(param_1 + 0x48),local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x48) + 0x2c) = 0x2c;
  FUN_004b3880(*(undefined8 *)(param_1 + 0x48),&local_48);
  FUN_00416cd0(&local_40,4,param_2,&DAT_00a4501c,local_48,&LAB_00a45030);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x78))(*(longlong **)(param_1 + 0x40),local_40);
  *(undefined2 *)(*(longlong *)(param_1 + 0x48) + 0x2c) = 0x3b;
  FUN_004b3880(*(undefined8 *)(param_1 + 0x48),&local_50);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x78))(*(longlong **)(param_1 + 0x40),local_50);
  FUN_00414560(&local_50,5);
  return;
}

