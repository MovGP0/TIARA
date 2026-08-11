/* Ghidra address: 0108dd40 */
/* Ghidra symbol: FUN_0108dd40 */


void FUN_0108dd40(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x260))(*(longlong **)(param_1 + 0x9b0));
  if ((-1 < iVar1) && (param_3 == '\x01')) {
    local_30[0] = FUN_00498310(0,0);
    uVar3 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x9f8),local_30);
    local_20._0_4_ = (int)uVar3;
    iVar1 = (int)local_20 + 1;
    local_20._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
    param_6 = param_6 + local_20._4_4_;
    local_20 = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0xa48) + 0xa8))
              (*(longlong **)(param_1 + 0xa48),iVar1,param_6);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x260))(*(longlong **)(param_1 + 0x9b0))
    ;
    (**(code **)(**(longlong **)(param_1 + 3000) + 0x18))
              (*(longlong **)(param_1 + 3000),&local_38,uVar2);
    FUN_00415dd0(param_1 + 0xae0,local_38,0);
  }
  FUN_00414480(&local_38);
  return;
}

