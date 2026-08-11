/* Ghidra address: 010bb750 */
/* Ghidra symbol: FUN_010bb750 */


void FUN_010bb750(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  cVar1 = FUN_010bbb70(param_1,*(undefined8 *)(param_1 + 0x30),0,local_2c);
  if (cVar1 == '\0') {
    FUN_00b956d0(param_3,0,0,0,0);
  }
  else {
    FUN_00b956d0(param_3,local_28,local_24,local_20,local_1c);
  }
  FUN_00b95860(param_3,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  return;
}

