/* Ghidra address: 0074cab0 */
/* Ghidra symbol: FUN_0074cab0 */


void FUN_0074cab0(longlong param_1,undefined2 param_2,short *param_3,undefined2 param_4)

{
  code *pcVar1;
  
  if (*param_3 == 0x1b) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffc4);
    (*pcVar1)(param_1);
  }
  else if (*(longlong *)(param_1 + 0x358) != 0) {
    (**(code **)(param_1 + 0x358))(*(undefined8 *)(param_1 + 0x360),param_2,param_3,param_4);
  }
  return;
}

