/* Ghidra address: 01aacbb0 */
/* Ghidra symbol: FUN_01aacbb0 */


uint FUN_01aacbb0(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint unaff_EBX;
  int iVar5;
  longlong unaff_RDI;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x13a38) + 0x10);
  iVar5 = 0;
  uVar2 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar6 = uVar2;
      iVar4 = FUN_00dae940(*(undefined8 *)(param_1 + 0x13a38),iVar5);
      if (param_2 == 0) {
        bVar1 = true;
      }
      else if (param_2 == unaff_RDI) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        unaff_RDI = *(longlong *)(param_1 + 0x10 + (longlong)iVar4 * 8);
        bVar3 = FUN_01aac150(param_1,param_3,unaff_RDI,param_4);
        if (DAT_02110a55 != '\0') {
          return unaff_EBX;
        }
        if (bVar3 != 0) {
          uVar6 = (uint)(byte)((byte)uVar6 | bVar3);
        }
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
      uVar2 = uVar6;
    } while (iVar7 != 0);
  }
  if (((char)uVar6 != '\0') && (FUN_01aac620(param_1), param_4 != '\0')) {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x13a38) + 0x10);
    iVar5 = 0;
    if (-1 < iVar7 + -1) {
      do {
        iVar4 = FUN_00dae940(*(undefined8 *)(param_1 + 0x13a38),iVar5);
        FUN_014f9ea0(*(undefined8 *)(param_1 + 0x10 + (longlong)iVar4 * 8),param_3);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return uVar6;
}

