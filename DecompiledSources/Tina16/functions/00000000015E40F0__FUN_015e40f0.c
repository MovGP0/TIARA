/* Ghidra address: 015e40f0 */
/* Ghidra symbol: FUN_015e40f0 */


void FUN_015e40f0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x188);
  (**(code **)(*param_2 + 0x50))(param_2,param_3,1);
  (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(param_1 + 0x1a8),uVar1 / 2);
  FUN_015e3670(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(param_1 + 0x1a0),2);
  return;
}

