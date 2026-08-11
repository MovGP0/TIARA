/* Ghidra address: 0045c5c0 */
/* Ghidra symbol: FUN_0045c5c0 */


void FUN_0045c5c0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  iVar6 = *(int *)(param_1 + 0xa0);
  if (iVar6 < 4) {
    puVar1 = (undefined8 *)(param_1 + 0x18 + (longlong)iVar6 * 0x20);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
  }
  else {
    lVar7 = 0;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x98) + -8);
    }
    if (iVar6 + -4 == lVar7) {
      lVar7 = 0;
      if (*(longlong *)(param_1 + 0x98) != 0) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x98) + -8);
      }
      if (lVar7 < 4) {
        FUN_00419260(param_1 + 0x98,&DAT_0043d228,1,4);
      }
      else {
        lVar7 = 0;
        if (*(longlong *)(param_1 + 0x98) != 0) {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x98) + -8);
        }
        FUN_00419260(param_1 + 0x98,&DAT_0043d228,1,lVar7 * 2);
      }
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + (longlong)(iVar6 + -4) * 0x20);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
  }
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  return;
}

