/* Ghidra address: 00631f70 */
/* Ghidra symbol: FUN_00631f70 */


void FUN_00631f70(longlong param_1)

{
  *(longlong *)(param_1 + 0xb40) = param_1 + 0xbc;
  *(undefined ***)(param_1 + 0xb50) = &PTR_DAT_01df3678;
  *(longlong *)(param_1 + 0xb58) = param_1 + 0x9b0;
  *(undefined ***)(param_1 + 0xb68) = &PTR_DAT_01df3698;
  *(longlong *)(param_1 + 0xb70) = param_1 + 0xaa4;
  *(undefined **)(param_1 + 0xb80) = &DAT_01df36b8;
  *(undefined2 *)(param_1 + 0x1710) = 0;
  *(undefined4 *)(param_1 + 0x1714) = 0;
  FUN_00631fe0();
  return;
}

