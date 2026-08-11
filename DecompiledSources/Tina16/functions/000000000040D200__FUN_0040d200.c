/* Ghidra address: 0040d200 */
/* Ghidra symbol: FUN_0040d200 */


void FUN_0040d200(uint *param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (0 < param_2) {
    if ((DAT_02006a1c & 0x200) == 0) {
      uVar1 = (uint)param_3;
      if (0xf < param_2) {
        if (uVar1 != 0) {
          uVar1 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
        }
        if (((ulonglong)param_1 & 0xf) != 0) {
          lVar2 = ((ulonglong)param_1 & 0xf) - 0x10;
          param_2 = param_2 + lVar2;
          param_1 = (uint *)((longlong)param_1 - lVar2);
          do {
            *(char *)(lVar2 + (longlong)param_1) = (char)uVar1;
            lVar2 = lVar2 + 1;
          } while (lVar2 != 0);
        }
        if (0x7f < param_2) {
          lVar2 = param_2 + -0x80;
          do {
            param_2 = lVar2;
            *param_1 = uVar1;
            param_1[1] = uVar1;
            param_1[2] = uVar1;
            param_1[3] = uVar1;
            param_1[4] = uVar1;
            param_1[5] = uVar1;
            param_1[6] = uVar1;
            param_1[7] = uVar1;
            param_1[8] = uVar1;
            param_1[9] = uVar1;
            param_1[10] = uVar1;
            param_1[0xb] = uVar1;
            param_1[0xc] = uVar1;
            param_1[0xd] = uVar1;
            param_1[0xe] = uVar1;
            param_1[0xf] = uVar1;
            param_1[0x10] = uVar1;
            param_1[0x11] = uVar1;
            param_1[0x12] = uVar1;
            param_1[0x13] = uVar1;
            param_1[0x14] = uVar1;
            param_1[0x15] = uVar1;
            param_1[0x16] = uVar1;
            param_1[0x17] = uVar1;
            param_1[0x18] = uVar1;
            param_1[0x19] = uVar1;
            param_1[0x1a] = uVar1;
            param_1[0x1b] = uVar1;
            param_1[0x1c] = uVar1;
            param_1[0x1d] = uVar1;
            param_1[0x1e] = uVar1;
            param_1[0x1f] = uVar1;
            param_1 = param_1 + 0x20;
            lVar2 = param_2 + -0x80;
          } while (param_2 + -0x80 != 0 && 0x7f < param_2);
        }
        if (0x3f < param_2) {
          lVar2 = param_2 + -0x40;
          do {
            param_2 = lVar2;
            *param_1 = uVar1;
            param_1[1] = uVar1;
            param_1[2] = uVar1;
            param_1[3] = uVar1;
            param_1[4] = uVar1;
            param_1[5] = uVar1;
            param_1[6] = uVar1;
            param_1[7] = uVar1;
            param_1[8] = uVar1;
            param_1[9] = uVar1;
            param_1[10] = uVar1;
            param_1[0xb] = uVar1;
            param_1[0xc] = uVar1;
            param_1[0xd] = uVar1;
            param_1[0xe] = uVar1;
            param_1[0xf] = uVar1;
            param_1 = param_1 + 0x10;
            lVar2 = param_2 + -0x40;
          } while (param_2 + -0x40 != 0 && 0x3f < param_2);
        }
        if (0x1f < param_2) {
          lVar2 = param_2 + -0x20;
          do {
            param_2 = lVar2;
            *param_1 = uVar1;
            param_1[1] = uVar1;
            param_1[2] = uVar1;
            param_1[3] = uVar1;
            param_1[4] = uVar1;
            param_1[5] = uVar1;
            param_1[6] = uVar1;
            param_1[7] = uVar1;
            param_1 = param_1 + 8;
            lVar2 = param_2 + -0x20;
          } while (param_2 + -0x20 != 0 && 0x1f < param_2);
        }
        if (0xf < param_2) {
          lVar2 = param_2 + -0x10;
          do {
            param_2 = lVar2;
            *param_1 = uVar1;
            param_1[1] = uVar1;
            param_1[2] = uVar1;
            param_1[3] = uVar1;
            param_1 = param_1 + 4;
            lVar2 = param_2 + -0x10;
          } while (param_2 + -0x10 != 0 && 0xf < param_2);
        }
      }
      if (param_2 != 0) {
        lVar2 = -param_2;
        do {
          *(char *)((longlong)param_1 + lVar2 + param_2) = (char)uVar1;
          lVar2 = lVar2 + 1;
        } while (lVar2 != 0);
        return;
      }
    }
    else {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        *(byte *)param_1 = param_3;
        param_1 = (uint *)((longlong)param_1 + 1);
      }
    }
  }
  return;
}

