/* Ghidra address: 015ae5e0 */
/* Ghidra symbol: FUN_015ae5e0 */


void FUN_015ae5e0(longlong *param_1,undefined8 *param_2,ushort param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint local_1c;
  
  local_1c = (uint)param_3;
  if ((int)param_1[8] < (int)local_1c) {
    local_1c = *(uint *)(param_1 + 8);
  }
  (**(code **)(*param_1 + 0x68))(param_1,*param_2,local_1c,param_4);
  uVar1 = FUN_004095c0(param_3);
  FUN_015ae9c0(param_1,*param_2,uVar1,param_3);
  FUN_004095f0(*param_2);
  *param_2 = uVar1;
  (**(code **)(*param_1 + 0x70))(param_1);
  (**(code **)(*param_1 + 0x38))(param_1,0,1);
  return;
}

