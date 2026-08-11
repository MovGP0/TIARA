/* Ghidra address: 013399b0 */
/* Ghidra symbol: FUN_013399b0 */


void FUN_013399b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x770);
  if (1e+30 < *(double *)(lVar1 + 0xe61)) {
    *(undefined8 *)(lVar1 + 0xe61) = 0;
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0x730),*(undefined8 *)(lVar1 + 0xe61));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x708),
               *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0xc0));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 200)
              );
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6f0),(ulonglong)(*(byte *)(lVar1 + 0xe16) + 2) % 3);
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))
            (*(longlong **)(param_1 + 0x700),*(undefined1 *)(lVar1 + 0xe15));
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6f8),*(byte *)(lVar1 + 0xe14) - 1);
  FUN_01339b60(param_1,param_2);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x718),
               *(undefined1 *)(*(longlong *)PTR_DAT_02003c48 + 0x120));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x750),
               *(double *)(*(longlong *)PTR_DAT_02003c48 + 0x58) * 100.0);
  FUN_0064cf60(param_1,0x498);
  return;
}

