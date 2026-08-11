/* Ghidra address: 015001e0 */
/* Ghidra symbol: FUN_015001e0 */


void FUN_015001e0(longlong param_1)

{
  undefined8 uVar1;
  code *local_28;
  longlong local_20;
  
  if (*(char *)(param_1 + 0x749) == '\0') {
    uVar1 = FUN_019a45d0();
    FUN_0199dd30(uVar1,1,1);
  }
  *(undefined1 *)(param_1 + 0x747) = 1;
  *(undefined1 *)(param_1 + 0x748) = 1;
  *(undefined1 *)(param_1 + 0x74a) = 1;
  if (*(char *)(param_1 + 0x740) == '\0') {
    *(undefined1 *)(param_1 + 0x749) = 1;
    local_28 = FUN_015001e0;
    local_20 = param_1;
    FUN_00f836b0(&local_28);
  }
  else {
    *(undefined1 *)(*(longlong *)PTR_DAT_02004e40 + 0x27c1) = 0;
    if (DAT_0210ec08 != 0) {
      FUN_00410f20(param_1);
    }
    DAT_0210ec08 = 0;
  }
  return;
}

