/* Ghidra address: 01b65960 */
/* Ghidra symbol: FUN_01b65960 */


void FUN_01b65960(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffffc8;
  undefined1 local_19;
  
  local_19 = 1;
  iVar3 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
  if (iVar3 != -1) {
    uVar4 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
    (**(code **)(*(longlong *)param_1[0x1b4] + 0xb8))
              ((longlong *)param_1[0x1b4],uVar4,*(undefined1 *)(param_1[0xfa] + 0x328));
    lVar2 = param_1[0x10e];
    cVar1 = *(char *)(param_1[0xfa] + 0x328);
    if (*(char *)(lVar2 + 0x11) != cVar1) {
      *(char *)(lVar2 + 0x11) = cVar1;
      if (cVar1 == '\0') {
        local_19 = 0;
        FUN_010f6740(param_1,param_1[0x10e],0,&local_19,
                     in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
        FUN_010e8e30(param_1[0x136],local_19);
      }
      else {
        (**(code **)(*param_1 + 0x550))(param_1,lVar2,1,1,&local_19);
      }
    }
  }
  return;
}

