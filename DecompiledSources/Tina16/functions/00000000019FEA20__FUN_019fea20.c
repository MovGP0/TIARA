/* Ghidra address: 019fea20 */
/* Ghidra symbol: FUN_019fea20 */


undefined8 FUN_019fea20(undefined8 param_1,longlong *param_2)

{
  short sVar1;
  
  sVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
  if ((((sVar1 != 0xe) && (sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 != 0x10)) &&
      (sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 != 6)) &&
     (sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 != 0x22)) {
    return 0;
  }
  return 1;
}

