/* Ghidra address: 017d2950 */
/* Ghidra symbol: FUN_017d2950 */


void FUN_017d2950(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  *(undefined1 *)(lVar1 + 0xdca) = 1;
  iVar7 = *(int *)(lVar1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xa0),iVar6);
      sVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      cVar2 = FUN_0198a580(plVar4);
      if (cVar2 == '\x04') {
        if (param_2 == '\x06') {
          if ((ushort)(sVar3 - 0x38U) < 0x40) {
            bVar8 = (1L << ((byte)(sVar3 - 0x38U) & 0x3f) & 0x200000000020U) != 0;
          }
          else {
            bVar8 = false;
          }
          if (!bVar8) goto LAB_017d29fe;
LAB_017d2a35:
          plVar4 = (longlong *)plVar4[0x33];
          uVar5 = FUN_0198d430(*(undefined8 *)(param_1 + 0xa0));
          (**(code **)(*plVar4 + 0xa8))
                    (plVar4,uVar5,*(undefined1 *)(param_1 + 0x12f2),
                     *(undefined1 *)(param_1 + 0x12f0));
        }
        else {
LAB_017d29fe:
          if (param_2 == '\b') {
            if ((ushort)(sVar3 - 0x38U) < 0x40) {
              bVar8 = (1L << ((byte)(sVar3 - 0x38U) & 0x3f) & 0x400000000040U) != 0;
            }
            else {
              bVar8 = false;
            }
            if (bVar8) goto LAB_017d2a35;
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

