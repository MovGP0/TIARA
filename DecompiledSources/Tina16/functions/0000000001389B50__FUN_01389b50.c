/* Ghidra address: 01389b50 */
/* Ghidra symbol: FUN_01389b50 */


void FUN_01389b50(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_19;
  
  local_19 = 1;
  iVar3 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
  if (iVar3 != -1) {
    uVar4 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
    *(char *)((longlong)param_1 + 0xe41) = (char)uVar4;
    (**(code **)(*(longlong *)param_1[0x1d1] + 0x170))
              ((longlong *)param_1[0x1d1],uVar4,*(undefined1 *)(param_1[0xfa] + 0x328));
    cVar1 = *(char *)(param_1[0xfa] + 0x328);
    lVar2 = param_1[0x10e];
    *(char *)(lVar2 + 0x11) = cVar1;
    if (cVar1 == '\0') {
      FUN_010f6740(param_1,lVar2,1,&local_19,1);
    }
    else {
      (**(code **)(*param_1 + 0x550))(param_1,lVar2,1,1,&local_19);
    }
  }
  return;
}

