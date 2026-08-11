/* Ghidra address: 018ab020 */
/* Ghidra symbol: FUN_018ab020 */


void FUN_018ab020(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  local_20 = FUN_0196e3c0(&PTR_FUN_0193aeb8,1,0);
  lVar1 = (**(code **)(*param_1 + 0x278))();
  iVar3 = *(int *)(*(longlong *)(lVar1 + 0x88) + 0x10);
  local_24 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = (**(code **)(*param_1 + 0x278))(param_1);
      uVar2 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x88),local_24);
      FUN_004ae7e0(*(undefined8 *)(local_20 + 0x80),uVar2);
      local_24 = local_24 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_01976ca0(local_20,1,0);
  (**(code **)(**(longlong **)(local_20 + 0x80) + 0x10))(*(longlong **)(local_20 + 0x80));
  FUN_00410f20(local_20);
  return;
}

