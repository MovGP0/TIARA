/* Ghidra address: 01a42d80 */
/* Ghidra symbol: FUN_01a42d80 */


void FUN_01a42d80(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x2b43) = 0;
  *(undefined4 *)(param_1 + 0x94c) = 0;
  *(undefined4 *)(param_1 + 0x2944) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x90))(*(longlong **)(param_1 + 0x8c8));
  *(undefined1 *)(param_1 + 0x2b48) = 0;
  *(undefined1 *)(param_1 + 0x2b46) = 1;
  if (*(longlong *)PTR_DAT_02004dd8 != 0) {
    FUN_00410f20(*(undefined8 *)PTR_DAT_02004dd8);
    *(undefined8 *)PTR_DAT_02004dd8 = 0;
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  return;
}

