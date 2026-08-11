/* Ghidra address: 005593a0 */
/* Ghidra symbol: FUN_005593a0 */


void FUN_005593a0(longlong param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = FUN_00559680(*(undefined8 *)(param_1 + 0x60));
  if (lVar3 == 0) {
    iVar6 = 0;
  }
  else {
    lVar3 = FUN_00559680(*(undefined8 *)(param_1 + 0x60));
    iVar6 = *(int *)(lVar3 + 0x38);
  }
  uVar2 = FUN_0053c4f0(param_2);
  *(uint *)(*(longlong *)(param_1 + 0x60) + 0x38) = iVar6 + (uVar2 & 0xffff);
  sVar1 = FUN_0053c4f0(param_2);
  if (sVar1 != -1) {
    FUN_00419260(*(longlong *)(param_1 + 0x60) + 0x30,&DAT_0052f648,1,uVar2 & 0xffff);
    uVar2 = uVar2 & 0xffff;
    iVar5 = 0;
    if (-1 < (int)(uVar2 - 1)) {
      do {
        uVar4 = FUN_00545f10(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x18),&PTR_FUN_00559170
                             ,*(undefined8 *)(param_1 + 0x60),param_2);
        uVar4 = FUN_004113f0(uVar4,&PTR_FUN_00559170);
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x30) + (longlong)iVar5 * 8) =
             uVar4;
        *(int *)(*(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x30) + (longlong)iVar5 * 8) + 0x50
                ) = iVar6;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return;
}

