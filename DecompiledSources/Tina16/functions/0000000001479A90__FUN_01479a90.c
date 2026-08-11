/* Ghidra address: 01479a90 */
/* Ghidra symbol: FUN_01479a90 */


void FUN_01479a90(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,iVar3);
      FUN_01477740(local_30[0],&local_38,&local_40,&local_48);
      iVar2 = FUN_01477cf0(*(undefined8 *)(param_1 + 0x278),local_38,local_40);
      if (-1 < iVar2) {
        FUN_01479960(param_1,iVar2,local_38,local_40);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_48,4);
  return;
}

