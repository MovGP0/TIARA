/* Ghidra address: 005c0bc0 */
/* Ghidra symbol: FUN_005c0bc0 */


void FUN_005c0bc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = FUN_00416740(param_2);
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  lVar1 = local_20[0] + (longlong)(iVar3 + -1) * 2;
  FUN_00416780(local_30,DAT_01de68c2);
  iVar3 = FUN_004170c0(local_30[0],param_2,1);
  if (iVar3 + -1 < 0) {
    FUN_005c0950(&local_38,local_20,lVar1,0,param_2,4);
    uVar2 = FUN_0043fc00(local_38);
    **(undefined2 **)(param_1 + 0x88) = uVar2;
    FUN_005c0a30(&local_40,local_20,lVar1,&LAB_005c0ed8,DAT_01de68c4,1,1,0,param_2,2);
    uVar2 = FUN_0043fc00(local_40);
    **(undefined2 **)(param_1 + 0x90) = uVar2;
    FUN_005c0a30(&local_48,local_20,lVar1,&LAB_005c0ed8,DAT_01de68c4,1,1,0,param_2,2);
    uVar2 = FUN_0043fc00(local_48);
    **(undefined2 **)(param_1 + 0x98) = uVar2;
  }
  else {
    FUN_005c0950(&local_50,local_20,lVar1,0,param_2,4);
    uVar2 = FUN_0043fc00(local_50);
    **(undefined2 **)(param_1 + 0x88) = uVar2;
    FUN_005c0a30(&local_58,local_20,lVar1,&LAB_005c0ed8,DAT_01de68c2,1,1,0,param_2,2);
    uVar2 = FUN_0043fc00(local_58);
    **(undefined2 **)(param_1 + 0x90) = uVar2;
    FUN_005c0a30(&local_60,local_20,lVar1,&LAB_005c0ed8,DAT_01de68c2,1,1,0,param_2,2);
    uVar2 = FUN_0043fc00(local_60);
    **(undefined2 **)(param_1 + 0x98) = uVar2;
  }
  FUN_00414560(&local_60,7);
  return;
}

