/* Ghidra address: 00ab4810 */
/* Ghidra symbol: FUN_00ab4810 */


void FUN_00ab4810(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0xd0);
  iVar3 = 0;
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + -4);
  }
  if (0 < iVar3 - param_2) {
    FUN_00409a70(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x108) + (longlong)param_2 * 4,
                 *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x108) + (longlong)(param_2 + -1) * 4
                 ,(longlong)((iVar3 - param_2) * 4));
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0xe0);
  iVar3 = 0;
  if (lVar1 != 0) {
    iVar3 = (int)*(undefined8 *)(lVar1 + -8);
  }
  if (0 < iVar3 - param_2) {
    FUN_00409a70(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xe0) + (longlong)param_2,
                 *(longlong *)(*(longlong *)(param_1 + 0x40) + 0xe0) + (longlong)(param_2 + -1),
                 (longlong)(iVar3 - param_2));
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0xe0);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_00419260(*(longlong *)(param_1 + 0x40) + 0xe0,&DAT_00a84d10,1,lVar2 + -1);
  FUN_00416e20(*(longlong *)(param_1 + 0x40) + 0xd0,param_2,1);
  param_2 = param_2 + -1;
  FUN_00ac5050(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x100),param_2);
  FUN_00a94a90(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x118),param_2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18));
  FUN_00ac5050(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xf8),param_2);
  return;
}

