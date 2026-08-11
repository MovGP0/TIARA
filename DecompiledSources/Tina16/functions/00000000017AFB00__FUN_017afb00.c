/* Ghidra address: 017afb00 */
/* Ghidra symbol: FUN_017afb00 */


undefined4
FUN_017afb00(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  lVar1 = *(longlong *)(param_1 + 8);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_006385a0);
  if ((cVar2 == '\0') || (*(longlong *)(lVar1 + 0x98) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  if ((char)uVar4 != '\0') {
    local_50 = FUN_00498310(param_2,param_3);
    local_30 = FUN_017ae4e0(param_1,&local_50);
    local_50 = FUN_00498310(param_4,param_5);
    local_38 = FUN_017ae4e0(param_1,&local_50);
    if ((int)local_38 < (int)local_30) {
      FUN_017ad610(&local_30,&local_38);
    }
    if (local_38._4_4_ < local_30._4_4_) {
      FUN_017ad610((longlong)&local_30 + 4,(longlong)&local_38 + 4);
    }
    FUN_00498350(local_48,DAT_01fa23a8 * (*(int *)(param_1 + 0x14) + (int)local_30) + -2,
                 DAT_01fa23ac * (*(int *)(param_1 + 0x18) + local_30._4_4_) + -2,
                 DAT_01fa23a8 * (*(int *)(param_1 + 0x14) + (int)local_38) + 3,
                 DAT_01fa23ac * (*(int *)(param_1 + 0x18) + local_38._4_4_) + 3);
    uVar3 = FUN_0065b870(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x98) + 0x78));
    thunk_FUN_03a2fc9d(uVar3,local_48,0xffffffff);
  }
  return uVar4;
}

