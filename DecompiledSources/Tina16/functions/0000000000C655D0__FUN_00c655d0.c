/* Ghidra address: 00c655d0 */
/* Ghidra symbol: FUN_00c655d0 */


void FUN_00c655d0(undefined8 param_1,undefined1 *param_2,int *param_3)

{
  longlong lVar1;
  uint local_20;
  uint local_1c;
  
  if (*param_3 == 0x7b) {
    local_20 = (uint)*(ushort *)(param_3 + 4);
    local_1c = (uint)*(ushort *)((longlong)param_3 + 0x12);
    lVar1 = FUN_0064aca0(&local_20);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xe8) != 0)) {
      *param_2 = 0;
    }
  }
  return;
}

