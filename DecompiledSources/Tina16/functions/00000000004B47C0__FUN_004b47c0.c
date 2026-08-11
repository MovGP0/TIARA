/* Ghidra address: 004b47c0 */
/* Ghidra symbol: FUN_004b47c0 */


void FUN_004b47c0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
  (**(code **)(*param_1 + 0xd0))(param_1,param_2,param_3,uVar1);
  return;
}

