/* Ghidra address: 00c0ec90 */
/* Ghidra symbol: FUN_00c0ec90 */


undefined8 FUN_00c0ec90(longlong param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong local_38;
  undefined8 local_30;
  
  local_38 = 0;
  uVar5 = FUN_00bf2c10(param_1);
  FUN_005ff880(*(undefined8 *)(param_1 + 0x490),uVar5);
  local_30 = *(undefined8 *)param_2;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
  if (param_2[1] + -1 < iVar3) {
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
              (*(longlong **)(param_1 + 0x4e8),&local_38,param_2[1] + -1);
    iVar3 = 0;
    if (local_38 != 0) {
      iVar3 = *(int *)(local_38 + -4);
    }
    iVar7 = 0;
    iVar8 = *param_2 + -1;
    iVar6 = 1;
    if (0 < iVar8) {
      do {
        if ((iVar3 < iVar6) || (*(short *)(local_38 + -2 + (longlong)iVar6 * 2) != 9)) {
          if (iVar3 < iVar6) {
            iVar7 = iVar7 + 1;
          }
          else {
            uVar4 = FUN_00bd4cc0(*(undefined8 *)(param_1 + 0x620),
                                 *(undefined2 *)(local_38 + -2 + (longlong)iVar6 * 2));
            uVar2 = FUN_00bf1610(uVar4,*(undefined2 *)(param_1 + 0x4d4));
            iVar7 = iVar7 + (uint)uVar2;
          }
        }
        else {
          iVar7 = iVar7 + (*(int *)(param_1 + 0x618) - iVar7 % *(int *)(param_1 + 0x618));
        }
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    local_30 = CONCAT44(local_30._4_4_,iVar7 + 1);
  }
  cVar1 = FUN_00c10e70(param_1);
  if (cVar1 != '\0') {
    local_30 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x18))
                         (*(longlong **)(param_1 + 0x5f8),&local_30);
  }
  if (*(char *)(param_1 + 0x498) != '\0') {
    uVar4 = FUN_00be0920(*(undefined8 *)(param_1 + 0x4a8),local_30._4_4_);
    local_30 = CONCAT44(uVar4,(undefined4)local_30);
  }
  FUN_00414480(&local_38);
  return local_30;
}

