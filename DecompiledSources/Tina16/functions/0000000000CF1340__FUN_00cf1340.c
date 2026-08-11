/* Ghidra address: 00cf1340 */
/* Ghidra symbol: FUN_00cf1340 */


undefined8 FUN_00cf1340(longlong param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 == '\0') {
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x38);
    }
  }
  else if (param_3 == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
  else if (param_3 == '\x02') {
    if (param_2 == 0) {
      FUN_00cf0e80(param_1);
      uVar1 = *(undefined8 *)(param_1 + 0x40);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x38);
    }
  }
  return uVar1;
}

