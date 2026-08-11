/* Ghidra address: 01332af0 */
/* Ghidra symbol: FUN_01332af0 */


void FUN_01332af0(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  longlong local_30;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x30))
                        (*(longlong **)(param_1 + 0x130),iVar6);
      plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x38) + 0x128);
      sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      uVar5 = sVar2 - 8;
      if (uVar5 < 0xd8) {
        bVar7 = ((byte)(&DAT_01332c88)[(longlong)(ulonglong)uVar5 >> 3] >> ((ulonglong)uVar5 & 7) &
                1) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        FUN_016ee260(*(undefined8 *)(lVar4 + 0x38),&local_30,0x40,0);
        if (*(char *)(lVar4 + 0x48) == '\0') {
          *(undefined1 *)(local_30 + 0x30) = 0;
        }
        else {
          *(undefined8 *)(local_30 + 0x10) = *(undefined8 *)(lVar4 + 0x30);
          *(undefined1 *)(local_30 + 0x30) = 1;
        }
      }
      else {
        uVar5 = sVar2 - 8;
        if (uVar5 < 0xe0) {
          bVar7 = ((byte)(&DAT_01332ca3)[(longlong)(int)(uint)uVar5 >> 3] >> (uVar5 & 7) & 1) != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          FUN_016ee260(*(undefined8 *)(lVar4 + 0x38),&local_30,0x50,0);
          if (*(char *)(lVar4 + 0x48) == '\0') {
            *(undefined1 *)(local_30 + 0x40) = 0;
          }
          else {
            *(undefined8 *)(local_30 + 0x10) = *(undefined8 *)(lVar4 + 0x30);
            *(undefined1 *)(local_30 + 0x40) = 1;
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_01b08890(*(undefined8 *)(param_1 + 0x148),0x20);
  FUN_016f6430(*(undefined8 *)(param_1 + 0x148),5,0);
  lVar4 = *(longlong *)(param_1 + 0x148);
  FUN_01b07850(lVar4,*(undefined8 *)(lVar4 + 0x118),*(undefined8 *)(lVar4 + 0x128));
  return;
}

