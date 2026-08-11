/* Ghidra address: 015209c0 */
/* Ghidra symbol: FUN_015209c0 */


void FUN_015209c0(longlong *param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = *param_3;
  FUN_01507de0(param_1);
  if (sVar1 == 0xd) {
    (**(code **)(**(longlong **)(param_1[0x180] + 0x4f0) + 0x10))
              (*(longlong **)(param_1[0x180] + 0x4f0),*(undefined8 *)(param_1[0x176] + 0x4f0));
    (**(code **)(*(longlong *)param_1[0x180] + 0x268))((longlong *)param_1[0x180],0);
    (**(code **)(*param_1 + 0x658))(param_1,param_1);
    FUN_01506c70(param_1);
    FUN_010f67e0(param_1,1,1);
  }
  return;
}

