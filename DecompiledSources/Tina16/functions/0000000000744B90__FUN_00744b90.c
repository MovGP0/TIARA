/* Ghidra address: 00744b90 */
/* Ghidra symbol: FUN_00744b90 */


void FUN_00744b90(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_38 [40];
  
  (**(code **)(*param_1 + 0x1a8))(param_1,param_3);
  if ((char)param_1[0x99] != '\0') {
    FUN_00745810(param_1,param_3);
  }
  iVar1 = FUN_00654c00(param_1);
  if (0 < iVar1) {
    FUN_00744750(auStack_38);
  }
  return;
}

