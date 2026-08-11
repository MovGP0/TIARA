/* Ghidra address: 01c07a10 */
/* Ghidra symbol: FUN_01c07a10 */


void FUN_01c07a10(longlong *param_1,char param_2)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  if (param_2 != (char)param_1[0x65]) {
    *(char *)(param_1 + 0x65) = param_2;
    if ((param_2 != '\0') && (param_1[0xf] != 0)) {
      local_38[0] = 0xb411;
      local_30 = 0;
      local_20 = 0;
      local_28 = param_1;
      FUN_00654c30(param_1[0xf],local_38);
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

