/* Ghidra address: 00aad050 */
/* Ghidra symbol: FUN_00aad050 */


void FUN_00aad050(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  int local_2c;
  
  iVar4 = 0;
  do {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x168);
    if (*(int *)(lVar1 + 0x10) <= iVar4) {
      return;
    }
    local_40 = FUN_00ac4a60(lVar1,iVar4);
    local_2c = -1;
    iVar5 = *(int *)(local_40 + 0x10);
    if (*(int *)(local_40 + 0x10) < *(int *)(*(longlong *)(param_1 + 0x70) + 0x128)) {
      do {
        local_2c = iVar5 + -1;
        if (local_2c < 0) break;
        local_38 = FUN_004aeac0(local_40,local_2c);
        iVar5 = local_2c;
      } while (*(int *)(local_38 + 8) < 1);
      cVar2 = FUN_00aad020(auStack_68);
      if (cVar2 != '\0') {
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x128) + -1;
        if (*(int *)(local_40 + 0x10) <= iVar5) {
          iVar5 = (iVar5 - *(int *)(local_40 + 0x10)) + 1;
          do {
            uVar3 = FUN_00aacbb0(param_1,1);
            FUN_00aab2c0(local_40,uVar3);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
    }
    if ((local_2c < 0) || (*(int *)(local_38 + 0xc) < 1)) {
      iVar4 = iVar4 + 1;
    }
    else {
      iVar4 = iVar4 + *(int *)(local_38 + 0xc);
    }
  } while( true );
}

