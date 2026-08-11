/* Ghidra address: 017bdaf0 */
/* Ghidra symbol: FUN_017bdaf0 */


void FUN_017bdaf0(longlong param_1,char param_2,undefined8 *param_3)

{
  if (param_2 == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)param_3;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((longlong)param_3 + 4);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)((longlong)param_3 + 0x14);
    *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_3 + 3);
  }
  else if (param_2 == '\x05') {
    FUN_00414ad0(param_1 + 0x98,*param_3);
  }
  return;
}

