/* Ghidra address: 00b44ec0 */
/* Ghidra symbol: FUN_00b44ec0 */


void FUN_00b44ec0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_8c;
  undefined4 local_84;
  undefined1 local_7d;
  
  local_b8 = FUN_00b41cf0(*(undefined8 *)(param_1 + 0x18),param_3);
  if (local_b8 != 0) {
    local_a8 = 0;
    local_a4 = 0;
    local_84 = 0;
    local_8c = 0;
    local_7d = 0;
    iVar4 = *(int *)(local_b8 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(local_b8,iVar3);
        cVar1 = FUN_004113d0(uVar2,&DAT_00b40220);
        if (cVar1 == '\0') {
          uVar2 = FUN_004aeac0(local_b8,iVar3);
          cVar1 = FUN_004113d0(uVar2,&DAT_00b403a0);
          if (cVar1 != '\0') {
            uVar2 = FUN_004aeac0(local_b8,iVar3);
            FUN_00b44650(auStack_d8,uVar2);
          }
        }
        else {
          uVar2 = FUN_004aeac0(local_b8,iVar3);
          FUN_00b44030(auStack_d8,uVar2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00b445d0(auStack_d8);
    FUN_00b44cf0(auStack_d8);
  }
  return;
}

