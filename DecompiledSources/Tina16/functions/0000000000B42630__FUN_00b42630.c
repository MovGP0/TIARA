/* Ghidra address: 00b42630 */
/* Ghidra symbol: FUN_00b42630 */


void FUN_00b42630(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ushort local_1c;
  ushort local_1a [5];
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + -4);
  }
  if (iVar1 < 4) {
    uVar2 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
    FUN_004134c0(uVar2);
  }
  uVar2 = FUN_00414df0(param_1 + 0x38);
  FUN_00409a70(uVar2,local_1a,2);
  lVar3 = FUN_00414df0(param_1 + 0x38);
  FUN_00409a70(lVar3 + 2,&local_1c,2);
  if ((local_1a[0] == 0x19) || (local_1a[0] == 8)) {
    iVar1 = FUN_00b41f80(*(undefined8 *)(param_1 + 0x50));
    if (0 < iVar1) {
      iVar1 = FUN_00b41f80(*(undefined8 *)(param_1 + 0x50));
      lVar3 = FUN_00b41f60(*(undefined8 *)(param_1 + 0x50),iVar1 + -1);
      *(uint *)(lVar3 + 0x2c) = (uint)local_1c;
    }
  }
  *(uint *)(*(longlong *)(param_1 + 0x50) + 0x30) = (uint)local_1a[0];
  return;
}

