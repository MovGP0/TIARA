/* Ghidra address: 0137a880 */
/* Ghidra symbol: FUN_0137a880 */


void FUN_0137a880(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (((((char)param_1[0x13] != '\x04') ||
       (iVar1 = (**(code **)(*param_1 + 0x148))(param_1), iVar1 != 0)) &&
      (((char)param_1[0x13] != '\x04' ||
       (iVar1 = (**(code **)(*param_1 + 0x148))(param_1), iVar1 != 5)))) &&
     ((char)param_1[0x13] != '\b')) {
    (**(code **)(*param_1 + 0x198))(param_1,param_2);
    return;
  }
  (**(code **)(*param_1 + 400))(param_1,param_2);
  return;
}

