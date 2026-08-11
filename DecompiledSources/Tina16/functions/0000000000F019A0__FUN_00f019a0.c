/* Ghidra address: 00f019a0 */
/* Ghidra symbol: FUN_00f019a0 */


void FUN_00f019a0(longlong param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_38 [24];
  
  if (((char)param_2 == '\0') && (*(char *)(param_1 + 0x530) != '\0')) {
    FUN_00498350(local_38,*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x518),0,
                 *(int *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    uVar2 = FUN_00498310(param_4,param_5);
    iVar1 = thunk_FUN_03f16006(local_38,uVar2);
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x531) == '\0') {
        FUN_0064e190(param_1,1);
        *(undefined1 *)(param_1 + 0x532) = 1;
        FUN_00f01ef0(param_1,param_4,param_5);
        if (*(longlong *)(param_1 + 0x528) != 0) {
          FUN_00f014a0(param_1);
        }
      }
      else {
        FUN_00f012b0(param_1,0);
      }
    }
  }
  FUN_00650920(param_1,param_2,param_3,param_4,param_5);
  return;
}

