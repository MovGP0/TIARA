/* Ghidra address: 0141d3b0 */
/* Ghidra symbol: FUN_0141d3b0 */


void FUN_0141d3b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),0,0,L"Name");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),1,0,L"Value");
  FUN_01d43710(&local_30,1);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),0,1,local_30);
  FUN_01d43710(&local_38,2);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),0,2,local_38);
  FUN_01d43710(&local_40,3);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),0,3,local_40);
  FUN_01d43710(&local_48,4);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),0,4,local_48);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x18))
                (*(longlong **)(param_1 + 0x6d0),&local_58,iVar3);
      FUN_00648720(&local_50,local_58);
      iVar2 = FUN_0043fc50(local_50,0);
      (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x18))
                (*(longlong **)(param_1 + 0x6d0),&local_68,iVar3);
      FUN_00648780(&local_60,local_68);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),1,iVar2 + 1,local_60);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0064cf60(param_1,0x3f5);
  FUN_00414560(&local_68,8);
  return;
}

