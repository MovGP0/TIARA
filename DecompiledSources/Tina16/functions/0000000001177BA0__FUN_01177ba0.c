/* Ghidra address: 01177ba0 */
/* Ghidra symbol: FUN_01177ba0 */


undefined8 FUN_01177ba0(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int local_30;
  
  FUN_005fd4e0(param_2[0xf],*(undefined4 *)(*param_1 + 0xab4));
  FUN_005fd4e0(param_2[0xf],0);
  FUN_005fc860(param_2[0xe],0);
  iVar2 = *(int *)(*(longlong *)(param_2[0xe] + 0x18) + 0x28);
  iVar8 = *(int *)(*param_1 + 0xabc);
  iVar6 = 0;
  if (iVar8 - 1U < 0x80000000) {
    do {
      iVar4 = FUN_005fce00();
      lVar7 = (longlong)iVar6;
      lVar3 = *(longlong *)(*param_1 + lVar7 * 8);
      iVar5 = 0;
      if (lVar3 != 0) {
        iVar5 = *(int *)(lVar3 + -4);
      }
      uVar1 = *(ushort *)(*param_1 + 0x148);
      if (uVar1 < 100) {
        if ((uVar1 == 99) || (uVar1 == 0x43)) {
          local_30 = *(int *)(*param_1 + 0x14c + lVar7 * 4) - (iVar4 * iVar5) / 2;
        }
        else {
          if (uVar1 == 0x4c) goto LAB_01177ca0;
          if (uVar1 != 0x52) {
            return 4;
          }
LAB_01177cd6:
          local_30 = *(int *)(*param_1 + 0x14c + lVar7 * 4) - iVar4 * iVar5;
        }
      }
      else {
        if (uVar1 != 0x6c) {
          if (uVar1 != 0x72) {
            return 4;
          }
          goto LAB_01177cd6;
        }
LAB_01177ca0:
        local_30 = *(int *)(*param_1 + 0x14c + lVar7 * 4);
      }
      iVar5 = *(int *)(*param_1 + 0x600 + lVar7 * 4) - -iVar2 / 2;
      (**(code **)(*param_2 + 200))(param_2,local_30,iVar5);
      (**(code **)(*param_2 + 0x120))(param_2,local_30,iVar5,*(undefined8 *)(*param_1 + lVar7 * 8));
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return 0;
}

