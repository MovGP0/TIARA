/* Ghidra address: 015175f0 */
/* Ghidra symbol: FUN_015175f0 */


void FUN_015175f0(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    FUN_004095f0(lVar1,(longlong)(*(int *)(param_1 + 0xb8) * iVar2));
  }
  *(uint *)(param_1 + 0xb8) = param_2 & 0xff;
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}

