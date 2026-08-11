/* Ghidra address: 008e7510 */
/* Ghidra symbol: FUN_008e7510 */


undefined8 FUN_008e7510(undefined8 param_1,longlong param_2,int param_3,int *param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  iVar4 = (iVar4 - param_3) + 1;
  if (iVar4 < 1) {
    *param_4 = 0;
    *param_5 = 0;
    uVar3 = 3;
  }
  else {
    bVar1 = *(byte *)(param_2 + -1 + (longlong)param_3);
    if (bVar1 < 0x80) {
      *param_4 = 1;
      *param_5 = (uint)bVar1;
      uVar3 = 0;
    }
    else if ((bVar1 & 0xc0) == 0x80) {
      *param_4 = 1;
      *param_5 = (uint)bVar1;
      uVar3 = 1;
    }
    else {
      if ((bVar1 & 0x20) == 0) {
        *param_4 = 2;
        uVar6 = (uint)(bVar1 & 0x1f);
      }
      else if ((bVar1 & 0x10) == 0) {
        *param_4 = 3;
        uVar6 = (uint)(bVar1 & 0xf);
      }
      else {
        if ((bVar1 & 8) != 0) {
          *param_4 = 1;
          *param_5 = (uint)bVar1;
          return 1;
        }
        *param_4 = 4;
        uVar6 = (uint)(bVar1 & 7);
      }
      if (iVar4 < *param_4) {
        *param_5 = (uint)bVar1;
        uVar3 = 2;
      }
      else {
        iVar5 = *param_4 + -1;
        iVar4 = 1;
        if (0 < iVar5) {
          do {
            bVar2 = *(byte *)(param_2 + -1 + (longlong)(param_3 + iVar4));
            if ((bVar2 & 0xc0) != 0x80) {
              *param_4 = 1;
              *param_5 = (uint)bVar1;
              return 1;
            }
            uVar6 = uVar6 << 6 | (uint)(bVar2 & 0x3f);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *param_5 = uVar6;
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

