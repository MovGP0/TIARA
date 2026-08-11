/* Ghidra address: 00c0a550 */
/* Ghidra symbol: FUN_00c0a550 */


void FUN_00c0a550(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  
  if ((*(uint *)((longlong)param_1 + 0x63a) & 0x100) != 0) {
    cVar1 = FUN_00bd10c0(param_1[0xaa]);
    if (cVar1 != '\0') {
      FUN_00bd1210(param_1[0xaa]);
    }
  }
  FUN_00bf3750(param_1);
  if (param_4 == '\0') {
    FUN_00bfa470(param_1,param_3);
  }
  else {
    cVar1 = FUN_00bf2c80(param_1);
    if (cVar1 == '\0') {
      FUN_00bfa470(param_1,param_2);
    }
    FUN_00bfa6c0(param_1,param_3);
  }
  (**(code **)(*param_1 + 0x2a8))(param_1,param_3);
  FUN_00bf28a0(param_1);
  return;
}

