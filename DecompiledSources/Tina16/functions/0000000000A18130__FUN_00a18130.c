/* Ghidra address: 00a18130 */
/* Ghidra symbol: FUN_00a18130 */


void FUN_00a18130(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,longlong param_5
                 ,uint *param_6,int param_7)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x260);
  iVar8 = *(int *)(lVar1 + 0xb8);
  iVar3 = *(int *)(param_1 + 0x19c);
  if (iVar3 <= iVar8) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar4 = *(longlong *)(param_1 + 0x130);
      lVar6 = 0;
      lVar5 = 0x18;
      do {
        (**(code **)(lVar1 + 0x68 + lVar6 * 8))
                  (param_1,lVar4,
                   *(longlong *)(param_2 + lVar6 * 8) +
                   (ulonglong)(uint)(*(int *)(lVar1 + 0xc0 + lVar6 * 4) * *param_3) * 8,
                   lVar1 + lVar5);
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + 0x60;
        lVar5 = lVar5 + 8;
      } while (lVar6 < *(int *)(param_1 + 0x38));
      iVar3 = *(int *)(param_1 + 0x19c);
    }
    *(undefined4 *)(lVar1 + 0xb8) = 0;
    iVar8 = 0;
  }
  uVar2 = iVar3 - iVar8;
  if (*(uint *)(lVar1 + 0xbc) < (uint)(iVar3 - iVar8)) {
    uVar2 = *(uint *)(lVar1 + 0xbc);
  }
  uVar7 = param_7 - *param_6;
  if (uVar2 <= uVar7) {
    uVar7 = uVar2;
  }
  (**(code **)(*(longlong *)(param_1 + 0x268) + 8))
            (param_1,lVar1 + 0x18,iVar8,param_5 + (ulonglong)*param_6 * 8,uVar7);
  *param_6 = *param_6 + uVar7;
  *(int *)(lVar1 + 0xbc) = *(int *)(lVar1 + 0xbc) - uVar7;
  iVar8 = uVar7 + *(int *)(lVar1 + 0xb8);
  *(int *)(lVar1 + 0xb8) = iVar8;
  if (*(int *)(param_1 + 0x19c) <= iVar8) {
    *param_3 = *param_3 + 1;
  }
  return;
}

