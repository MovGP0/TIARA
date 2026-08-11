/* Ghidra address: 0074dae0 */
/* Ghidra symbol: FUN_0074dae0 */


void FUN_0074dae0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = FUN_0043e210(*(undefined8 *)(param_1 + 200),param_2);
  if (iVar2 != 0) {
    FUN_00414ad0(param_1 + 200,param_2);
    FUN_00442660(*(longlong *)(param_1 + 0xa0) + 0x28,*(undefined8 *)(param_1 + 200),0x7f);
    iVar2 = 0;
    if (*(longlong *)(param_1 + 200) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 200) + -4);
    }
    if (iVar2 < 1) {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xa0) + 0x14);
      *puVar1 = *puVar1 & 0xfffffffb;
    }
    else {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xa0) + 0x14);
      *puVar1 = *puVar1 | 4;
    }
    FUN_0074e0e0(param_1);
  }
  return;
}

