/* Ghidra address: 010bbd50 */
/* Ghidra symbol: FUN_010bbd50 */


bool FUN_010bbd50(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  FUN_0043f750(&local_28,param_3);
  FUN_00416ba0(local_20,L"Text",local_28);
  FUN_004b4060(param_2,&local_10,local_20[0]);
  bVar3 = local_10 != 0;
  if (bVar3) {
    FUN_010ba530(&local_30,&local_10);
    uVar1 = FUN_0043fc00(local_30);
    FUN_010bbee0(param_1,param_2,uVar1,param_4);
    FUN_010ba530(&local_38,&local_10);
    iVar2 = FUN_0043fc00(local_38);
    *(int *)(param_4 + 0x18) = iVar2 * 6;
    FUN_010ba530(&local_40,&local_10);
    iVar2 = FUN_0043fc00(local_40);
    *(int *)(param_4 + 0x1c) = iVar2 * 6;
    FUN_00414ad0(param_4 + 0x20,local_10);
  }
  FUN_00414560(&local_40,5);
  FUN_00414480(&local_10);
  return bVar3;
}

