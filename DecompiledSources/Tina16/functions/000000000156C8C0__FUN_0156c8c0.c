/* Ghidra address: 0156c8c0 */
/* Ghidra symbol: FUN_0156c8c0 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0156c8c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_1070;
  undefined8 local_1068;
  undefined8 local_1060;
  undefined8 local_1058;
  undefined8 local_1050;
  undefined1 local_1045 [3997];
  undefined1 local_a8;
  undefined4 local_44;
  longlong local_40 [4];
  
  local_a8 = 0;
  local_1068 = 0;
  local_1070 = 0;
  local_1058 = 0;
  local_1060 = 0;
  local_1050 = 0;
  local_40[2] = 0;
  local_40[1] = 0;
  local_40[0] = 0;
  FUN_004b3880(*(undefined8 *)(param_1 + 0x9b0),&local_1050);
  FUN_00415dd0(local_40 + 2,local_1050,0);
  uVar3 = FUN_004425e0(local_1045,local_40[2]);
  _Sensor_SetSettings(param_2,uVar3);
  FUN_004b37d0(*(undefined8 *)(param_1 + 0x920),&local_1060);
  FUN_0043e1a0(&local_1058,local_1060);
  FUN_00415dd0(local_40 + 2,local_1058,0);
  uVar3 = FUN_004425e0(local_1045,local_40[2]);
  _EEPROM_SetSettings(param_2,uVar3);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x920) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x920) + 0x18))
                (*(longlong **)(param_1 + 0x920),&local_1070,iVar5);
      FUN_0043e1a0(&local_1068,local_1070);
      FUN_00415dd0(local_40 + 1,local_1068,0);
      uVar3 = FUN_0156c7d0(param_1,iVar5,&local_44);
      FUN_013a6620(local_40,uVar3,local_44);
      iVar2 = 0;
      if (local_40[0] != 0) {
        iVar2 = *(int *)(local_40[0] + -4);
      }
      uVar3 = FUN_00409570((longlong)(iVar2 + 1));
      uVar4 = FUN_004425e0(uVar3,local_40[0]);
      _EEPROM_SetValueList(param_2,uVar4);
      FUN_004095f0(uVar3);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_1070,5);
  FUN_00414590(local_40,3);
  return;
}

