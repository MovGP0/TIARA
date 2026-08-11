/* Ghidra address: 00bbbe90 */
/* Ghidra symbol: FUN_00bbbe90 */


void FUN_00bbbe90(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_38;
  longlong local_30;
  
  local_50 = 0;
  local_38 = *param_2;
  local_30 = param_2[1];
  if (&stack0x00000000 == (undefined1 *)0x38) {
    FUN_00410ae0(*param_1,0xffffffffffffffe8);
    local_48 = local_50;
    local_40 = 0x11;
    uVar2 = FUN_0044d530(&PTR_FUN_00bb9440,1,
                         L"%s.Remove: the parameter `AEvent\' must be specified.",0xfffffffffffffff0
                         ,0);
    FUN_004134c0(uVar2);
  }
  lVar1 = param_1[1];
  for (iVar4 = *(int *)(lVar1 + 0x10) + -1; 0 < iVar4; iVar4 = iVar4 + -2) {
    lVar3 = FUN_004aeac0(lVar1,iVar4);
    if (lVar3 == local_30) {
      iVar5 = iVar4 + -1;
      lVar3 = FUN_004aeac0(lVar1,iVar5);
      if (lVar3 == local_38) {
        FUN_004ae870(lVar1,iVar5);
        FUN_004ae870(lVar1,iVar5);
      }
    }
  }
  FUN_00414480(&local_50);
  return;
}

