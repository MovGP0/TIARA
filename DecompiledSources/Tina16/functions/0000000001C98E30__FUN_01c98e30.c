/* Ghidra address: 01c98e30 */
/* Ghidra symbol: FUN_01c98e30 */


void FUN_01c98e30(void)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_02001890 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_012219c8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02001890 = uVar1;
  }
  if (*(longlong *)PTR_DAT_020047a0 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_011720c8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020047a0 = uVar1;
  }
  FUN_00805990(*(undefined8 *)PTR_DAT_020047a0);
  FUN_00742eb0(*(undefined8 *)(*(longlong *)PTR_DAT_020047a0 + 0x6b8),0);
  if (*(longlong *)PTR_DAT_020044a8 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_01172978,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020044a8 = uVar1;
  }
  if (*(longlong *)PTR_DAT_02001700 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_01166088,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02001700 = uVar1;
  }
  if (*(longlong *)PTR_DAT_02003280 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_01160748,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02003280 = uVar1;
  }
  if (*(char *)(*(longlong *)PTR_DAT_02001890 + 0x4d2) == '\x01') {
    FUN_00800700(*(undefined8 *)PTR_DAT_02001890,0);
    FUN_008059a0(*(undefined8 *)PTR_DAT_02001890);
  }
  else {
    FUN_008059a0(*(undefined8 *)PTR_DAT_02001890);
  }
  return;
}

