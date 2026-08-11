/* Ghidra address: 0064e410 */
/* Ghidra symbol: FUN_0064e410 */


ulonglong FUN_0064e410(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x78) + 0x370);
  iVar3 = FUN_004aeba0(uVar1,*(undefined8 *)(param_1 + 0x50));
  do {
    do {
      if (iVar3 < 1) {
        uVar5 = 0;
        goto LAB_0064e4a3;
      }
      iVar3 = iVar3 + -1;
      lVar4 = FUN_004aeac0(uVar1,iVar3);
    } while ((*(char *)(lVar4 + 0xa9) == '\0') || ((*(uint *)(lVar4 + 0xa0) & 0x40) == 0));
    FUN_0064d000(lVar4,local_48);
    FUN_004239d0(local_38,param_1 + 0x20,local_48);
    cVar2 = FUN_004238a0(local_38,param_1 + 0x20);
  } while (cVar2 == '\0');
LAB_0064e4a3:
  return uVar5 & 0xffffffff;
}

