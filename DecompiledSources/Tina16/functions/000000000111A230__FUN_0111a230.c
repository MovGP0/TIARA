/* Ghidra address: 0111a230 */
/* Ghidra symbol: FUN_0111a230 */


void FUN_0111a230(longlong param_1)

{
  ulonglong uVar1;
  
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x150);
  if (*(char *)(param_1 + 0x160) == '\x01') {
    FUN_01119a20(param_1);
    goto LAB_0111a35e;
  }
  uVar1 = (ulonglong)
          *(ushort *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2);
  if (uVar1 < 0x23) {
    if (uVar1 == 0x22) {
      FUN_0111a0e0(param_1);
      goto LAB_0111a35e;
    }
    if (uVar1 < 0xb) {
      uVar1 = uVar1 - 1;
      if (uVar1 == 0xffffffffffffffff) {
        FUN_01119940(param_1);
        goto LAB_0111a35e;
      }
      if (8 < uVar1) {
        if (uVar1 == 9) {
          FUN_011199c0(param_1);
          goto LAB_0111a35e;
        }
        goto LAB_0111a356;
      }
    }
    else if (1 < uVar1 - 0xb) {
      if (uVar1 == 0xd) {
        FUN_01119970(param_1);
        goto LAB_0111a35e;
      }
      if (0x12 < uVar1 - 0xe) goto LAB_0111a356;
    }
    FUN_011198d0(param_1);
    goto LAB_0111a35e;
  }
  if (uVar1 < 0x60) {
    if (uVar1 != 0x5f) {
      if (uVar1 - 0x30 < 10) {
        FUN_0111a030(param_1);
        goto LAB_0111a35e;
      }
      if (0x19 < uVar1 - 0x41) goto LAB_0111a356;
    }
  }
  else if (0x19 < uVar1 - 0x61) {
    if (uVar1 - 0x61 == 0x1a) {
      FUN_011199f0(param_1);
      goto LAB_0111a35e;
    }
LAB_0111a356:
    FUN_0111a200(param_1);
    goto LAB_0111a35e;
  }
  FUN_01119fa0(param_1);
LAB_0111a35e:
  FUN_00bc2200(param_1);
  return;
}

