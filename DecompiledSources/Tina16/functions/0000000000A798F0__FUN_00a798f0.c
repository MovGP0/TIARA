/* Ghidra address: 00a798f0 */
/* Ghidra symbol: FUN_00a798f0 */


void FUN_00a798f0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_004b1060(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a78528);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  }
  return;
}

