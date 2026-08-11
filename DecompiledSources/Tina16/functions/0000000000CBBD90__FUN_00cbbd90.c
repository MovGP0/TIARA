/* Ghidra address: 00cbbd90 */
/* Ghidra symbol: FUN_00cbbd90 */


void FUN_00cbbd90(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 0;
  (**(code **)(*param_1 + 0x68))(param_1);
  iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  if (0 < iVar1) {
    (**(code **)(*param_2 + 0x18))(param_2,&local_48,0);
    FUN_00416dc0(local_40,local_48,1,3);
    FUN_0043ea00(local_30,local_40[0]);
    FUN_00cbafb0(param_1,local_30[0]);
    iVar1 = (**(code **)(*param_2 + 0x28))();
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2,&local_58,iVar2);
        FUN_00416dc0(&local_50,local_58,5,0x7fffffff);
        (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],local_50);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414560(&local_58,4);
  FUN_00414480(local_30);
  return;
}

