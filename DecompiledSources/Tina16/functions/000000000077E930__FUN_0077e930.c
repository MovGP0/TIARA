/* Ghidra address: 0077e930 */
/* Ghidra symbol: FUN_0077e930 */


void FUN_0077e930(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  byte local_21;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_21 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x1d8 + (ulonglong)local_21 * 8);
    if (lVar1 != 0) {
      local_20 = (longlong *)FUN_0078b6d0(lVar1);
      while( true ) {
        cVar2 = thunk_FUN_0078bf82(local_20);
        if (cVar2 == '\0') break;
        FUN_0078be30(local_20,local_38);
        (**(code **)PTR_DAT_02003590)(local_30);
      }
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + -0x20))(local_20,1);
      }
      local_40 = (undefined8 *)(param_1 + 0x1d8 + (ulonglong)local_21 * 8);
      local_48 = *local_40;
      *local_40 = 0;
      FUN_00410f20(local_48);
    }
    local_21 = local_21 + 1;
  } while (local_21 != 0x2d);
  return;
}

