/* Ghidra address: 015c2150 */
/* Ghidra symbol: FUN_015c2150 */


void FUN_015c2150(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_015b8f20);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  }
  return;
}

