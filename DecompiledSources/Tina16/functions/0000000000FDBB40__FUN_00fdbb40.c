/* Ghidra address: 00fdbb40 */
/* Ghidra symbol: FUN_00fdbb40 */


void FUN_00fdbb40(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_00414610(param_5);
  if (param_3 == '\0') {
    FUN_00416780(&local_30,*(undefined2 *)(*(longlong *)(param_1 + 0x1f10) + 0xb0));
    FUN_00416ba0(&local_28,L"movf  ",local_30);
    FUN_00fd97d0(*(undefined8 *)(param_1 + 0x1f10),param_2,local_28,param_5,&LAB_00fdbd04);
  }
  else {
    FUN_00416780(&local_18,*(undefined2 *)(*(longlong *)(param_1 + 0x1f10) + 0xb0));
    FUN_00f61040(&local_20,*(undefined4 *)(*(longlong *)(param_1 + 0x1ed8) + 0x120));
    FUN_00416cd0(&local_10,3,L"movlw ",local_18,local_20);
    FUN_00f787d0(*(undefined8 *)(param_1 + 0x1f10),param_2,local_10);
  }
  FUN_00414560(&local_30,5);
  FUN_00414480(&param_5);
  return;
}

