/* Ghidra address: 01be9fd0 */
/* Ghidra symbol: FUN_01be9fd0 */


void FUN_01be9fd0(longlong *param_1)

{
  char cVar1;
  
  FUN_00651660(param_1);
  cVar1 = FUN_0064c470(param_1);
  if (cVar1 != '\x01') {
    *(undefined1 *)(param_1 + 0x6e) = 1;
    (**(code **)(*param_1 + 600))(param_1,1);
    cVar1 = (**(code **)(*param_1 + 0x238))(param_1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
      if ((cVar1 == '\0') && (param_1[0x6d] != 0)) {
        *(undefined8 *)(*(longlong *)(param_1[0x6d] + 0x5d0) + 0x580) = 0;
      }
    }
  }
  return;
}

