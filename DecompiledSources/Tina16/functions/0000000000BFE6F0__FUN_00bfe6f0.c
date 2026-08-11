/* Ghidra address: 00bfe6f0 */
/* Ghidra symbol: FUN_00bfe6f0 */


longlong FUN_00bfe6f0(void)

{
  if (DAT_02019b38 == 0) {
    DAT_02019b38 = (**(code **)(*(longlong *)PTR_PTR_020047e0 + 0x78))
                             (*(longlong *)PTR_PTR_020047e0,1,*(undefined8 *)PTR_DAT_02004030);
  }
  return DAT_02019b38;
}

