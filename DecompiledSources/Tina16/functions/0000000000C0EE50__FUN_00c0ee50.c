/* Ghidra address: 00c0ee50 */
/* Ghidra symbol: FUN_00c0ee50 */


undefined8 FUN_00c0ee50(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong local_38;
  undefined8 local_30;
  
  local_38 = 0;
  uVar5 = FUN_00bf2c10(param_1);
  FUN_005ff880(*(undefined8 *)(param_1 + 0x490),uVar5);
  cVar1 = FUN_00c10e70(param_1);
  if (cVar1 == '\0') {
    local_30 = *param_2;
  }
  else {
    local_30 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x20))
                         (*(longlong **)(param_1 + 0x5f8),param_2);
  }
  if (*(char *)(param_1 + 0x498) != '\0') {
    uVar3 = FUN_00be09c0(*(undefined8 *)(param_1 + 0x4a8),*(undefined4 *)((longlong)param_2 + 4));
    local_30 = CONCAT44(uVar3,(int)local_30);
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
  if (local_30._4_4_ <= iVar4) {
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
              (*(longlong **)(param_1 + 0x4e8),&local_38,local_30._4_4_ + -1);
    iVar4 = 0;
    if (local_38 != 0) {
      iVar4 = *(int *)(local_38 + -4);
    }
    iVar7 = 0;
    iVar6 = 0;
    while (iVar7 < (int)local_30) {
      iVar6 = iVar6 + 1;
      if ((iVar4 < iVar6) || (*(short *)(local_38 + -2 + (longlong)iVar6 * 2) != 9)) {
        if (iVar4 < iVar6) {
          iVar7 = iVar7 + 1;
        }
        else {
          uVar3 = FUN_00bd4cc0(*(undefined8 *)(param_1 + 0x620),
                               *(undefined2 *)(local_38 + -2 + (longlong)iVar6 * 2));
          uVar2 = FUN_00bf1610(uVar3,*(undefined2 *)(param_1 + 0x4d4));
          iVar7 = iVar7 + (uint)uVar2;
        }
      }
      else {
        iVar7 = iVar7 + (*(int *)(param_1 + 0x618) - iVar7 % *(int *)(param_1 + 0x618));
      }
    }
    local_30 = CONCAT44(local_30._4_4_,iVar6);
  }
  FUN_00414480(&local_38);
  return local_30;
}

