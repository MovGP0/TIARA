/* Ghidra address: 00a28d60 */
/* Ghidra symbol: FUN_00a28d60 */


int FUN_00a28d60(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  ushort local_48 [4];
  undefined1 local_40;
  uint local_38;
  undefined1 local_30;
  int local_28 [2];
  undefined1 local_20;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48);
  iVar6 = 0;
  if (lVar3 != 0) {
    iVar6 = *(int *)(lVar3 + -4);
  }
  if (iVar6 - *(int *)(*(longlong *)(param_1 + 0x40) + 0x44) < 2) {
    iVar6 = 0;
    if (lVar3 != 0) {
      iVar6 = *(int *)(lVar3 + -4);
    }
    local_28[0] = (iVar6 - *(int *)(*(longlong *)(param_1 + 0x40) + 0x44)) + 1;
    local_20 = 0;
    local_58 = 0;
    uVar5 = FUN_0044d530(&PTR_FUN_00436080,CONCAT71((int7)((ulonglong)lVar3 >> 8),1),
                         L"Invalid escape sequence: 3 digits expected, but %d found",local_28);
    FUN_004134c0(uVar5);
  }
  uVar2 = *(ushort *)
           (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48) + -2 +
           (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x44) * 2);
  if (uVar2 != 0x25) {
    local_40 = 9;
    local_38 = (uint)uVar2;
    local_30 = 0;
    local_58 = 1;
    local_48[0] = uVar2;
    uVar5 = FUN_0044d530(&PTR_FUN_00436080,1,
                         L"Invalid escape sequence: \"%%\" expected but \"%s\" (#%d) found",local_48
                        );
    FUN_004134c0(uVar5);
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x44);
  *piVar1 = *piVar1 + 1;
  iVar6 = FUN_00a28c10(auStack_78,
                       *(undefined2 *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48) + -2 +
                        (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x44) * 2));
  piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x44);
  *piVar1 = *piVar1 + 1;
  iVar4 = FUN_00a28c10(auStack_78,
                       *(undefined2 *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48) + -2 +
                        (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x44) * 2));
  piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x44);
  *piVar1 = *piVar1 + 1;
  return iVar6 * 0x10 + iVar4;
}

