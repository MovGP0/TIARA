/* Ghidra address: 00850ae0 */
/* Ghidra symbol: FUN_00850ae0 */


undefined8 FUN_00850ae0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_11c;
  int local_118;
  int local_114;
  int local_10c;
  short local_106;
  
  uVar2 = 0;
  local_11c = 0x114;
  iVar1 = thunk_FUN_03ed3ad2(&local_11c);
  if (iVar1 != 0) {
    if (local_10c == 1) {
      if ((local_118 == 4) && (local_114 == 0)) {
        uVar2 = 1;
      }
      else if ((local_118 == 4) && (local_114 == 10)) {
        if (local_106 == 0x41) {
          uVar2 = 3;
        }
        else {
          uVar2 = 2;
        }
      }
      else if ((local_118 == 4) && (local_114 == 0x5a)) {
        uVar2 = 5;
      }
      else {
        uVar2 = 0;
      }
    }
    else if (local_10c == 2) {
      if (local_118 < 5) {
        uVar2 = 4;
      }
      else if ((local_118 == 5) && (local_114 == 0)) {
        uVar2 = 6;
      }
      else if ((local_118 == 5) && (local_114 == 1)) {
        uVar2 = 7;
      }
      else if (local_118 == 6) {
        uVar2 = 8;
      }
    }
  }
  return uVar2;
}

