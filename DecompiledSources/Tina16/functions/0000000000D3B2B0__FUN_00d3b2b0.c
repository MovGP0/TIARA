/* Ghidra address: 00d3b2b0 */
/* Ghidra symbol: FUN_00d3b2b0 */


void FUN_00d3b2b0(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined1 local_38 [20];
  undefined4 local_24;
  
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0x98))(param_1);
    FUN_00d3cb70(param_1,local_38);
    *(undefined4 *)(param_1 + 0x11) = local_24;
  }
  return;
}

