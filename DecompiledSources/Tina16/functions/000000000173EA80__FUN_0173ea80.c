/* Ghidra address: 0173ea80 */
/* Ghidra symbol: FUN_0173ea80 */


void FUN_0173ea80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  undefined1 uVar1;
  
  FUN_0173d2e0(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x182f) == '\0') {
    uVar1 = FUN_0173d820(param_1);
    *(undefined1 *)((longlong)param_1 + 0x3b) = uVar1;
  }
  (**(code **)(*param_1 + 0x68))(param_1,param_3);
  return;
}

