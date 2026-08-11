/* Ghidra address: 010bbb70 */
/* Ghidra symbol: FUN_010bbb70 */


bool FUN_010bbb70(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  FUN_0043f750(&local_28,param_3);
  FUN_00416ba0(local_20,L"Rect",local_28);
  FUN_004b4060(param_2,&local_10,local_20[0]);
  bVar3 = local_10 != 0;
  if (bVar3) {
    FUN_010ba530(&local_30,&local_10);
    uVar1 = FUN_0043fc00(local_30);
    *param_4 = uVar1;
    FUN_010ba530(&local_38,&local_10);
    iVar2 = FUN_0043fc00(local_38);
    param_4[1] = iVar2 * 6;
    FUN_010ba530(&local_40,&local_10);
    iVar2 = FUN_0043fc00(local_40);
    param_4[2] = iVar2 * 6;
    FUN_010ba530(&local_48,&local_10);
    iVar2 = FUN_0043fc00(local_48);
    param_4[3] = iVar2 * 6;
    FUN_010ba530(&local_50,&local_10);
    iVar2 = FUN_0043fc00(local_50);
    param_4[4] = iVar2 * 6;
  }
  FUN_00414560(&local_50,7);
  FUN_00414480(&local_10);
  return bVar3;
}

