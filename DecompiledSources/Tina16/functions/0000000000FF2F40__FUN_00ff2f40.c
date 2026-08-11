/* Ghidra address: 00ff2f40 */
/* Ghidra symbol: FUN_00ff2f40 */


void FUN_00ff2f40(longlong param_1,undefined8 param_2)

{
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00416780(&local_18,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_10,3,L"MOVLW ",local_18,&DAT_00ff3204);
  FUN_00f787d0(param_1,param_2,local_10);
  FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_20,3,L"MOVWF ",local_28,L"TRISC");
  FUN_00f787d0(param_1,param_2,local_20);
  FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_30,3,L"MOVF ",local_38,L"PORTC,W");
  FUN_00f787d0(param_1,param_2,local_30);
  FUN_00416780(&local_48,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_40,3,L"MOVWF ",local_48,L"CCP_V");
  FUN_00f787d0(param_1,param_2,local_40);
  FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_50,3,L"MOVLW ",local_58,&LAB_00ff3298);
  FUN_00f787d0(param_1,param_2,local_50);
  FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_60,3,L"MOVWF ",local_68,L"TRISC");
  FUN_00f787d0(param_1,param_2,local_60);
  FUN_00414560(&local_68,0xc);
  return;
}

