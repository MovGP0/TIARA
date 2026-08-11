/* Ghidra address: 009f19a0 */
/* Ghidra symbol: FUN_009f19a0 */


void FUN_009f19a0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_00a015f0(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_009ef0f0);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  }
  return;
}

