/* Ghidra address: 018a7070 */
/* Ghidra symbol: FUN_018a7070 */


void FUN_018a7070(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_28 [4];
  int local_24;
  
  if (*(char *)(param_1 + 0x4f2) == '\0') {
    uVar1 = FUN_0064d0b0(param_1);
    FUN_018a5310(*(undefined8 *)(param_1 + 0x528),local_28,param_2 + -1,uVar1,
                 *(undefined8 *)(param_1 + 0x548),*(undefined1 *)(param_1 + 0x550));
    FUN_018933f0(param_1,local_24 + -10);
  }
  return;
}

