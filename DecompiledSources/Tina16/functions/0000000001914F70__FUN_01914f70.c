/* Ghidra address: 01914f70 */
/* Ghidra symbol: FUN_01914f70 */


void FUN_01914f70(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                 char param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_40 = 0;
  local_38 = 0;
  if (param_5 != '\0') {
    (**(code **)(*param_2 + 0xb8))(param_2,param_3);
  }
  iVar1 = (**(code **)(*param_4 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_0043f750(&local_38,iVar3);
      FUN_00416ba0(local_30,L"Items",local_38);
      (**(code **)(*param_4 + 0x18))(param_4,&local_40,iVar3);
      (**(code **)(*param_2 + 0x18))(param_2,param_3,local_30[0],local_40);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar2 = (**(code **)(*param_4 + 0x28))(param_4);
  (**(code **)(*param_2 + 0x28))(param_2,param_3,L"Count",uVar2);
  FUN_00414560(&local_40,3);
  return;
}

