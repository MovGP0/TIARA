/* Ghidra address: 0109f350 */
/* Ghidra symbol: FUN_0109f350 */


void FUN_0109f350(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x9a0) + 0x1f8) + 8) = 4;
  uVar1 = _Dbg_GetBreakPoints(*(undefined8 *)(param_1 + 0x9c0));
  FUN_004167d0(*(longlong *)(*(longlong *)(param_1 + 0x9a0) + 0x1f8) + 0x10,uVar1);
  FUN_01b21440(&local_10,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1660) + 0x3548) + 0x28));
  FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x9a0) + 0x1f8) + 0x18,local_10);
  FUN_00f7d140(*(undefined8 *)(*(longlong *)(param_1 + 0x1660) + 0x3548));
  FUN_0109ef40(param_1);
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x918),0);
  if (*(char *)(param_1 + 0x9e1) == '\0') {
    thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x1648),0x123e,0,0);
    *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd5a) = 0;
  }
  FUN_00414480(&local_10);
  return;
}

