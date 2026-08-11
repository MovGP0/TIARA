/* Ghidra address: 00d0d330 */
/* Ghidra symbol: FUN_00d0d330 */


undefined8 FUN_00d0d330(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  uVar1 = (**(code **)(*param_1 + 0x60))(*param_1);
  FUN_00cd7480(param_2,uVar2,uVar1,param_3);
  return param_2;
}

