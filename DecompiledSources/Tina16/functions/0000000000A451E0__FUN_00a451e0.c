/* Ghidra address: 00a451e0 */
/* Ghidra symbol: FUN_00a451e0 */


longlong * FUN_00a451e0(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  byte local_29;
  longlong *local_28;
  
  local_40 = auStack_68;
  local_28 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x48))(param_2,0,0);
    local_29 = FUN_00a444c0(param_2);
    if (local_29 != 0) {
      (**(code **)(*param_2 + 0x48))(param_2,0,0);
      if (local_28 == (longlong *)0x0) {
        uVar1 = (ulonglong)local_29;
        if (uVar1 < 6) {
          if (uVar1 == 5) {
            local_28 = (longlong *)FUN_00a39860(&PTR_FUN_00a2f148,1);
          }
          else if (uVar1 == 1) {
            local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
          }
          else if (uVar1 - 2 < 2) {
            local_28 = (longlong *)FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
          }
          else if (uVar1 - 2 == 2) {
            local_28 = (longlong *)FUN_00a084a0(&PTR_FUN_00a07bf0,1);
          }
        }
        else if (uVar1 == 6) {
          local_28 = (longlong *)FUN_00a09e20(&PTR_FUN_00a09250,1);
        }
        else if (uVar1 == 8) {
          local_28 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
        }
      }
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0xc0))(local_28,param_2);
      }
    }
  }
  return local_28;
}

