/* Ghidra address: 0060cee0 */
/* Ghidra symbol: FUN_0060cee0 */


void FUN_0060cee0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_28;
  undefined1 local_1e [2];
  short local_1c;
  undefined2 local_1a;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((*(longlong *)(lVar1 + 0x20) == 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
    FUN_004b6dc0(*(longlong *)(lVar1 + 0x10),0);
    FUN_004b84c0(*(undefined8 *)(lVar1 + 0x10),local_1e,6);
    if (local_1c == 0) {
      local_28 = DAT_02011fc8;
    }
    else if (local_1c == 1) {
      FUN_00601060(*(undefined8 *)(lVar1 + 0x10),&local_28,local_1a,6,param_1 + 0x50,lVar1 + 0x18);
    }
    else {
      FUN_005ffe70();
    }
    *(undefined8 *)(lVar1 + 0x20) = local_28;
  }
  return;
}

