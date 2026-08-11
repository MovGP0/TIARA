/* Ghidra address: 008e6cc0 */
/* Ghidra symbol: FUN_008e6cc0 */


undefined8 FUN_008e6cc0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined1 local_1c [4];
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + -4) >> 1;
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,uVar1,local_1c);
  return param_2;
}

