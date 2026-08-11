/* Ghidra address: 00454240 */
/* Ghidra symbol: FUN_00454240 */


undefined4 FUN_00454240(longlong param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_28 [2];
  undefined1 local_20;
  
  uVar3 = param_2;
  if (*(uint *)(param_1 + 0x14) < param_2) {
    local_20 = 0;
    uVar3 = CONCAT31((int3)(param_2 >> 8),1);
    local_28[0] = param_2;
    FUN_0044d8d0(&PTR_FUN_004355d0,uVar3,PTR_PTR_02004940,local_28,0);
    FUN_004134c0();
  }
  iVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 8) + -4);
  }
  if (iVar1 < (int)uVar3) {
    FUN_00455840(param_1);
  }
  uVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + -4);
  }
  return uVar2;
}

