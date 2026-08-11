/* Ghidra address: 0080d760 */
/* Ghidra symbol: FUN_0080d760 */


undefined4 FUN_0080d760(longlong param_1,undefined2 param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char local_29;
  
  lVar5 = 0;
  local_29 = '\x01';
  uVar3 = FUN_0080d910(param_1,param_2,param_3,&local_29);
  if ((char)uVar3 == '\0') {
    lVar5 = *(longlong *)(DAT_02012670 + 0xd0);
    if ((lVar5 != 0) && ((*(ushort *)(lVar5 + 0x34) & 0x10) != 0)) {
      local_29 = '\0';
    }
    if ((((lVar5 != 0) && (sVar2 = FUN_0065bc10(lVar5), sVar2 == -1)) &&
        (*(char *)(lVar5 + 0xa9) == '\0')) && (*(longlong *)(lVar5 + 0x4c0) == 0)) {
      local_29 = '\0';
    }
  }
  if (local_29 != '\0') {
    if (((lVar5 != 0) && (cVar1 = FUN_0065be20(lVar5), cVar1 != '\0')) &&
       (*(longlong *)(lVar5 + 0x4e8) != 0)) {
      uVar4 = FUN_0065b870(lVar5);
      cVar1 = FUN_0080e4b0(param_1);
      if (cVar1 == '\0') {
        return uVar3;
      }
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x40))
                        (*(longlong **)(param_1 + 0xb8),uVar4,*(undefined8 *)(lVar5 + 0x4e8),param_2
                         ,param_3);
      return uVar3;
    }
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      if (*(char *)(param_1 + 0x158) == '\0') {
        thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x2d0),0xb01f,param_2,param_3);
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x2d0);
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        uVar4 = FUN_0065b870(*(longlong *)(param_1 + 0xa8));
      }
      cVar1 = FUN_0080e4b0(param_1);
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x40))
                          (*(longlong **)(param_1 + 0xb8),uVar4,*(undefined8 *)(param_1 + 0xc0),
                           param_2,param_3);
      }
    }
  }
  return uVar3;
}

