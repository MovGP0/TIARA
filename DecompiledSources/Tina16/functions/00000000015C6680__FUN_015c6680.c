/* Ghidra address: 015c6680 */
/* Ghidra symbol: FUN_015c6680 */


undefined1 FUN_015c6680(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 local_10;
  undefined1 local_9;
  
  local_9 = 0;
  if (0x14 < *param_2) {
    FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 8),*param_2 + -0x14);
    FUN_004b84c0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 8),
                 *(longlong *)(param_1 + 0x213d0) + 0x38,0x14);
    local_10 = 0x7064b50;
    iVar1 = FUN_00442840(*(longlong *)(param_1 + 0x213d0) + 0x38,&local_10,4);
    if (iVar1 == 0) {
      local_9 = 1;
      *param_2 = *param_2 + -0x14;
    }
  }
  return local_9;
}

