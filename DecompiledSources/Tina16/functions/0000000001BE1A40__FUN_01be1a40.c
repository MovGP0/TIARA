/* Ghidra address: 01be1a40 */
/* Ghidra symbol: FUN_01be1a40 */


void FUN_01be1a40(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_38 [48];
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if ((cVar1 == '\0') && (*(char *)(param_1[0xba] + 0x593) == '\0')) {
    cVar1 = *(char *)((longlong)param_1 + 0x579);
    if (cVar1 == '\x01') {
      FUN_01be17c0(auStack_38);
    }
    else if (cVar1 == '\x02') {
      FUN_01be18f0(auStack_38,&DAT_01fe11a8);
    }
    else if (cVar1 == '\x03') {
      if ((int)param_1[0xbe] < 0x65) {
        FUN_01be18f0(auStack_38,&DAT_01fe11b0);
      }
      else {
        *(int *)(param_1 + 0xbe) = (int)param_1[0xbe] + -100;
        FUN_01be18f0(auStack_38,&DAT_01fe11b0);
        *(int *)(param_1 + 0xbe) = (int)param_1[0xbe] + 100;
      }
    }
    else if (cVar1 == '\x04') {
      FUN_01be18f0(auStack_38,&DAT_01fe11b8);
    }
  }
  return;
}

