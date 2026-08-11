/* Ghidra address: 017b2790 */
/* Ghidra symbol: FUN_017b2790 */


ulonglong FUN_017b2790(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined3 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar2 = FUN_017afd80(param_1,param_2,param_3);
  uVar7 = (ulonglong)uVar2;
  if ((char)uVar2 != '\0') {
    uVar1 = (undefined3)(uVar2 >> 8);
    if (*(char *)(param_1 + 0x50) == '\x01') {
      FUN_00498350(local_48,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                   *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
      FUN_017ad620(&local_38,local_48);
    }
    else {
      if (*(char *)(param_1 + 0x50) != '\x02') {
        FUN_00498350(local_48,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                     *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
        FUN_017ad620(&local_38,local_48);
        thunk_FUN_04176532(&local_38,0xfffffffe,0xfffffffe);
        iVar3 = FUN_00429b10(&local_38);
        if (iVar3 == 0) {
          uVar5 = FUN_00498310(param_2,param_3);
          iVar3 = thunk_FUN_03f16006(&local_38,uVar5);
          uVar7 = (ulonglong)CONCAT31(uVar1,iVar3 == 0);
          if (iVar3 != 0) {
            return uVar7;
          }
        }
        thunk_FUN_04176532(&local_38,4,4);
        uVar5 = FUN_00498310(param_2,param_3);
        iVar3 = thunk_FUN_03f16006(&local_38,uVar5);
        return CONCAT71((int7)(uVar7 >> 8),iVar3 != 0);
      }
      iVar3 = *(int *)(param_1 + 0x18);
      iVar6 = *(int *)(param_1 + 0x48) - iVar3;
      iVar4 = *(int *)(param_1 + 0x1c);
      FUN_00498350(&local_38,iVar3 - iVar6,iVar4,iVar3 + iVar6,
                   iVar4 + (*(int *)(param_1 + 0x4c) - iVar4) * 2);
    }
    iVar3 = FUN_017ad250((double)(local_30 - local_38));
    iVar4 = FUN_017ad250((double)(local_2c - local_34));
    thunk_FUN_04176532(&local_38,-iVar3,-iVar4);
    uVar5 = thunk_FUN_0415801b(local_38,local_34,local_30,local_2c);
    iVar3 = thunk_FUN_0419b54e(uVar5,param_2,param_3);
    uVar7 = (ulonglong)CONCAT31(uVar1,iVar3 == 0);
    thunk_FUN_0416f828(uVar5);
    if (iVar3 == 0) {
      iVar3 = FUN_017ad250((double)(local_30 - local_38));
      iVar4 = FUN_017ad250((double)(local_2c - local_34));
      thunk_FUN_04176532(&local_38,iVar3 * 2,iVar4 * 2);
      uVar5 = thunk_FUN_0415801b(local_38,local_34,local_30,local_2c);
      iVar3 = thunk_FUN_0419b54e(uVar5,param_2,param_3);
      uVar7 = (ulonglong)CONCAT31(uVar1,iVar3 != 0);
      thunk_FUN_0416f828(uVar5);
    }
  }
  return uVar7;
}

