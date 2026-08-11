/* Ghidra address: 019d5b20 */
/* Ghidra symbol: FUN_019d5b20 */


void FUN_019d5b20(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 0x814) = param_2;
  iVar2 = 0;
  if (-1 < param_2 + -1) {
    do {
      uVar3 = 0;
      uVar4 = 0;
      if (param_3 == 0) {
        uVar4 = (uint)(iVar2 == 0);
        if (iVar2 == 1) {
          uVar4 = 2;
        }
        if (iVar2 == 2) {
          uVar4 = 3;
        }
        if (iVar2 == 3) {
          uVar4 = 4;
        }
      }
      else if (param_3 == 1) {
        if (iVar2 == 0) {
          uVar3 = 2;
        }
        uVar4 = uVar3;
        if (iVar2 == 1) {
          uVar4 = 1;
        }
        if (iVar2 == 2) {
          uVar4 = 4;
        }
        if (iVar2 == 3) {
          uVar4 = 3;
        }
      }
      else if (param_3 == 2) {
        if (iVar2 == 0) {
          uVar3 = 2;
        }
        uVar4 = uVar3;
        if (iVar2 == 1) {
          uVar4 = 1;
        }
        if (iVar2 == 2) {
          uVar4 = 4;
        }
        if (iVar2 == 3) {
          uVar4 = 3;
        }
        if (iVar2 == 4) {
          uVar4 = 5;
        }
        if (iVar2 == 5) {
          uVar4 = 6;
        }
      }
      else if (param_3 == 3) {
        uVar4 = (uint)(iVar2 == 0);
        if (iVar2 == 1) {
          uVar4 = 2;
        }
        if (iVar2 == 2) {
          uVar4 = 3;
        }
        if (iVar2 == 3) {
          uVar4 = 4;
        }
        if (iVar2 == 4) {
          uVar4 = 6;
        }
        if (iVar2 == 5) {
          uVar4 = 5;
        }
      }
      lVar5 = (longlong)iVar2;
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x808),iVar2);
      uVar1 = FUN_00b90090(uVar1);
      *(undefined8 *)(param_1 + 0x820 + lVar5 * 0x20) = uVar1;
      *(uint *)(param_1 + 0x838 + lVar5 * 0x20) = uVar4;
      if (uVar4 == 1) {
        *(undefined8 *)(param_1 + 0x830 + lVar5 * 0x20) = 0xc008000000000000;
        *(undefined8 *)(param_1 + 0x828 + lVar5 * 0x20) = 0xc03e000000000000;
      }
      if (uVar4 == 2) {
        *(undefined8 *)(param_1 + 0x830 + lVar5 * 0x20) = 0xc008000000000000;
        *(undefined8 *)(param_1 + 0x828 + lVar5 * 0x20) = 0xc072c00000000000;
      }
      if ((((uVar4 == 3) || (uVar4 == 4)) || (uVar4 == 5)) || (uVar4 == 6)) {
        *(undefined8 *)(param_1 + 0x830 + (longlong)iVar2 * 0x20) = 0x412e848000000000;
        *(undefined8 *)(param_1 + 0x828 + (longlong)iVar2 * 0x20) = 0x4059000000000000;
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

