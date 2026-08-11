/* Ghidra address: 00aad150 */
/* Ghidra symbol: FUN_00aad150 */


void FUN_00aad150(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  
  if (*(char *)(param_1 + 0x11c) == '\0') {
    FUN_00aacbd0(auStack_68);
    FUN_00aacdc0(auStack_68);
    FUN_00aad050(auStack_68);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x168) + 0x10);
    local_3c = 0;
    if (-1 < iVar5 + -1) {
      do {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x168) + 0x10) - local_3c;
        lVar1 = FUN_00ac4a60(*(longlong *)(param_1 + 0x168),local_3c);
        iVar6 = *(int *)(lVar1 + 0x10);
        local_40 = 0;
        if (-1 < iVar6 + -1) {
          do {
            iVar3 = *(int *)(param_1 + 0x128) - local_40;
            lVar2 = FUN_004aeac0(lVar1,local_40);
            if (iVar3 < *(int *)(lVar2 + 8)) {
              *(int *)(lVar2 + 8) = iVar3;
            }
            if (iVar4 < *(int *)(lVar2 + 0xc)) {
              *(int *)(lVar2 + 0xc) = iVar4;
            }
            local_40 = local_40 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_3c = local_3c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00419260(param_1 + 0x158,&DAT_00a8b940,1,(longlong)*(int *)(param_1 + 0x128));
    FUN_00419260(param_1 + 0xf0,&DAT_00a8b940,1,(longlong)*(int *)(param_1 + 0x128));
    FUN_00419260(param_1 + 0xf8,&DAT_00a8b940,1,(longlong)*(int *)(param_1 + 0x128));
    FUN_00419260(param_1 + 0xe0,&DAT_00a8b940,1,(longlong)*(int *)(param_1 + 0x128));
    FUN_00419260(param_1 + 0xe8,&DAT_00a8b940,1,(longlong)*(int *)(param_1 + 0x128));
    FUN_00419260(param_1 + 0x110,&DAT_00a8b980,1,(longlong)*(int *)(param_1 + 0x128));
    *(undefined1 *)(param_1 + 0x11c) = 1;
  }
  return;
}

