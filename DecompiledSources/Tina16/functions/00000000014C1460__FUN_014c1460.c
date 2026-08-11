/* Ghidra address: 014c1460 */
/* Ghidra symbol: FUN_014c1460 */


undefined8 FUN_014c1460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_48 = param_2;
  local_40 = param_3;
  FUN_004144d0(param_2);
  FUN_0041d830(local_30,local_40);
  iVar5 = 1;
  iVar6 = 1;
  uVar2 = 0;
  if (local_30[0] != 0) {
    uVar2 = *(uint *)(local_30[0] + -4);
  }
  FUN_00415d10(local_48,(ulonglong)uVar2 * 3,0xfde9);
  while( true ) {
    iVar3 = 0;
    if (local_30[0] != 0) {
      iVar3 = *(int *)(local_30[0] + -4);
    }
    if (iVar3 < iVar5) break;
    lVar7 = (longlong)iVar5;
    cVar1 = FUN_014c13f0(auStack_68,*(undefined1 *)(local_30[0] + -1 + lVar7));
    if (cVar1 == '\0') {
      if (*(char *)(local_30[0] + -1 + lVar7) == ' ') {
        lVar7 = FUN_00414df0(local_48);
        *(undefined1 *)(lVar7 + -1 + (longlong)iVar6) = 0x2b;
        iVar6 = iVar6 + 1;
      }
      else {
        lVar4 = FUN_00414df0(local_48);
        *(undefined1 *)(lVar4 + -1 + (longlong)iVar6) = 0x25;
        lVar4 = FUN_00414df0(local_48);
        *(undefined *)(lVar4 + -1 + (longlong)(iVar6 + 1)) =
             PTR_s_0123456789ABCDEF_01f53290
             [(ulonglong)((*(byte *)(local_30[0] + -1 + lVar7) >> 4) + 1) - 1];
        lVar4 = FUN_00414df0(local_48);
        *(undefined *)(lVar4 + -1 + (longlong)(iVar6 + 2)) =
             PTR_s_0123456789ABCDEF_01f53290
             [(ulonglong)((*(byte *)(local_30[0] + -1 + lVar7) & 0xf) + 1) - 1];
        iVar6 = iVar6 + 3;
      }
    }
    else {
      lVar4 = FUN_00414df0(local_48);
      *(undefined1 *)(lVar4 + -1 + (longlong)iVar6) = *(undefined1 *)(local_30[0] + -1 + lVar7);
      iVar6 = iVar6 + 1;
    }
    iVar5 = iVar5 + 1;
  }
  FUN_00415d10(local_48,iVar6 + -1,0xfde9);
  FUN_004144d0(local_30);
  return local_48;
}

