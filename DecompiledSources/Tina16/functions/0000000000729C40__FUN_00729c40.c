/* Ghidra address: 00729c40 */
/* Ghidra symbol: FUN_00729c40 */


void FUN_00729c40(longlong param_1)

{
  longlong lVar1;
  
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xd8),0x467,
                     (longlong)
                     (int)-(uint)((*(uint *)(*(longlong *)(param_1 + 8) + 200) & 0x400) != 0),0);
  lVar1 = *(longlong *)(param_1 + 8);
  if ((*(uint *)(lVar1 + 200) & 0x400) == 0) {
    thunk_FUN_041b2403(*(undefined8 *)(lVar1 + 0xd8),0x469,0,
                       CONCAT22(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x18)));
    thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xd8),0x46a,
                       (longlong)*(int *)(param_1 + 0x1c),0);
  }
  else {
    thunk_FUN_041b2403(*(undefined8 *)(lVar1 + 0xd8),0x46b,0xffffffffffffffff,
                       *(undefined4 *)(param_1 + 0x10));
  }
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xd8),0x468,
                     (longlong)*(int *)(&DAT_01e05d2c + (ulonglong)*(byte *)(param_1 + 0x20) * 4),0)
  ;
  return;
}

