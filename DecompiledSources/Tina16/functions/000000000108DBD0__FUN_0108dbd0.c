/* Ghidra address: 0108dbd0 */
/* Ghidra symbol: FUN_0108dbd0 */


void FUN_0108dbd0(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_006e2230(*(undefined8 *)(param_1 + 0x9f8),param_5,param_6);
  lVar2 = FUN_006e21e0(*(undefined8 *)(param_1 + 0x9f8),param_5,param_6);
  cVar1 = FUN_006dd2b0(lVar2);
  if ((cVar1 == '\0') && (param_3 == '\x01')) {
    lVar3 = FUN_006dd390(lVar2);
    FUN_00415dd0(param_1 + 0xae8,*(undefined8 *)(lVar3 + 0x10),0);
    FUN_0108daf0(local_40,*(undefined8 *)(lVar2 + 0x10));
    FUN_00414bf0(param_1 + 0xaf0,local_40[0]);
    local_48 = FUN_00498310(0,0);
    uVar4 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x9f8),&local_48);
    local_20._0_4_ = (int)uVar4;
    param_5 = param_5 + (int)local_20;
    local_20._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
    param_6 = param_6 + local_20._4_4_;
    local_20 = uVar4;
    (**(code **)(**(longlong **)(param_1 + 0xa38) + 0xa8))
              (*(longlong **)(param_1 + 0xa38),param_5,param_6);
  }
  FUN_004144d0(local_40);
  FUN_00414590(&local_30,2);
  return;
}

