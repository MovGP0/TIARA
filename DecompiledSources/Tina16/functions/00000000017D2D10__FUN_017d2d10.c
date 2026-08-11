/* Ghidra address: 017d2d10 */
/* Ghidra symbol: FUN_017d2d10 */


void FUN_017d2d10(longlong param_1,char param_2)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,iVar4);
      sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      cVar1 = FUN_0198a580(plVar3);
      if (cVar1 == '\x04') {
        if (param_2 == '\x06') {
          if ((ushort)(sVar2 - 0x38U) < 0x40) {
            bVar6 = (1L << ((byte)(sVar2 - 0x38U) & 0x3f) & 0x200000000020U) != 0;
          }
          else {
            bVar6 = false;
          }
          if (!bVar6) goto LAB_017d2da5;
LAB_017d2ddc:
          FUN_01755b70(plVar3[0x33]);
        }
        else {
LAB_017d2da5:
          if (param_2 == '\b') {
            if ((ushort)(sVar2 - 0x38U) < 0x40) {
              bVar6 = (1L << ((byte)(sVar2 - 0x38U) & 0x3f) & 0x400000000040U) != 0;
            }
            else {
              bVar6 = false;
            }
            if (bVar6) goto LAB_017d2ddc;
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

