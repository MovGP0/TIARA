/* Ghidra address: 0085a3d0 */
/* Ghidra symbol: FUN_0085a3d0 */


void FUN_0085a3d0(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 local_38 [24];
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x538) != 0) {
    FUN_0064d000(param_1,local_38);
    uVar1 = FUN_0064d1f0(param_1,local_38);
    local_20._4_4_ = (int)(uVar1 >> 0x20);
    iVar2 = local_20._4_4_ + *(int *)(param_1 + 0x9c);
    local_20 = uVar1;
    (**(code **)(**(longlong **)(param_1 + 0x538) + 0xa8))
              (*(longlong **)(param_1 + 0x538),uVar1 & 0xffffffff,iVar2);
  }
  return;
}

