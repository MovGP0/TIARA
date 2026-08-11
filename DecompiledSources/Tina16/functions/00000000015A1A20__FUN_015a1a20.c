/* Ghidra address: 015a1a20 */
/* Ghidra symbol: FUN_015a1a20 */


bool FUN_015a1a20(longlong param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  undefined2 local_res10;
  undefined1 local_res18;
  uint local_18;
  
  local_res10 = (undefined2)param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x16d6) + (ulonglong)*(uint *)(param_1 + 0x16d2) * 2) =
       local_res10;
  local_res18 = (undefined1)param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 0x16c6) + (ulonglong)*(uint *)(param_1 + 0x16d2)) =
       local_res18;
  *(int *)(param_1 + 0x16d2) = *(int *)(param_1 + 0x16d2) + 1;
  if (param_2 == 0) {
    *(short *)(param_1 + 0xad + (ulonglong)param_3 * 4) =
         *(short *)(param_1 + 0xad + (ulonglong)param_3 * 4) + 1;
  }
  else {
    *(int *)(param_1 + 0x16e6) = *(int *)(param_1 + 0x16e6) + 1;
    uVar2 = param_2 - 1;
    *(short *)(param_1 + 0xad + (longlong)(int)((byte)(&DAT_01f691f0)[param_3] + 0x101) * 4) =
         *(short *)(param_1 + 0xad + (longlong)(int)((byte)(&DAT_01f691f0)[param_3] + 0x101) * 4) +
         1;
    if (uVar2 < 0x100) {
      bVar1 = (&DAT_01f692f0)[uVar2];
    }
    else {
      bVar1 = (&DAT_01f692f0)[(uVar2 >> 7) + 0x100];
    }
    local_18 = (uint)bVar1;
    *(short *)(param_1 + 0x9a1 + (longlong)(int)local_18 * 4) =
         *(short *)(param_1 + 0x9a1 + (longlong)(int)local_18 * 4) + 1;
  }
  return *(int *)(param_1 + 0x16d2) == *(int *)(param_1 + 0x16ce) + -1;
}

