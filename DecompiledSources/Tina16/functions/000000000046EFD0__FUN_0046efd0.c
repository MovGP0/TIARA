/* Ghidra address: 0046efd0 */
/* Ghidra symbol: FUN_0046efd0 */


undefined1 FUN_0046efd0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 *local_50;
  bool local_41;
  longlong local_40;
  longlong local_38;
  undefined8 *local_28;
  int local_20;
  undefined1 local_19;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_19 = 0;
  FUN_00411e10(DAT_020115c0,0xffffffff);
  local_38 = DAT_020115b8;
  if (DAT_020115b8 != 0) {
    local_38 = *(longlong *)(DAT_020115b8 + -8);
  }
  iVar2 = (int)local_38;
  local_20 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_28 = *(undefined8 **)(DAT_020115b8 + (longlong)local_20 * 8);
      if ((local_28 != (undefined8 *)0x0) && (local_28 != DAT_01dc4398)) {
        FUN_00410ae0(*local_28,&local_58);
        local_40 = local_58;
        if (local_58 == param_1) {
          local_41 = true;
        }
        else if ((local_58 == 0) || (param_1 == 0)) {
          local_41 = false;
        }
        else {
          iVar1 = FUN_0043e420(local_58,param_1);
          local_41 = iVar1 == 0;
        }
        if (local_41 != false) {
          *param_2 = (longlong)local_28;
          local_19 = 1;
          break;
        }
      }
      local_20 = local_20 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00412130(DAT_020115c0);
  FUN_00414480(&local_58);
  return local_19;
}

