/* Ghidra address: 00c23da0 */
/* Ghidra symbol: FUN_00c23da0 */


void FUN_00c23da0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  if (-1 < iVar6 + -1) {
    piVar2 = (int *)(param_2 + 4);
    do {
      *piVar2 = iVar8;
      piVar2[-1] = 0;
      iVar8 = iVar8 + 1;
      piVar2 = piVar2 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = FUN_00c1aa10();
  iVar8 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x50),
                           iVar8);
      lVar4 = FUN_00c29d60(uVar3);
      if (lVar4 == param_1) {
        lVar4 = FUN_00c2fce0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x50),iVar8);
        pbVar7 = *(byte **)(lVar4 + 0x30);
        lVar4 = FUN_00c2fce0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x50),iVar8);
        lVar5 = FUN_00c2fce0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x50),iVar8);
        pbVar1 = pbVar7 + (uint)*(ushort *)(lVar4 + 0x4d) * (uint)*(ushort *)(lVar5 + 0x4f);
        for (; pbVar7 < pbVar1; pbVar7 = pbVar7 + 1) {
          piVar2 = (int *)(param_2 + (ulonglong)*pbVar7 * 8);
          *piVar2 = *piVar2 + 1;
        }
      }
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

