/* Ghidra address: 00c762d0 */
/* Ghidra symbol: FUN_00c762d0 */


undefined8 FUN_00c762d0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_11c;
  uint local_118;
  uint local_114;
  int local_10c;
  
  uVar2 = 0;
  local_11c = 0x114;
  iVar1 = thunk_FUN_03ed3ad2(&local_11c);
  if (iVar1 != 0) {
    if (local_10c == 2) {
      if (4 < local_118) {
        uVar2 = 1;
      }
    }
    else if (((local_10c == 1) && (uVar2 = 0, 3 < local_118)) && (0x59 < local_114)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

