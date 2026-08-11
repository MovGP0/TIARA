/* Ghidra address: 01143a60 */
/* Ghidra symbol: FUN_01143a60 */


void FUN_01143a60(undefined8 param_1)

{
  longlong *plVar1;
  
  if ((*(double *)(PTR_DAT_02004010 + 0x3d6) < 0.0) ||
     (*(double *)(PTR_DAT_02004010 + 0x3de) <= 0.0)) {
    FUN_0113f440(*(undefined8 *)(PTR_DAT_02004010 + 0x2b0),*(undefined8 *)(PTR_DAT_02004010 + 0x2b8)
                 ,0,0,param_1,PTR_DAT_02004010 + 0x3d5);
  }
  else {
    FUN_0113f440(0,1.0 / *(double *)(PTR_DAT_02004010 + 0x3de) +
                   *(double *)(PTR_DAT_02004010 + 0x3d6),0,0,param_1,PTR_DAT_02004010 + 0x3d5);
  }
  FUN_011431d0(0,2.0 / *(double *)(PTR_DAT_02004010 + 0x3de) + *(double *)(PTR_DAT_02004010 + 0x3d6)
              );
  plVar1 = (longlong *)FUN_01140920(&PTR_FUN_0113f968,1,*(undefined8 *)PTR_DAT_02004030,0,0);
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

