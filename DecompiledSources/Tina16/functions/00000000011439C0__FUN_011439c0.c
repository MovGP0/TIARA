/* Ghidra address: 011439c0 */
/* Ghidra symbol: FUN_011439c0 */


void FUN_011439c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  FUN_0113f830(param_2,param_3,&DAT_020301d0,&DAT_020301d8);
  FUN_0113f440(DAT_020301d0,DAT_020301d8,param_2,0,param_1,PTR_DAT_02004010 + 0x3d5);
  plVar1 = (longlong *)
           FUN_01140920(&PTR_FUN_0113f968,1,*(undefined8 *)PTR_DAT_02004030,param_2,param_3);
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

