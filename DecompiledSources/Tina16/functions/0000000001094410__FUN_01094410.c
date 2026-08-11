/* Ghidra address: 01094410 */
/* Ghidra symbol: FUN_01094410 */


void FUN_01094410(longlong param_1)

{
  ulonglong uVar1;
  
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x150);
  uVar1 = (ulonglong)
          *(ushort *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2);
  if (uVar1 < 0x23) {
    if (uVar1 == 0x22) {
      FUN_010942c0(param_1);
      goto LAB_01094525;
    }
    if (uVar1 < 0xb) {
      uVar1 = uVar1 - 1;
      if (uVar1 == 0xffffffffffffffff) {
        FUN_01093bb0(param_1);
        goto LAB_01094525;
      }
      if (8 < uVar1) {
        if (uVar1 == 9) {
          FUN_01093c30(param_1);
          goto LAB_01094525;
        }
        goto LAB_0109451d;
      }
    }
    else if (1 < uVar1 - 0xb) {
      if (uVar1 == 0xd) {
        FUN_01093be0(param_1);
        goto LAB_01094525;
      }
      if (0x12 < uVar1 - 0xe) goto LAB_0109451d;
    }
    FUN_01093b40(param_1);
  }
  else {
    if (uVar1 < 0x41) {
      if (uVar1 == 0x2f) {
        FUN_010940e0(param_1);
        goto LAB_01094525;
      }
      if (uVar1 - 0x30 < 10) {
        FUN_01094210(param_1);
        goto LAB_01094525;
      }
    }
    else if (((uVar1 - 0x41 < 0x1a) || (uVar1 == 0x5f)) || (uVar1 - 0x61 < 0x1a)) {
      FUN_01094180(param_1);
      goto LAB_01094525;
    }
LAB_0109451d:
    FUN_010943e0(param_1);
  }
LAB_01094525:
  FUN_00bc2200(param_1);
  return;
}

