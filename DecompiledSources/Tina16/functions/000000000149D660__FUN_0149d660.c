/* Ghidra address: 0149d660 */
/* Ghidra symbol: FUN_0149d660 */


void FUN_0149d660(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_30 [2];
  undefined2 local_1a [5];
  
  local_30[0] = 0;
  FUN_01cf0710(param_1,param_2);
  iVar2 = FUN_01d31a40(*param_2);
  if (iVar2 == 0) {
    local_1a[0] = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
                            (*(longlong **)(param_1 + 0x28),*param_2);
    FUN_01d311c0(*param_2,local_1a,2);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))(*(longlong **)(param_1 + 0x28),*param_2);
    bVar1 = *(byte *)(*param_2 + 0x78);
    if (bVar1 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_01b240b0(local_30,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
      FUN_01d313e0(*param_2,local_30[0]);
    }
  }
  FUN_00414480(local_30);
  return;
}

