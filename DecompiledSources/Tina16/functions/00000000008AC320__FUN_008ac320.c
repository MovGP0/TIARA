/* Ghidra address: 008ac320 */
/* Ghidra symbol: FUN_008ac320 */


void FUN_008ac320(longlong param_1,longlong *param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))(*(longlong **)(param_1 + 0x28));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x90))(*(longlong **)(param_1 + 0x20));
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,iVar3);
      iVar2 = 0;
      if (local_30[0] != 0) {
        iVar2 = *(int *)(local_30[0] + -4);
      }
      iVar4 = 1;
      if (0 < iVar2) {
        do {
          if (*(short *)(local_30[0] + -2 + (longlong)iVar4 * 2) == param_3) {
            FUN_00416dc0(&local_40,local_30[0],1,iVar4 + -1);
            FUN_00879190(&local_38,local_40);
            FUN_00416dc0(&local_48,local_30[0],iVar4 + 1,0x7fffffff);
            FUN_008abcc0(param_1,local_38,local_48,0);
            break;
          }
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_48,4);
  return;
}

