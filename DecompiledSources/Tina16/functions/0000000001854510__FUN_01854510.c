/* Ghidra address: 01854510 */
/* Ghidra symbol: FUN_01854510 */


void FUN_01854510(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  byte abStack_48 [8];
  undefined1 auStack_40 [16];
  
  iVar2 = (**(code **)(*param_1 + 0x48))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      puVar4 = (undefined1 *)FUN_0060a050(param_1);
      auStack_40[iVar6 % 8] = *puVar4;
      iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
      iVar5 = 0;
      if (-1 < iVar3 + -1) {
        do {
          bVar1 = puVar4[iVar5];
          abStack_48[iVar5 % 8] = bVar1;
          if (bVar1 < (byte)(&DAT_01fadee8)[(longlong)(iVar6 % 8) + (longlong)(iVar5 % 8) * 8]) {
            puVar4[iVar5] = 0;
          }
          else {
            puVar4[iVar5] = 0xff;
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

