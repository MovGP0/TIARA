/* Ghidra address: 00b61840 */
/* Ghidra symbol: FUN_00b61840 */


void FUN_00b61840(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  
  if (*(char *)(param_1 + 0x35) != '\0') {
    FUN_00b42ba0(*(undefined8 *)(param_1 + 0xa0));
    iVar2 = FUN_00b41f80();
    local_1c = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_00b41f60(*(undefined8 *)(param_1 + 0xa0),local_1c);
        cVar1 = FUN_004113d0(uVar3,&DAT_00b40220);
        if (cVar1 == '\0') {
          uVar3 = FUN_00b41f60(*(undefined8 *)(param_1 + 0xa0),local_1c);
          cVar1 = FUN_004113d0(uVar3,&DAT_00b403a0);
          if (cVar1 != '\0') {
            FUN_00b614b0(auStack_48);
          }
        }
        else {
          FUN_00b60e70(auStack_48);
        }
        local_1c = local_1c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

