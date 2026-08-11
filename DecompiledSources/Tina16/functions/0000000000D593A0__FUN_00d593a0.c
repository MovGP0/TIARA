/* Ghidra address: 00d593a0 */
/* Ghidra symbol: FUN_00d593a0 */


void FUN_00d593a0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = (**(code **)(*param_1 + 0x48))();
  iVar7 = 0;
  if (-1 < iVar1 + -1) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x60))();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar4 = FUN_0060a050(param_2,iVar6);
          iVar3 = (**(code **)(*param_1 + 0x48))(param_1);
          lVar5 = FUN_0060a050(param_1,iVar7);
          *(undefined4 *)(lVar4 + -4 + (longlong)iVar3 * 4 + (longlong)iVar7 * -4) =
               *(undefined4 *)(lVar5 + (longlong)iVar6 * 4);
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

