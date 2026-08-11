/* Ghidra address: 01752ae0 */
/* Ghidra symbol: FUN_01752ae0 */


undefined8 FUN_01752ae0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  (**(code **)(*param_1 + 0x70))(param_1,uVar1);
  FUN_017524d0(param_1,param_2);
  return 0;
}

