/* Ghidra address: 017aeae0 */
/* Ghidra symbol: FUN_017aeae0 */


void FUN_017aeae0(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  ulonglong uVar3;
  short sVar4;
  
  sVar4 = (short)param_3;
  uVar2 = 0;
  do {
    uVar3 = (ulonglong)uVar2;
    uVar1 = FUN_017ae4e0(param_1,param_2 + uVar3 * 8);
    *(undefined8 *)(param_2 + uVar3 * 8) = uVar1;
    uVar1 = FUN_00498310(DAT_01fa23a8 * (*(int *)(param_1 + 0x14) + *(int *)(param_2 + uVar3 * 8)),
                         DAT_01fa23ac *
                         (*(int *)(param_1 + 0x18) + *(int *)(param_2 + 4 + uVar3 * 8)));
    *(undefined8 *)(param_2 + uVar3 * 8) = uVar1;
    uVar2 = uVar2 + 1;
    sVar4 = sVar4 + -1;
  } while (sVar4 != 0);
  uVar1 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
  thunk_FUN_04159037(uVar1,param_2,param_3);
  return;
}

