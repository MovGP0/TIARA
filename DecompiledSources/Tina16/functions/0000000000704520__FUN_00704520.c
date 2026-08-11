/* Ghidra address: 00704520 */
/* Ghidra symbol: FUN_00704520 */


void FUN_00704520(longlong param_1,longlong param_2)

{
  FUN_006d3e20(0x200);
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"ComboBoxEx32");
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | 0x2210044 |
       *(uint *)(&DAT_01e032b4 + (ulonglong)*(byte *)(param_1 + 0x580) * 4);
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xfffffdff;
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc | 8;
  return;
}

