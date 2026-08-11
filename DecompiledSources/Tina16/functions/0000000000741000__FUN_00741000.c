/* Ghidra address: 00741000 */
/* Ghidra symbol: FUN_00741000 */


void FUN_00741000(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  undefined1 auStack_28 [32];
  
  FUN_005fd6d0(*(undefined8 *)(param_1 + 0x78),1);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  for (; 0 < param_5; param_5 = param_5 + -1) {
    FUN_00740f30(auStack_28);
    FUN_00423b10(param_2,0xffffffff,0xffffffff);
  }
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  return;
}

