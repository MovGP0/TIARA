/* Ghidra address: 005ff400 */
/* Ghidra symbol: FUN_005ff400 */


void FUN_005ff400(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x50))(param_1);
    (**(code **)(*param_1 + 0x58))(param_1,0xf);
    (**(code **)(*param_3 + 0x28))(param_3,param_1,param_2);
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  return;
}

