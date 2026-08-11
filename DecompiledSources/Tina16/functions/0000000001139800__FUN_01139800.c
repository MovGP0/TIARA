/* Ghidra address: 01139800 */
/* Ghidra symbol: FUN_01139800 */


void FUN_01139800(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xa09) != '\0') {
    uVar1 = FUN_0065b870(param_1);
    FUN_00f833a0(uVar1,0x52c,0,0x7e0);
    if (*(char *)(param_1 + 0xa8a) == '\x01') {
      *(undefined1 *)(param_1 + 0xa09) = 0;
      *(undefined1 *)(param_1 + 0xa8a) = 0;
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0xa80),0x52e,0,0);
    }
    if (*(char *)(param_1 + 0xa20) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x900) + 0x128))(*(longlong **)(param_1 + 0x900),1);
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x128))(*(longlong **)(param_1 + 0x8f8),1);
      (**(code **)(**(longlong **)(param_1 + 0x908) + 0x128))(*(longlong **)(param_1 + 0x908),1);
      (**(code **)(**(longlong **)(param_1 + 0x9f8) + 0x128))(*(longlong **)(param_1 + 0x9f8),1);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x950) + 0x128))(*(longlong **)(param_1 + 0x950),1);
    }
    if (*(char *)(param_1 + 0xa8a) == '\0') {
      *(undefined1 *)(param_1 + 0xa09) = 0;
      *(undefined1 *)(param_1 + 0xa08) = 1;
    }
  }
  return;
}

