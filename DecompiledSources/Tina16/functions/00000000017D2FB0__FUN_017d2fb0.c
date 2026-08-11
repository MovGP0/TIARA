/* Ghidra address: 017d2fb0 */
/* Ghidra symbol: FUN_017d2fb0 */


void FUN_017d2fb0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  short sVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  iVar7 = *(int *)(param_1 + 0x2d8);
  iVar6 = 1;
  if (0 < iVar7) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar6 * 8);
      sVar3 = (**(code **)(**(longlong **)(lVar2 + 0x128) + 0xf8))(*(longlong **)(lVar2 + 0x128));
      if (sVar3 == 0x3c) {
        pcVar5 = (char *)FUN_01b05ad0(lVar2,2,0,&local_29,&local_2a,&local_2b);
        cVar1 = *pcVar5;
        if (cVar1 == '\x01') {
          *(longlong *)(param_1 + 0x5a0) = lVar2;
          *(longlong *)(param_1 + 0x5a8) = lVar2;
          *(longlong *)(param_1 + 0x5b0) = lVar2;
          break;
        }
        if (cVar1 == '\x02') {
          *(longlong *)(param_1 + 0x5a0) = lVar2;
          *(longlong *)(param_1 + 0x5b0) = lVar2;
        }
        else if (cVar1 == '\x03') {
          *(longlong *)(param_1 + 0x5a8) = lVar2;
          *(longlong *)(param_1 + 0x5b0) = lVar2;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    if (*(longlong *)(param_1 + 0x5a0) == *(longlong *)(param_1 + 0x5a8)) {
      uVar4 = FUN_016d65a0(*(undefined8 *)(param_1 + 0x1360));
      FUN_016d6770(*(undefined8 *)(param_1 + 0x1358),1,uVar4,*(undefined8 *)(param_1 + 0x7b0),1);
    }
    else {
      uVar4 = FUN_016d65a0(*(undefined8 *)(param_1 + 0x1360));
      FUN_016d6770(*(undefined8 *)(param_1 + 0x1358),2,uVar4,*(undefined8 *)(param_1 + 0x7b0),1);
    }
  }
  return;
}

