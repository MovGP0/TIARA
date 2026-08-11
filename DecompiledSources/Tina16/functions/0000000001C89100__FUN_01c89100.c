/* Ghidra address: 01c89100 */
/* Ghidra symbol: FUN_01c89100 */


void FUN_01c89100(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar5;
  uint in_stack_ffffffffffffff98;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  if (*(wchar_t **)PTR_DAT_020019a8 == L"-tran") {
    bVar4 = true;
  }
  else if (*(longlong *)PTR_DAT_020019a8 == 0) {
    bVar4 = false;
  }
  else {
    iVar3 = FUN_0043e420(*(undefined8 *)PTR_DAT_020019a8,L"-tran");
    bVar4 = iVar3 == 0;
  }
  if (bVar4) {
    cVar2 = FUN_01349310(0,0,*(undefined8 *)(param_1 + 0x27a8),0,1,0,0,0,0,0,0,0,0,0,0,0,0,0x1c7,0,0
                         ,0,0,0,0);
    if (cVar2 == '\0') {
      lVar1 = *(longlong *)(param_1 + 0x27a8);
      if (*(char *)(lVar1 + 0xe28) == '\0') {
        FUN_013d2f60(*(undefined8 *)(lVar1 + 0xe00),0,0);
      }
      else {
        FUN_013e5a30(*(undefined8 *)(lVar1 + 0xe00),*(undefined8 *)(lVar1 + 0xe10),0,0);
      }
    }
  }
  else {
    if (*(undefined **)PTR_DAT_020019a8 == &DAT_01c89564) {
      bVar4 = true;
    }
    else if (*(longlong *)PTR_DAT_020019a8 == 0) {
      bVar4 = false;
    }
    else {
      iVar3 = FUN_0043e420(*(undefined8 *)PTR_DAT_020019a8,&DAT_01c89564);
      bVar4 = iVar3 == 0;
    }
    if (bVar4) {
      cVar2 = FUN_01394040(0,*(undefined8 *)(param_1 + 0x27a8),1,0,0,0,0,0,0,0,CONCAT44(uVar5,0x1c7)
                           ,0,in_stack_ffffffffffffff98 & 0xffffff00);
      if (cVar2 == '\0') {
        if (*(short *)(PTR_DAT_02004010 + 0x39e) == 0) {
          FUN_013d4bc0(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xe00),0x1f,0,0,1);
        }
        else {
          FUN_013d4bc0(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xe00),
                       *(undefined2 *)(PTR_DAT_02004010 + 0x39e),0,0,1);
        }
      }
    }
    else {
      if (*(undefined **)PTR_DAT_020019a8 == &DAT_01c8957c) {
        bVar4 = true;
      }
      else if (*(longlong *)PTR_DAT_020019a8 == 0) {
        bVar4 = false;
      }
      else {
        iVar3 = FUN_0043e420(*(undefined8 *)PTR_DAT_020019a8,&DAT_01c8957c);
        bVar4 = iVar3 == 0;
      }
      if (bVar4) {
        cVar2 = FUN_01324990(0,*(undefined8 *)(param_1 + 0x27a8),1,0,0,0,0,0,0);
        if (cVar2 == '\0') {
          FUN_013d3ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xe00),1);
        }
      }
      else {
        if (*(wchar_t **)PTR_DAT_020019a8 == L"-noise") {
          bVar4 = true;
        }
        else if (*(longlong *)PTR_DAT_020019a8 == 0) {
          bVar4 = false;
        }
        else {
          iVar3 = FUN_0043e420(*(undefined8 *)PTR_DAT_020019a8,L"-noise");
          bVar4 = iVar3 == 0;
        }
        if (bVar4) {
          cVar2 = FUN_014f6590(*(undefined8 *)(param_1 + 0x27a8),1,0,0);
          if (cVar2 == '\0') {
            if (PTR_DAT_02004010[0x3ba] == '\0') {
              FUN_013d8d70(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xe00),0xf,1);
            }
            else {
              FUN_013d8d70(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xe00),
                           PTR_DAT_02004010[0x3ba],1);
            }
          }
        }
      }
    }
  }
  return;
}

