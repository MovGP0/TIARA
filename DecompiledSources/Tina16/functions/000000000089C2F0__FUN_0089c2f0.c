/* Ghidra address: 0089c2f0 */
/* Ghidra symbol: FUN_0089c2f0 */


undefined8 FUN_0089c2f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  FUN_00414480(param_2);
  local_20 = FUN_0089bc50(&PTR_FUN_008996f8,1);
  (**(code **)(*param_1 + 0x140))(param_1,local_20);
  iVar2 = *(int *)(*(longlong *)(local_20 + 0x10) + 0x10);
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar1 = FUN_0089bcf0(local_20,local_24);
      if (*(char *)(lVar1 + 0x18) == '\0') {
        lVar1 = FUN_0089bcf0(local_20,local_24);
        FUN_00414ad0(param_2,*(undefined8 *)(lVar1 + 0x20));
        FUN_0089c3b0(0,local_30);
        return param_2;
      }
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  return param_2;
}

