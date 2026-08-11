/* Ghidra address: 00c0a430 */
/* Ghidra symbol: FUN_00c0a430 */


void FUN_00c0a430(longlong param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  int iStack_34;
  undefined8 local_30;
  
  local_30 = FUN_00bfaa90(param_1);
  iStack_34 = (int)((ulonglong)local_30 >> 0x20);
  iStack_34 = iStack_34 + param_2;
  local_38 = (undefined4)local_30;
  if (param_2 < 0) {
    if (iStack_34 < 1) {
      iStack_34 = 1;
    }
  }
  else {
    iVar4 = FUN_00c11080(param_1,iStack_34);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
    if ((iVar5 < iVar4) && (iStack_34 = FUN_00c10fb0(param_1), iStack_34 < 1)) {
      iStack_34 = 1;
    }
  }
  if ((local_30._4_4_ != iStack_34) && (uVar6 = FUN_00c09df0(param_1), (uVar6 & 0x800) != 0)) {
    local_38 = *(undefined4 *)(param_1 + 0x4c8);
  }
  local_48 = FUN_00c0ee50(param_1,&local_38);
  uVar1 = *(undefined4 *)(param_1 + 0x4c8);
  FUN_00bf3750(param_1);
  FUN_00c0a550(param_1,param_1 + 0x4b4,&local_48,param_3);
  cVar2 = FUN_00c10e70(param_1);
  if (cVar2 != '\0') {
    uVar7 = FUN_00c0ec90(param_1,&local_48);
    local_40._0_4_ = (int)uVar7;
    if (((int)local_40 == 1) &&
       (local_40._4_4_ = (int)((ulonglong)uVar7 >> 0x20), local_40._4_4_ != iStack_34)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x608) = uVar3;
    local_40 = uVar7;
  }
  FUN_00bf28a0(param_1);
  *(undefined4 *)(param_1 + 0x4c8) = uVar1;
  return;
}

