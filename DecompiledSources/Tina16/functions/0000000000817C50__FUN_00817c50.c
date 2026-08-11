/* Ghidra address: 00817c50 */
/* Ghidra symbol: FUN_00817c50 */


void FUN_00817c50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint local_58 [4];
  int local_48;
  int iStack_44;
  uint local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 1;
  uVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xf8) + *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 300) + *(int *)(param_1 + 0x10);
  local_30 = CONCAT44(iVar5,uVar4);
  local_48 = uVar4 + 0x32;
  local_38 = CONCAT44(iVar5,local_48);
  iStack_44 = iVar5;
  local_40 = uVar4;
  iStack_3c = iVar5;
  lVar1 = FUN_00809b30(DAT_02012670,&local_30,0);
  lVar2 = FUN_00809b30(DAT_02012670,&local_38,0);
  if (lVar1 != lVar2) {
    uVar3 = FUN_00809b30(DAT_02012670,&local_38,0);
    FUN_00807850(uVar3,local_58);
    uVar4 = local_58[0];
  }
  FUN_00814be0(param_1);
  uVar3 = FUN_00786090(*(undefined8 *)(param_1 + 0x20));
  thunk_FUN_041b2403(uVar3,0x313,0,uVar4 & 0xffff | iVar5 * 0x10000);
  FUN_00814c40(param_1);
  *(undefined1 *)(param_1 + 0xc3) = 0;
  FUN_00814f60(param_1);
  return;
}

