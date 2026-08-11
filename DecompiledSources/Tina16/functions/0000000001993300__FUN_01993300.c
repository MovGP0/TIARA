/* Ghidra address: 01993300 */
/* Ghidra symbol: FUN_01993300 */


void FUN_01993300(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x28));
  }
  FUN_01992cc0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x18));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

