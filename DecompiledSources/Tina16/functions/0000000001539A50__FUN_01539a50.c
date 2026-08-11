/* Ghidra address: 01539a50 */
/* Ghidra symbol: FUN_01539a50 */


void FUN_01539a50(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  short sVar1;
  undefined8 *local_30 [2];
  
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((sVar1 != 0x3ec) && (sVar1 = (**(code **)(*param_1 + 0xf8))(param_1), sVar1 != 0x4b0)) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,0,local_30);
  *param_2 = *local_30[0];
  (**(code **)(*param_1 + 0x2d0))(param_1,1,local_30);
  *param_3 = local_30[0][1];
  return;
}

