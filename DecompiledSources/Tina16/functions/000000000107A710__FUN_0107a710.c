/* Ghidra address: 0107a710 */
/* Ghidra symbol: FUN_0107a710 */


void FUN_0107a710(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  short *local_38;
  undefined8 local_30;
  
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = (short *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0xb78) + 0x90))(*(longlong **)(param_1 + 0xb78));
  FUN_010b1c70(*(undefined8 *)(param_1 + 0xac8),*(undefined8 *)(param_1 + 0xb40));
  FUN_00416ba0(&local_40,*(undefined8 *)(param_1 + 0xb40),L"\\*.h");
  plVar3 = (longlong *)FUN_01603790(local_40,0x20);
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_30,iVar4);
      FUN_00441710(&local_38,local_30);
      FUN_00450070(&local_48,local_38,*(undefined8 *)(param_1 + 0xb40),0,1);
      FUN_00414b50(&local_38,local_48);
      if (local_38 != (short *)0x0) {
        if (*local_38 == 0x5c) {
          FUN_00416e20(&local_38,1,1);
        }
        iVar2 = 0;
        if (local_38 != (short *)0x0) {
          iVar2 = *(int *)(local_38 + -2);
        }
        if (local_38[(longlong)iVar2 + -1] == 0x5c) {
          FUN_00416e20(&local_38,iVar2,1);
        }
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0xb78) + 0xb0))
                          (*(longlong **)(param_1 + 0xb78),local_38);
        if (iVar2 == -1) {
          (**(code **)(**(longlong **)(param_1 + 0xb78) + 0x78))
                    (*(longlong **)(param_1 + 0xb78),local_38);
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_48,4);
  return;
}

