/* Ghidra address: 015a55e0 */
/* Ghidra symbol: FUN_015a55e0 */


void FUN_015a55e0(longlong param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined1 *local_res10;
  int local_res18;
  
  FUN_015a53d0(param_1);
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_4 != 0) {
    *(byte *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) = (byte)param_3;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    bVar1 = (byte)((uint)param_3 >> 8);
    *(byte *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) = bVar1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(byte *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) = ~(byte)param_3;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(byte *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) = ~bVar1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    local_res18 = param_3;
  }
  while( true ) {
    if (local_res18 == 0) break;
    *(undefined1 *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         *local_res10;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    local_res10 = local_res10 + 1;
    local_res18 = local_res18 + -1;
  }
  return;
}

