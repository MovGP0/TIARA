/* Ghidra address: 01a41ff0 */
/* Ghidra symbol: FUN_01a41ff0 */


void FUN_01a41ff0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  FUN_01a43000(param_1);
  if (((*(char *)(param_1 + 0x2b40) != '\0') &&
      (*(int *)(*(longlong *)(param_1 + 0x2968) + 0x5c) == 2)) &&
     (*(char *)(param_1 + 0x2b41) != '\0')) {
    FUN_01a5a9d0(param_1,param_1 + 2000,param_1 + 0x2b41);
  }
  FUN_010d5940(L"PYTHONHOME",0);
  if (*(longlong *)PTR_DAT_02004dd8 != 0) {
    FUN_00410f20(*(undefined8 *)PTR_DAT_02004dd8);
    *(undefined8 *)PTR_DAT_02004dd8 = 0;
    *(undefined1 *)(param_1 + 0x2b46) = 1;
  }
  FUN_01a41f60(param_1);
  FUN_01ca2aa0(*(undefined8 *)PTR_DAT_02004e40);
  FUN_01a50ac0(param_1);
  *param_3 = 2;
  return;
}

