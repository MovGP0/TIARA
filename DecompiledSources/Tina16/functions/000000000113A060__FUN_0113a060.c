/* Ghidra address: 0113a060 */
/* Ghidra symbol: FUN_0113a060 */


void FUN_0113a060(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0x958) + 0x328) == '\0') {
    FUN_01137540(param_1,1);
    FUN_006807e0(*(undefined8 *)(param_1 + 0x960),0);
    FUN_006807e0(*(undefined8 *)(param_1 + 0x9f0),0);
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x290))(*(longlong **)(param_1 + 0x960),0);
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x288))(*(longlong **)(param_1 + 0x960),1);
    (**(code **)(**(longlong **)(param_1 + 0x9c0) + 0x128))(*(longlong **)(param_1 + 0x9c0),1);
    (**(code **)(**(longlong **)(param_1 + 0x9c8) + 0x128))(*(longlong **)(param_1 + 0x9c8),1);
    (**(code **)(**(longlong **)(param_1 + 0x9e0) + 0x128))(*(longlong **)(param_1 + 0x9e0),1);
    *(undefined4 *)(param_1 + 0xa6c) = 0;
  }
  else {
    FUN_006807e0(*(undefined8 *)(param_1 + 0x960),0);
    FUN_006807e0(*(undefined8 *)(param_1 + 0x9f0),0);
    (**(code **)(**(longlong **)(param_1 + 0x9c0) + 0x128))(*(longlong **)(param_1 + 0x9c0),0);
    (**(code **)(**(longlong **)(param_1 + 0x9c8) + 0x128))(*(longlong **)(param_1 + 0x9c8),0);
    (**(code **)(**(longlong **)(param_1 + 0x9e0) + 0x128))(*(longlong **)(param_1 + 0x9e0),0);
  }
  return;
}

