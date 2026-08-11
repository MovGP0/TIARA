/* Ghidra address: 00d3c3b0 */
/* Ghidra symbol: FUN_00d3c3b0 */


undefined8 FUN_00d3c3b0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,2);
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,0x14);
  return CONCAT44(uVar2,uVar1);
}

