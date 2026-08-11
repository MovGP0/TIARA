/* Ghidra address: 00aa8f70 */
/* Ghidra symbol: FUN_00aa8f70 */


void FUN_00aa8f70(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_00aa8e20(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a8c408);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_00409a70(param_1 + 0x28,param_2 + 0x28,0x58);
    lVar3 = *(longlong *)(param_2 + 0x80);
    if (*(char *)(*(longlong *)(lVar3 + 0x20) + 0xb0) == '\0') {
      *(undefined1 *)(lVar3 + 0x40) = 0;
    }
    else {
      *(undefined1 *)(lVar3 + 0x40) = *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x40);
      *(undefined4 *)(lVar3 + 0x44) = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x44);
      if (*(longlong *)(param_1 + 0x90) != 0) {
        uVar2 = FUN_00a952f0(&PTR_FUN_00a83768,
                             CONCAT71((int7)((ulonglong)uVar2 >> 8),1) & 0xffffffff,lVar3,
                             *(longlong *)(param_1 + 0x90));
        *(undefined8 *)(param_2 + 0x90) = uVar2;
      }
    }
    FUN_00418240(param_2 + 0x138,param_1 + 0x138,&DAT_004013d8,0x26);
    puVar4 = (undefined8 *)(param_1 + 0xa0);
    puVar5 = (undefined8 *)(param_2 + 0xa0);
    for (lVar3 = 0x13; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}

