/* Ghidra address: 00a444c0 */
/* Ghidra symbol: FUN_00a444c0 */


undefined8 FUN_00a444c0(longlong *param_1)

{
  int iVar1;
  undefined4 local_44;
  short local_40;
  int local_1c;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_44,0x2c);
  if (3 < iVar1) {
    if (local_44 < 0x2a494a) {
      if (local_44 == 0x2a4949) {
        return 7;
      }
      if (local_44 == -0x65393229) {
        return 8;
      }
      if (local_44 == 1) {
        if ((0x2b < iVar1) && (local_1c == 0x464d4520)) {
          return 8;
        }
      }
      else {
        if (local_44 == 0x10000) {
          return 2;
        }
        if (local_44 == 0x20000) {
          return 3;
        }
      }
    }
    else {
      if (local_44 == 0x2a004d4d) {
        return 7;
      }
      if (local_44 == 0x38464947) {
        return 4;
      }
      if (local_44 == 0x474e5089) {
        return 5;
      }
    }
    if ((ushort)((short)local_44 - 1U) < 2) {
      if (((5 < iVar1) && (local_44._2_2_ == 9)) && ((local_40 == 0x100 || (local_40 == 0x300)))) {
        return 8;
      }
    }
    else {
      if ((short)local_44 == 0x4d42) {
        return 1;
      }
      if ((short)local_44 == -0x2701) {
        return 6;
      }
    }
  }
  return 0;
}

