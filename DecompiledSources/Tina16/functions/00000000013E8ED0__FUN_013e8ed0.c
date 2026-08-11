/* Ghidra address: 013e8ed0 */
/* Ghidra symbol: FUN_013e8ed0 */


void FUN_013e8ed0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d0));
  if (*(char *)(param_1 + 0x768) == '\0') {
    uVar5 = 0;
    lVar1 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,0xc,1,0);
    *(longlong *)(param_1 + 0x7a0) = lVar1;
    FUN_01cc2930(*(undefined8 *)(lVar1 + 8),0,0,0,uVar5 & 0xffffffffffffff00,0,1,0);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10) + -1;
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        puVar2 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x788),iVar3);
        FUN_01cc4620(*(undefined8 *)(param_1 + 0x7a0),*puVar2);
        FUN_01cc4790(*(undefined8 *)(param_1 + 0x7a0),puVar2[1]);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_013e1f90(*(undefined8 *)(param_1 + 0x7a0),*(undefined1 *)(param_1 + 0x798));
  }
  return;
}

