/* Ghidra address: 005dbf90 */
/* Ghidra symbol: FUN_005dbf90 */


void FUN_005dbf90(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if ((char)param_2 == *(char *)(lVar3 + 0x4a)) {
    bVar6 = (byte)param_3 < ((*(byte *)(lVar3 + 0x32) & 8) != 0);
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    FUN_004b6d10(lVar3,param_2);
    FUN_004b2bb0(*(undefined8 *)(param_1 + 8),param_3);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                          (*(longlong **)(param_1 + 8),iVar5);
        if (lVar3 != 0) {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                            (*(longlong **)(param_1 + 8),iVar5);
          cVar1 = FUN_004113d0(uVar4,&DAT_005d4350);
          if (cVar1 != '\0') {
            uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                              (*(longlong **)(param_1 + 8),iVar5);
            FUN_005dbf90(uVar4,param_2,param_3);
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_00410f20(uVar4);
    FUN_005dc0b0(param_1);
  }
  return;
}

