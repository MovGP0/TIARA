/* Ghidra address: 008fb690 */
/* Ghidra symbol: FUN_008fb690 */


undefined1 FUN_008fb690(longlong param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong local_res8 [4];
  undefined1 local_29;
  
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  uVar4 = 0;
  if (local_res8[0] != 0) {
    uVar4 = *(uint *)(local_res8[0] + -4) >> 1;
  }
  local_29 = 1;
  if ((uVar4 != 0) && (uVar2 = 0, uVar4 != 0)) {
    do {
      uVar3 = uVar2 + 1;
      if (*(short *)(local_res8[0] + -2 + (longlong)(int)uVar3 * 2) == 0x25) {
        if (uVar3 == uVar4) {
          local_29 = 0;
          break;
        }
        cVar1 = FUN_008fc320(*(undefined2 *)(local_res8[0] + -2 + (longlong)(int)(uVar2 + 2) * 2));
        if (cVar1 == '\0') {
          local_29 = 0;
          break;
        }
        if (uVar2 + 2 == uVar4) {
          local_29 = 0;
          break;
        }
        cVar1 = FUN_008fc320(*(undefined2 *)(local_res8[0] + -2 + (longlong)(int)(uVar2 + 3) * 2));
        uVar2 = uVar2 + 3;
        if (cVar1 == '\0') {
          local_29 = 0;
          break;
        }
      }
      else {
        lVar5 = (longlong)(int)uVar3;
        cVar1 = FUN_008fc2b0(*(undefined2 *)(local_res8[0] + -2 + lVar5 * 2));
        uVar2 = uVar3;
        if (((((cVar1 == '\0') && (*(short *)(local_res8[0] + -2 + lVar5 * 2) != 0x3b)) &&
             (*(short *)(local_res8[0] + -2 + lVar5 * 2) != 0x3a)) &&
            ((*(short *)(local_res8[0] + -2 + lVar5 * 2) != 0x26 &&
             (*(short *)(local_res8[0] + -2 + lVar5 * 2) != 0x3d)))) &&
           ((*(short *)(local_res8[0] + -2 + lVar5 * 2) != 0x2b &&
            ((*(short *)(local_res8[0] + -2 + lVar5 * 2) != 0x24 &&
             (*(short *)(local_res8[0] + -2 + lVar5 * 2) != 0x2c)))))) {
          local_29 = 0;
          break;
        }
      }
    } while ((int)uVar2 < (int)uVar4);
  }
  FUN_00414520(local_res8);
  return local_29;
}

