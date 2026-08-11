/* Ghidra address: 004084d0 */
/* Ghidra symbol: FUN_004084d0 */


void FUN_004084d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  *param_2 = (longlong)(param_1 + 6);
  lVar1 = *param_1;
  if ((*(longlong **)(lVar1 + 0x28) == param_1) &&
     (*(ulonglong *)(lVar1 + 0x18) <= *(ulonglong *)(lVar1 + 0x20))) {
    *param_3 = *(longlong *)(lVar1 + 0x18) + -1;
  }
  else {
    *param_3 = (longlong)param_1 +
               ((ulonglong)(*(uint *)(param_1 + -1) & 0xfffffff0) -
               (ulonglong)*(ushort *)(lVar1 + 2));
  }
  return;
}

