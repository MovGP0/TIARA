/* Ghidra address: 007de430 */
/* Ghidra symbol: FUN_007de430 */


void FUN_007de430(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  if (*(longlong *)(param_1 + 0x120) != 0) {
    (**(code **)(param_1 + 0x120))
              (*(undefined8 *)(param_1 + 0x128),param_1,param_2,&local_38,param_4);
  }
  return;
}

