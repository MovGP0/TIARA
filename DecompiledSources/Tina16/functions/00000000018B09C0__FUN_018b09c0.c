/* Ghidra address: 018b09c0 */
/* Ghidra symbol: FUN_018b09c0 */


void FUN_018b09c0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x571) = 1;
  lVar2 = FUN_018b0ad0(param_1,param_2);
  FUN_01977650(*(undefined8 *)(lVar2 + 0x30),0);
  lVar2 = FUN_018b0ad0(param_1,param_2);
  if (*(char *)(lVar2 + 0x58) != '\0') {
    lVar2 = FUN_018b0ad0(param_1,param_2);
    iVar1 = FUN_01980450(*(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x208));
    if (iVar1 == 1) {
      lVar2 = FUN_018b0ad0(param_1,param_2);
      FUN_00410f20(*(undefined8 *)(lVar2 + 0x30));
      lVar2 = FUN_018b0ad0(param_1,param_2);
      *(undefined8 *)(lVar2 + 0x30) = 0;
      goto LAB_018b0a6d;
    }
  }
  lVar2 = FUN_018b0ad0(param_1,param_2);
  lVar3 = FUN_018b0ad0(param_1,param_2);
  FUN_01980550(*(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x208),*(undefined8 *)(lVar3 + 0x38));
LAB_018b0a6d:
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x571) = 0;
  FUN_004b25e0(param_1,param_2);
  *(int *)(param_1 + 0x40) = param_2 + -1;
  return;
}

