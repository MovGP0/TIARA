/* Ghidra address: 004d3a80 */
/* Ghidra symbol: FUN_004d3a80 */


undefined8 FUN_004d3a80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_38;
  uint local_2c;
  
  uVar2 = 0;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar1 = FUN_004e0f60(&PTR_FUN_0048f0b8,1);
      *(longlong *)(param_1 + 0x60) = lVar1;
      FUN_0059b550(lVar1 + 8,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10));
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
      local_2c = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar1 = *(longlong *)(param_1 + 0x20);
          if (*(uint *)(lVar1 + 0x10) <= local_2c) {
            FUN_00594f90();
          }
          local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)local_2c * 8);
          FUN_005952e0(*(longlong *)(param_1 + 0x60) + 8,&local_38,local_2c);
          local_2c = local_2c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_004e1b80(*(undefined8 *)(param_1 + 0x60),DAT_020115e0);
    }
    uVar2 = FUN_004d3b70(param_1,param_2,&local_2c);
  }
  return uVar2;
}

