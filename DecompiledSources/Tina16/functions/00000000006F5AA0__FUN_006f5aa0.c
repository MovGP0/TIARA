/* Ghidra address: 006f5aa0 */
/* Ghidra symbol: FUN_006f5aa0 */


void FUN_006f5aa0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x500) + 0x10) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_006edb10(*(undefined8 *)(param_1 + 0x500),iVar5);
      iVar1 = FUN_006ed780(uVar3);
      if (iVar1 != -1) {
        uVar3 = FUN_006edb10(*(undefined8 *)(param_1 + 0x500),iVar5);
        iVar1 = FUN_006ed780(uVar3);
        if (iVar1 != -2) {
          uVar3 = FUN_006edb10(*(undefined8 *)(param_1 + 0x500),iVar5);
          uVar4 = FUN_006edb10(*(undefined8 *)(param_1 + 0x500),iVar5);
          uVar2 = FUN_006ed780(uVar4);
          uVar2 = thunk_FUN_03f3ed25(uVar2,param_2,param_3);
          FUN_006ed840(uVar3,uVar2);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_0065aec0(param_1,param_2,param_3,param_4);
  return;
}

