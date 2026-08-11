/* Ghidra address: 00fd9e10 */
/* Ghidra symbol: FUN_00fd9e10 */


void FUN_00fd9e10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res18 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_70 = 0;
  local_78 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar2 = FUN_00fd94a0(param_1,local_res18[0]);
  iVar3 = FUN_00fd97b0(param_1,uVar2);
  FUN_00fd97c0(param_1,iVar3);
  *(undefined4 *)(param_1 + 0x44 + (longlong)iVar3 * 4) = param_4;
  FUN_00fd9a10(param_1,param_2,1);
  FUN_00fd96b0(param_1,local_20,iVar3);
  uVar4 = FUN_00442620(param_1 + 0xb2,local_20[0]);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x10),uVar4);
  if (cVar1 == '\0') {
    FUN_00416780(&local_60,*(undefined2 *)(param_1 + 0xb0));
    FUN_00f61040(&local_68,param_4);
    FUN_00416cd0(&local_58,3,L"movlw ",local_60,local_68);
    FUN_00f787d0(param_1,param_2,local_58);
    FUN_00416780(&local_78,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416ba0(&local_70,L"TRIS  ",local_78);
    FUN_00fd97d0(param_1,param_2,local_70,local_res18[0],0);
  }
  else {
    FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
    FUN_00f61040(&local_40,param_4);
    FUN_00416cd0(local_30,3,L"movlw ",local_38,local_40);
    FUN_00f787d0(param_1,param_2,local_30[0]);
    FUN_00416780(&local_50,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416ba0(&local_48,L"movwf ",local_50);
    FUN_00fd97d0(param_1,param_2,local_48,local_20[0],0);
  }
  FUN_00414560(&local_78,10);
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return;
}

