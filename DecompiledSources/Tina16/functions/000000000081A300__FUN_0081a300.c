/* Ghidra address: 0081a300 */
/* Ghidra symbol: FUN_0081a300 */


void FUN_0081a300(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_38 [40];
  
  param_1[0xb] = *(longlong *)(param_2 + 8);
  if (param_1[0x14] != 0) {
    cVar1 = FUN_0081a250(auStack_38);
    if ((cVar1 == '\0') || (*(char *)(param_1[0x14] + 0xc1) != '\0')) {
      cVar1 = FUN_0081a250(auStack_38);
      if ((cVar1 == '\0') && (*(char *)(param_1[0x14] + 0xc1) != '\0')) {
        FUN_00813e30(param_1[0x14],0);
      }
    }
    else {
      FUN_00813e30(param_1[0x14],1);
    }
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  FUN_00818770(param_1,1);
  return;
}

