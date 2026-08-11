/* Ghidra address: 005fef80 */
/* Ghidra symbol: FUN_005fef80 */


void FUN_005fef80(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,9);
  uVar1 = FUN_005fdb10(param_1[0x10]);
  FUN_00429590(param_1[0xc],param_2,uVar1);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

