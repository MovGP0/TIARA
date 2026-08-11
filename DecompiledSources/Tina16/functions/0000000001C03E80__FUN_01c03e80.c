/* Ghidra address: 01c03e80 */
/* Ghidra symbol: FUN_01c03e80 */


void FUN_01c03e80(longlong *param_1)

{
  char cVar1;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  FUN_006516f0(param_1);
  cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (cVar1 != '\0') {
    local_38[0] = 0xb411;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_00654c30(param_1,local_38);
  }
  return;
}

