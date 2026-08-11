/* Ghidra address: 00f022c0 */
/* Ghidra symbol: FUN_00f022c0 */


void FUN_00f022c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_38 [24];
  undefined1 local_20 [8];
  
  thunk_FUN_03cc0d62(local_20);
  if (*(char *)(param_1 + 0x530) != '\0') {
    FUN_00498350(local_38,*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x518),0,
                 *(int *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    uVar2 = FUN_0064d3a0(param_1,local_20);
    iVar1 = thunk_FUN_03f16006(local_38,uVar2);
    if (iVar1 != 0) {
      uVar2 = thunk_FUN_03978312(0,0x7f00);
      thunk_FUN_04176eb1(uVar2);
      return;
    }
  }
  FUN_006587d0(param_1,param_2);
  return;
}

