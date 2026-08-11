/* Ghidra address: 0153af00 */
/* Ghidra symbol: FUN_0153af00 */


void FUN_0153af00(char param_1,longlong param_2)

{
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x8a0),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xab8),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x728),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x730),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x1308),1);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xbf8) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xbf8),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x738),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x740),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xfc0),1);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xbf0) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xbf0),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xfc8),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xfd0),1);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x1158) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x1158),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x748),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x750),1);
    FUN_01c91340(*(undefined8 *)PTR_DAT_02004e40,1);
  }
  if (*(longlong *)PTR_DAT_020023c0 != 0) {
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x6d0),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x6d8),1);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x778),1);
  }
  if (param_1 != '\0') {
    FUN_0153ab60(0);
  }
  if (param_2 == 0) {
    PTR_DAT_02004010[3] = *(undefined1 *)(DAT_0210ee10 + 3);
    *(undefined8 *)(PTR_DAT_02004010 + 0xbd) = *(undefined8 *)(DAT_0210ee10 + 0xbd);
  }
  else {
    *(undefined1 *)(param_2 + 0x495) = *(undefined1 *)(DAT_0210ee10 + 3);
    *(undefined8 *)(param_2 + 0x54f) = *(undefined8 *)(DAT_0210ee10 + 0xbd);
  }
  *PTR_DAT_02002170 = 1;
  DAT_01f60610 = 0;
  return;
}

