/* Ghidra address: 010f0840 */
/* Ghidra symbol: FUN_010f0840 */


void FUN_010f0840(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_38 [24];
  
  if (*(int *)(param_1 + 0x98) == 0x3000000) {
    FUN_00498350(local_38,0,0,0,0);
    FUN_01a8dd40(param_2,*(int *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                 *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),local_38);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xa0);
    FUN_00498350(local_38,0,0,0,0);
    FUN_01a8dd40(param_2,*(int *)(param_1 + 0x80) - (int)cVar1,*(int *)(param_1 + 0x84) - (int)cVar1
                 ,*(int *)(param_1 + 0x88) + (int)cVar1,*(int *)(param_1 + 0x8c) + (int)cVar1,
                 local_38);
  }
  return;
}

