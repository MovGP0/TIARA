/* Ghidra address: 0153a8e0 */
/* Ghidra symbol: FUN_0153a8e0 */


void FUN_0153a8e0(longlong param_1)

{
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x8a0),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xab8),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x728),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x730),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x1308),0);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xbf8) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xbf8),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x738),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x740),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xfc0),0);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xbf0) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xbf0),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xfc8),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xfd0),0);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x1158) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x1158),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x748),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x750),0);
    FUN_01c91340(*(undefined8 *)PTR_DAT_02004e40,0);
  }
  if (*(longlong *)PTR_DAT_020023c0 != 0) {
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x6d0),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x6d8),0);
    FUN_007e2da0(*(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x778),0);
  }
  FUN_00417c40(DAT_0210ee10,PTR_DAT_02004010,&DAT_01d0d0b8);
  if (param_1 == 0) {
    PTR_DAT_02004010[3] = 0;
    *(undefined8 *)(PTR_DAT_02004010 + 0xbd) = 0x3ff0000000000000;
  }
  else {
    *(undefined1 *)(param_1 + 0x495) = 0;
    *(undefined8 *)(param_1 + 0x54f) = 0x3ff0000000000000;
  }
  *PTR_DAT_02002170 = 0;
  DAT_01f60610 = 1;
  return;
}

