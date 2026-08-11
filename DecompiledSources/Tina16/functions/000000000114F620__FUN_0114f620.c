/* Ghidra address: 0114f620 */
/* Ghidra symbol: FUN_0114f620 */


short FUN_0114f620(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int local_40;
  int local_3c;
  undefined1 local_33;
  undefined1 local_32;
  char local_31;
  longlong local_30;
  
  sVar5 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x2d8);
  local_3c = 1;
  if (0 < iVar6) {
    do {
      uVar1 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x2b0) + -8 + (longlong)local_3c * 8);
      iVar3 = FUN_01cfd2d0();
      local_40 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar4 = FUN_01b05ad0(uVar1,CONCAT31((int3)((uint)local_40 >> 8),(char)local_40 + '\x01'),0
                               ,&local_31,&local_32,&local_33);
          if ((local_31 == '\a') && (*(longlong *)(lVar4 + 0x140) != 0)) {
            local_30 = *(longlong *)(*(longlong *)(lVar4 + 0x140) + 0x10);
            for (uVar7 = (uint)*(byte *)(*(longlong *)(lVar4 + 0x140) + 0x18); uVar7 != 0;
                uVar7 = uVar7 - 1) {
              cVar2 = FUN_0114eb60(local_30);
              if (((cVar2 != '\0') && (*(char *)(local_30 + 9) != '\0')) &&
                 (*(char *)(local_30 + 10) != '\0')) {
                sVar5 = sVar5 + 1;
              }
              FUN_00b909d0(&local_30,0x14);
            }
          }
          local_40 = local_40 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_3c = local_3c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return sVar5;
}

