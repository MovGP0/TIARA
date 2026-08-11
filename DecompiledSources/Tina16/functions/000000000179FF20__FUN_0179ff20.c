/* Ghidra address: 0179ff20 */
/* Ghidra symbol: FUN_0179ff20 */


void FUN_0179ff20(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_20;
  
  local_20 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0xc38) + 0x260))(*(longlong **)(param_1 + 0xc38));
  if (*(char *)(*(longlong *)(param_1 + 0xd18) + 0x48) != cVar2) {
    iVar1 = *(int *)(param_1 + 0xca0);
    if (-1 < iVar1) {
      (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x18))
                (*(longlong **)(param_1 + 0xd18),&local_20,iVar1);
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xc38) + 0x260))(*(longlong **)(param_1 + 0xc38))
    ;
    FUN_004b67b0(*(undefined8 *)(param_1 + 0xd18),uVar3);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0xc38) + 0x260))(*(longlong **)(param_1 + 0xc38))
    ;
    if (cVar2 != '\0') {
      FUN_01798270(param_1);
      FUN_01795670(param_1,1);
      if (-1 < *(int *)(param_1 + 0xca0)) {
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0xb0))
                          (*(longlong **)(param_1 + 0xd18),local_20);
        *(int *)(param_1 + 0xca0) = iVar4;
        if (iVar4 != iVar1) {
          (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
                    (*(longlong **)(param_1 + 0x758),iVar4);
        }
      }
    }
  }
  FUN_00414480(&local_20);
  return;
}

