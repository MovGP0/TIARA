/* Ghidra address: 006ddff0 */
/* Ghidra symbol: FUN_006ddff0 */


undefined8 FUN_006ddff0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  
  FUN_0040d200(param_2,0x10,0);
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar1 = FUN_006dc7a0(param_1);
    FUN_00611f20(uVar1,*(undefined8 *)(param_1 + 0x20),param_2,-(uint)(param_3 != '\0'));
  }
  return param_2;
}

