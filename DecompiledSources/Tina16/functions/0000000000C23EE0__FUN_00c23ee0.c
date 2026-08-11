/* Ghidra address: 00c23ee0 */
/* Ghidra symbol: FUN_00c23ee0 */


void FUN_00c23ee0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  int iVar9;
  
  iVar3 = FUN_00c1aa10();
  iVar9 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar4 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x50),
                           iVar9);
      lVar5 = FUN_00c29d60(uVar4);
      if (lVar5 == param_1) {
        lVar5 = FUN_00c2fce0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x50),iVar9);
        pbVar8 = *(byte **)(lVar5 + 0x30);
        lVar5 = FUN_00c2fce0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x50),iVar9);
        lVar6 = FUN_00c2fce0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x50),iVar9);
        pbVar1 = pbVar8 + (uint)*(ushort *)(lVar5 + 0x4d) * (uint)*(ushort *)(lVar6 + 0x4f);
        for (; pbVar8 < pbVar1; pbVar8 = pbVar8 + 1) {
          *pbVar8 = *(byte *)(param_2 + (ulonglong)*pbVar8);
        }
        uVar4 = FUN_00c2fce0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x50),iVar9);
        cVar2 = FUN_00c2a4a0(uVar4);
        if (cVar2 != '\0') {
          lVar5 = FUN_00c2fce0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x50),iVar9);
          lVar6 = FUN_00c2fce0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x50),iVar9);
          uVar7 = FUN_00c2e3e0(*(undefined8 *)(lVar6 + 0x60));
          FUN_00c2e3f0(*(undefined8 *)(lVar5 + 0x60),*(undefined1 *)(param_2 + (uVar7 & 0xff)));
        }
      }
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

