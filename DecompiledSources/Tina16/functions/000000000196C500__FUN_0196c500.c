/* Ghidra address: 0196c500 */
/* Ghidra symbol: FUN_0196c500 */


void FUN_0196c500(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01937480);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  }
  return;
}

