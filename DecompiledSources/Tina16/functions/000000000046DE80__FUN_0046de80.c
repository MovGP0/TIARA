/* Ghidra address: 0046de80 */
/* Ghidra symbol: FUN_0046de80 */


void FUN_0046de80(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  int local_1c;
  
  local_30 = auStack_58;
  FUN_00411e10(DAT_020115c0,0xffffffff);
  local_28 = DAT_020115b8;
  if (DAT_020115b8 != 0) {
    local_28 = *(longlong *)(DAT_020115b8 + -8);
  }
  local_1c = (int)local_28 + -1;
  if (-1 < local_1c) {
    do {
      lVar2 = (longlong)local_1c;
      lVar1 = *(longlong *)(DAT_020115b8 + lVar2 * 8);
      if (lVar1 != 0) {
        if (lVar1 != DAT_01dc4398) {
          FUN_00410f20(lVar1);
        }
        if (*(longlong *)(DAT_020115b8 + lVar2 * 8) == DAT_01dc4398) {
          *(undefined8 *)(DAT_020115b8 + lVar2 * 8) = 0;
        }
      }
      local_1c = local_1c + -1;
    } while (local_1c != -1);
  }
  FUN_00419430(&DAT_020115b8,&DAT_0046de48);
  FUN_00412130(DAT_020115c0);
  return;
}

