/* Ghidra address: 007d5c50 */
/* Ghidra symbol: FUN_007d5c50 */


undefined4 FUN_007d5c50(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar1 = FUN_007d59d0(param_1,0,0);
  }
  else {
    uVar2 = FUN_007d56e0(param_1);
    uVar3 = FUN_0060ce20(param_2);
    uVar1 = thunk_FUN_03d3082c(uVar2,0xffffffff,uVar3);
  }
  (**(code **)(*param_1 + 0x98))(param_1);
  return uVar1;
}

