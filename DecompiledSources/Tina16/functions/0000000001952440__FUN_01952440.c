/* Ghidra address: 01952440 */
/* Ghidra symbol: FUN_01952440 */


undefined4
FUN_01952440(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_01952520(param_1,param_7);
  if (param_1[0x28] != 0) {
    uVar1 = FUN_0197da80(param_1[0x28],param_2,param_3,param_4,param_5,param_6,param_7);
  }
  if ((char)uVar1 == '\0') {
    uVar1 = (**(code **)(*param_1 + 0x160))(param_1,param_2,param_3,param_4,param_5,param_6,param_7)
    ;
  }
  return uVar1;
}

