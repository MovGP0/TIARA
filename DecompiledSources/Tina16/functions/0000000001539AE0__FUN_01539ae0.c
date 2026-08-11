/* Ghidra address: 01539ae0 */
/* Ghidra symbol: FUN_01539ae0 */


void FUN_01539ae0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  short sVar1;
  undefined8 *local_30 [3];
  
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((sVar1 != 0x3ec) && (sVar1 = (**(code **)(*param_1 + 0xf8))(param_1), sVar1 != 0x4b0)) {
    return;
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,0,local_30);
  *local_30[0] = param_2;
  FUN_01d3a010(local_30[0],3,param_2);
  (**(code **)(*param_1 + 0x2d0))(param_1,1,local_30);
  FUN_00b95290(local_30[0][1]);
  local_30[0][1] = param_3;
  *(undefined4 *)(local_30[0] + 3) = *(undefined4 *)(param_3 + 0x20);
  return;
}

