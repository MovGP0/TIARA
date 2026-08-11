/* Ghidra address: 0196b130 */
/* Ghidra symbol: FUN_0196b130 */


void FUN_0196b130(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_0064fca0(param_1[0x30],0xb007,0,*(undefined8 *)(param_1[0x30] + 0x4c0));
  uVar1 = (**(code **)(*param_1 + 0x118))(param_1);
  FUN_01973030(uVar1,param_2,param_1[0x39],1);
  return;
}

