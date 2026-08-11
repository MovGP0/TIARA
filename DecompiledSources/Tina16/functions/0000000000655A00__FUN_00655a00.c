/* Ghidra address: 00655a00 */
/* Ghidra symbol: FUN_00655a00 */


void FUN_00655a00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_8;
  uStack_38 = param_8[1];
  uStack_30 = param_8[2];
  if (*(longlong *)(param_1 + 0x438) != 0) {
    (**(code **)(param_1 + 0x438))
              (*(undefined8 *)(param_1 + 0x440),param_1,param_2,param_3,param_4,param_5,param_6,
               param_7,&local_40);
  }
  return;
}

