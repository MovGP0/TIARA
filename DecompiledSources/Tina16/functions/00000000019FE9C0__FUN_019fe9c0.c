/* Ghidra address: 019fe9c0 */
/* Ghidra symbol: FUN_019fe9c0 */


undefined8 FUN_019fe9c0(undefined8 param_1,longlong *param_2)

{
  short sVar1;
  
  sVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
  if ((((sVar1 != 5) && (sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 != 0x21)) &&
      (sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 != 0x77)) &&
     (sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 != 4)) {
    return 0;
  }
  return 1;
}

