/* Ghidra address: 0165f840 */
/* Ghidra symbol: FUN_0165f840 */


void FUN_0165f840(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x5d0) + 0x1e0);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
                      (longlong)iVar4 * 0x70);
      if (*(longlong *)(piVar1 + 0x14) != 0) {
        FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),0xf);
        FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),0xd);
        FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),5);
        FUN_0165e150(*(undefined8 *)(param_1 + 0x5d0),*(undefined8 *)(piVar1 + 0x14));
      }
      if (*(longlong *)(piVar1 + 2) == 0) {
        *(undefined4 *)(param_1 + 0x598) = 0xffffffff;
      }
      else {
        uVar3 = FUN_0165d6d0(*(undefined8 *)(param_1 + 0x5d0),*(longlong *)(piVar1 + 2));
        *(undefined4 *)(param_1 + 0x598) = uVar3;
        if ((*(int *)(param_1 + 0x598) != -1) &&
           (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1f0) + 8 +
                    (longlong)*(int *)(param_1 + 0x598) * 0x10) != 0)) {
          *(undefined4 *)(param_1 + 0x598) = 0xffffffff;
        }
        if (*(int *)(param_1 + 0x598) != -1) {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1f0) + 8 +
           (longlong)*(int *)(param_1 + 0x598) * 0x10) = 1;
        }
      }
      iVar2 = *piVar1;
      if (iVar2 < 0xb) {
        if (iVar2 != 10) {
          if (iVar2 == 8) {
            FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),0xde);
            FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),0xe9);
          }
          else {
            if (iVar2 != 9) goto LAB_0165f9e4;
            FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),0xd9);
            FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),0xe8);
          }
        }
      }
      else if (iVar2 != 0xb) {
        if (iVar2 == 0xe) {
          FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),0xd9);
          FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),0xee);
        }
        else {
LAB_0165f9e4:
          FUN_0165e1e0(*(undefined8 *)(param_1 + 0x5d0),iVar2,*(undefined8 *)(piVar1 + 2));
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

