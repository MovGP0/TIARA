/* Ghidra address: 01629130 */
/* Ghidra symbol: FUN_01629130 */


undefined8 FUN_01629130(undefined8 param_1,longlong param_2,longlong *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  iVar2 = (**(code **)(*param_3 + 0x1c8))(param_3);
  FUN_00414480(&local_20);
  iVar3 = 0;
  iVar2 = iVar2 + -1;
  sVar1 = (**(code **)(*param_3 + 0xf8))(param_3);
  if ((sVar1 == 0x85) || (sVar1 == 0x84)) {
    iVar3 = (**(code **)(**(longlong **)(param_2 + 0x6b0) + 0x28))(*(longlong **)(param_2 + 0x6b0));
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0x6b0) + 0x28))(*(longlong **)(param_2 + 0x6b0));
    iVar2 = iVar2 + 1;
  }
  if (iVar3 <= iVar2) {
    iVar2 = (iVar2 - iVar3) + 1;
    do {
      iVar4 = (**(code **)(*param_3 + 0x210))(param_3,iVar3);
      if (iVar4 == param_4) {
        if (local_20 != 0) {
          FUN_00416ad0(&local_20,&LAB_01629294);
        }
        FUN_0043f750(local_30,iVar3);
        FUN_00416ad0(&local_20,local_30[0]);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414ad0(param_1,local_20);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return param_1;
}

