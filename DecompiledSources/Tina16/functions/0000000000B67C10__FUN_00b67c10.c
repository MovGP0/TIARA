/* Ghidra address: 00b67c10 */
/* Ghidra symbol: FUN_00b67c10 */


void FUN_00b67c10(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ushort *puVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined2 uStack_40;
  undefined8 local_30 [2];
  
  local_48 = 0;
  uStack_40 = 0;
  local_30[0] = 0;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x26) == '\0') {
    *(undefined4 *)(param_1 + 0xa0) = 0x15;
    FUN_00415d10(local_30,0x14,0);
    uVar2 = FUN_00414df0(local_30);
    FUN_00409a70(PTR_DAT_02001298,uVar2,0x14);
    iVar1 = 0xf;
    do {
      FUN_00b67bb0(auStack_68);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar2 = FUN_00414df0(local_30);
    FUN_00409a70(PTR_DAT_02002e88,uVar2,0x14);
    FUN_00b67bb0(auStack_68);
    uVar2 = FUN_00414df0(local_30);
    FUN_00409a70(PTR_DAT_02002518,uVar2,0x14);
    FUN_00b67bb0(auStack_68);
    uVar2 = FUN_00414df0(local_30);
    FUN_00409a70(PTR_DAT_02002820,uVar2,0x14);
    FUN_00b67bb0(auStack_68);
    uVar2 = FUN_00414df0(local_30);
    FUN_00409a70(PTR_DAT_02005a78,uVar2,0x14);
    FUN_00b67bb0(auStack_68);
    uVar2 = FUN_00414df0(local_30);
    FUN_00409a70(PTR_DAT_020046c8,uVar2,0x14);
    FUN_00b67bb0(auStack_68);
    uVar2 = FUN_00414df0(local_30);
    FUN_00409a70(PTR_DAT_02001c58,uVar2,0x14);
    FUN_00b67bb0(auStack_68);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  iVar1 = FUN_00b24ec0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      puVar3 = (ushort *)FUN_00b24ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20),iVar4);
      if (3 < *puVar3) {
        *puVar3 = *puVar3 + 1;
      }
      FUN_00b1f820(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),&local_48,puVar3[1]);
      puVar3[1] = (ushort)local_48;
      FUN_00b24770(local_30,puVar3);
      FUN_00b67bb0(auStack_68);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00417740(&local_48,&DAT_00b1be28);
  FUN_004144d0(local_30);
  return;
}

