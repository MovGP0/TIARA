/* Ghidra address: 010bb8c0 */
/* Ghidra symbol: FUN_010bb8c0 */


bool FUN_010bb8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 longlong param_5)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = (undefined2 *)0x0;
  local_40 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  FUN_0043f750(&local_28,param_4);
  FUN_00416ba0(local_20,L"Field",local_28);
  FUN_004b4060(param_2,&local_10,local_20[0]);
  bVar3 = local_10 != 0;
  if (bVar3) {
    FUN_010ba530(&local_30,&local_10);
    uVar1 = FUN_0043fc00(local_30);
    FUN_010bbee0(param_1,param_2,uVar1,param_5);
    FUN_010ba530(&local_40,&local_10);
    FUN_00416dc0(&local_38,local_40,1,1);
    *(undefined2 *)(param_5 + 0x20) = *local_38;
    FUN_010ba530(&local_48,&local_10);
    iVar2 = FUN_0043fc00(local_48);
    *(int *)(param_5 + 0x18) = iVar2 * 6;
    FUN_010ba530(&local_50,&local_10);
    iVar2 = FUN_0043fc00(local_50);
    *(int *)(param_5 + 0x1c) = iVar2 * 6;
    FUN_010ba530(&local_58,&local_10);
    uVar1 = FUN_0043fc00(local_58);
    *(undefined4 *)(param_5 + 0x24) = uVar1;
    FUN_0043f750(&local_70,param_4);
    FUN_00416ba0(&local_68,&LAB_010bbb64,local_70);
    FUN_004b4060(param_3,&local_60,local_68);
    FUN_00414ad0(param_5 + 0x28,local_60);
  }
  FUN_00414560(&local_70,0xb);
  FUN_00414480(&local_10);
  return bVar3;
}

