/* Ghidra address: 01ce87d0 */
/* Ghidra symbol: FUN_01ce87d0 */


ulonglong FUN_01ce87d0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar6 = 0;
  while( true ) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    if (iVar3 + -1 < iVar6) break;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    if (iVar3 < 2) break;
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                      (*(longlong **)(param_1 + 0x78),iVar6);
    if (*(int *)(*(longlong *)(lVar4 + 0xf8) + 0x10) == 0) {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar6);
      cVar1 = FUN_01ce33d0(param_1);
      if (cVar1 == '\x01') {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0xc0))
                          (*(longlong **)(param_1 + 0x88),*(undefined8 *)(lVar4 + 0x100));
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x98))(*(longlong **)(param_1 + 0x88),uVar2);
        FUN_00410f20(*(undefined8 *)(lVar4 + 0x100));
        FUN_00410f20(lVar4);
      }
      lVar4 = **(longlong **)(param_1 + 0x78);
      (**(code **)(lVar4 + 0x98))(*(longlong **)(param_1 + 0x78),iVar6);
      uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  return uVar5 & 0xffffffff;
}

