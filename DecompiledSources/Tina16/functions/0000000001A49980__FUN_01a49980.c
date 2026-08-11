/* Ghidra address: 01a49980 */
/* Ghidra symbol: FUN_01a49980 */


void FUN_01a49980(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  iVar2 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar1 <= iVar2) break;
    (**(code **)(*param_2 + 0x18))(param_2,&local_20,iVar2);
    iVar1 = FUN_004170c0(L"##CALCMARKER##",local_20,1);
    if ((iVar1 < 1) || (*(int *)(*(longlong *)(param_1 + 0x2968) + 0xb4) < 1)) {
      iVar1 = FUN_004170c0(L"##CALCMARKER##",local_20,1);
      if (iVar1 < 1) {
        iVar2 = iVar2 + 1;
      }
      else {
        FUN_00450070(local_30,local_20,L"##CALCMARKER##",0,1);
        FUN_00414b50(&local_20,local_30[0]);
        (**(code **)(*param_2 + 0x40))(param_2,iVar2,local_20);
        iVar2 = iVar2 + 1;
      }
    }
    else {
      (**(code **)(*param_2 + 0x98))(param_2,iVar2);
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

