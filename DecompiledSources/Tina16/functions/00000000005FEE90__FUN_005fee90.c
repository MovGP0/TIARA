/* Ghidra address: 005fee90 */
/* Ghidra symbol: FUN_005fee90 */


void FUN_005fee90(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,9);
  uVar1 = FUN_005fdb10(param_1[0x10]);
  thunk_FUN_03984819(param_1[0xc],param_2,uVar1);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

