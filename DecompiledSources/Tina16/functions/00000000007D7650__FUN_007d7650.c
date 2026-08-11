/* Ghidra address: 007d7650 */
/* Ghidra symbol: FUN_007d7650 */


undefined8 FUN_007d7650(longlong *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_007d56e0(param_2);
    FUN_007d6e60(param_1,uVar1,param_3);
    uVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  }
  return uVar1;
}

