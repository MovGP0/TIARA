/* Ghidra address: 013faa60 */
/* Ghidra symbol: FUN_013faa60 */


undefined8 FUN_013faa60(undefined8 param_1,longlong *param_2)

{
  short sVar1;
  
  sVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
  if ((((sVar1 != 0xb) && (sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 != 0x6e)) &&
      (sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 != 0xcc)) &&
     ((sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 != 0xd6 &&
      (sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 != 0xe0)))) {
    return 0;
  }
  return 1;
}

