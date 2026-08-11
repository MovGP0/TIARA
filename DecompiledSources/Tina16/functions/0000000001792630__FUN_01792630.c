/* Ghidra address: 01792630 */
/* Ghidra symbol: FUN_01792630 */


void FUN_01792630(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  if (param_3 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xd00) + 0xb0))
              (*(longlong **)(param_1 + 0xd00),L"Color Dialog Custom Colors",
               *(undefined8 *)(*(longlong *)(param_1 + 0xc60) + 0xd8));
    uVar3 = FUN_01799b40(param_1);
    plVar1 = *(longlong **)(param_1 + 0xc60);
    *(undefined4 *)(plVar1 + 0x1a) = uVar3;
    cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if (cVar2 != '\0') {
      FUN_01799b60(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xc60) + 0xd0));
      *(undefined1 *)(param_1 + 0xc94) = 1;
      FUN_01799940(param_1,param_2);
      iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xc60) + 0xd8) + 0x28))();
      iVar5 = 0;
      if (-1 < iVar4 + -1) {
        do {
          FUN_004b3cf0(*(undefined8 *)(*(longlong *)(param_1 + 0xc60) + 0xd8),local_30,iVar5);
          FUN_004b5390(*(undefined8 *)(*(longlong *)(param_1 + 0xc60) + 0xd8),&local_38,iVar5);
          (**(code **)(**(longlong **)(param_1 + 0xd00) + 0x18))
                    (*(longlong **)(param_1 + 0xd00),L"Color Dialog Custom Colors",local_30[0],
                     local_38);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  if (param_3 == '\x01') {
    *(undefined1 *)(param_1 + 0xc94) = 0;
    FUN_01799b60(param_1,0xfffffffe);
    FUN_01799940(param_1,param_2);
  }
  FUN_00414560(&local_38,2);
  return;
}

