/* Ghidra address: 00b2a800 */
/* Ghidra symbol: FUN_00b2a800 */


undefined1 FUN_00b2a800(longlong param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  uint uVar2;
  undefined1 local_19;
  short *local_10;
  
  local_10 = (short *)0x0;
  local_19 = 0;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + -4) >> 1;
  }
  if (uVar2 != 0) {
    FUN_00414be0(&local_10,param_2);
    if (*local_10 == 0x27) {
      uVar2 = 0;
      if (local_10 != (short *)0x0) {
        uVar2 = *(uint *)(local_10 + -2) >> 1;
      }
      if (local_10[(longlong)(int)uVar2 + -1] == 0x27) {
        uVar2 = 0;
        if (local_10 != (short *)0x0) {
          uVar2 = *(uint *)(local_10 + -2) >> 1;
        }
        FUN_00416430(&local_10,local_10,2,uVar2 - 2);
      }
    }
    uVar2 = 0;
    if (local_10 != (short *)0x0) {
      uVar2 = *(uint *)(local_10 + -2) >> 1;
    }
    if (uVar2 != 0) {
      sVar1 = FUN_00b28880(*(undefined8 *)(param_1 + 0x18),local_10);
      if (sVar1 != -1) {
        *(short *)(param_3 + 0x15) = sVar1 + 1;
        *(undefined1 *)(param_3 + 8) = 7;
        local_19 = 1;
      }
    }
  }
  FUN_00414520(&local_10);
  return local_19;
}

