/* Ghidra address: 004b6de0 */
/* Ghidra symbol: FUN_004b6de0 */


undefined8 FUN_004b6de0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,0,1);
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,0,2);
  (**(code **)(*param_1 + 0x50))(param_1,uVar1,0);
  return uVar2;
}

