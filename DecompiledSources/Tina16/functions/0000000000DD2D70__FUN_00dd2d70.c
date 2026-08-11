/* Ghidra address: 00dd2d70 */
/* Ghidra symbol: FUN_00dd2d70 */


void FUN_00dd2d70(char *param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[4],0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1,param_2,param_3,uVar1,param_4);
  FUN_016ed5d0(param_2,*param_1 + '\x01',uVar1,0,0,0,0);
  return;
}

