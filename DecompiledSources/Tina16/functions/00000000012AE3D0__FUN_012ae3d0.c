/* Ghidra address: 012ae3d0 */
/* Ghidra symbol: FUN_012ae3d0 */


void FUN_012ae3d0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_29;
  
  uVar5 = (uint)*(byte *)(param_1 + 0xd8a);
  iVar4 = 0;
  if (-1 < (int)(uVar5 - 1)) {
    do {
      local_29 = 0;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4);
      lVar3 = FUN_004113f0(uVar2,&PTR_FUN_011051a8);
      if (*(char *)(lVar3 + 0x11) != '\0') {
        FUN_012adda0(param_1,lVar3,1,param_2,1,&local_29);
      }
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

