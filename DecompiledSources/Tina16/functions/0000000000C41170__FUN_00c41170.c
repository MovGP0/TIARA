/* Ghidra address: 00c41170 */
/* Ghidra symbol: FUN_00c41170 */


undefined8 FUN_00c41170(longlong param_1,undefined8 param_2,char param_3)

{
  short sVar1;
  undefined8 uVar2;
  
  if (param_3 == '\0') {
    sVar1 = FUN_00c3f550(param_1);
  }
  else {
    sVar1 = FUN_00c3f530(param_1);
  }
  if (sVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(int)sVar1);
  }
  return uVar2;
}

