/* Ghidra address: 01c03420 */
/* Ghidra symbol: FUN_01c03420 */


longlong FUN_01c03420(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1[0xa5];
  param_1[0xa5] = 0;
  FUN_00410f20(lVar1);
  lVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
  plVar2 = (longlong *)(**(code **)(lVar1 + 0x78))(lVar1,1,param_1);
  param_1[0xa5] = (longlong)plVar2;
  (**(code **)(*plVar2 + 0x50))(plVar2,L"DefaultColorMap");
  FUN_004d4540(param_1[0xa5],1);
  FUN_01bff100(param_1[0xa5],param_1);
  return param_1[0xa5];
}

