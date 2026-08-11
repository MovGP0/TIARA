/* Ghidra address: 00622ce0 */
/* Ghidra symbol: FUN_00622ce0 */


undefined4 FUN_00622ce0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + 0x68;
  }
  uVar1 = thunk_FUN_041e9363(lVar2,param_2,0xffffffff);
  (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_2 != 0);
  return uVar1;
}

