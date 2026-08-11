/* Ghidra address: 019523a0 */
/* Ghidra symbol: FUN_019523a0 */


undefined4
FUN_019523a0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_01952520(param_1,param_5);
  if (param_1[0x28] != 0) {
    uVar1 = FUN_0197d9c0(param_1[0x28],param_2,param_3,param_4,param_5);
  }
  if ((char)uVar1 == '\0') {
    uVar1 = (**(code **)(*param_1 + 0x168))(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

