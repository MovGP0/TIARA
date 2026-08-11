/* Ghidra address: 0054a840 */
/* Ghidra symbol: FUN_0054a840 */


longlong * FUN_0054a840(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    FUN_00419430(param_2,&DAT_0052f648);
  }
  else {
    uVar2 = FUN_0053c4f0(param_1 + 0x58);
    FUN_00419260(param_2,&DAT_0052f648,1,uVar2);
    iVar6 = 0;
    if (*param_2 != 0) {
      iVar6 = (int)*(undefined8 *)(*param_2 + -8);
    }
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar3 = FUN_0053c690(param_1 + 0x58);
        lVar1 = *(longlong *)(param_1 + 0x58);
        uVar4 = FUN_00545f10(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18),&PTR_FUN_005475b0
                             ,*(undefined8 *)(param_1 + 0x70),param_1 + 0x58);
        uVar4 = FUN_004113f0(uVar4,&PTR_FUN_005475b0);
        *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = uVar4;
        *(longlong *)(param_1 + 0x58) = lVar1 + (int)(uint)uVar3;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return param_2;
}

