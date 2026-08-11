/* Ghidra address: 0068c8b0 */
/* Ghidra symbol: FUN_0068c8b0 */


void FUN_0068c8b0(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_68;
  puVar2 = auStack_68;
  if ((((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) &&
      (((*param_2 == 0x201 || (puVar2 = auStack_68, *param_2 == 0x203)) &&
       (cVar3 = FUN_0064eb50(param_1), puVar2 = local_30, cVar3 == '\0')))) &&
     (cVar3 = FUN_0064c470(param_1), puVar2 = local_30, cVar3 == '\x01')) {
    cVar3 = FUN_00656320(param_1,param_2);
    if (cVar3 != '\0') {
      return;
    }
    *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
    (**(code **)(*param_1 + -0x40))(param_1,param_2);
    return;
  }
  local_30 = puVar2;
  iVar1 = *param_2;
  if (iVar1 == 0x114) {
    FUN_00656570(param_1,param_2);
    if ((char)param_1[0x8f] != '\0') {
      uVar4 = FUN_0065b870(param_1);
      local_20 = thunk_FUN_040ef593(uVar4);
      (**(code **)(*param_1 + 0x210))(param_1,local_20);
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_041a9b5c(uVar4,local_20);
    }
  }
  else {
    if (iVar1 == 0xb00d) {
      cVar3 = FUN_0065be20(param_1);
      if (cVar3 != '\0') {
        uVar4 = FUN_0065b870(param_1);
        thunk_FUN_03a2fc9d(uVar4,0,0xffffffff);
      }
    }
    else if (iVar1 == 0xb04d) {
      if (*(char *)((longlong)param_1 + 0x54c) != '\0') {
        uVar4 = FUN_0065b870(param_1);
        (**(code **)(*param_1 + 0xe0))(param_1,local_40);
        FUN_00648850(uVar4,local_40);
        *(undefined1 *)((longlong)param_1 + 0x54c) = 0;
      }
    }
    else if (((iVar1 == 0xbd34) && ((*(uint *)((longlong)param_1 + 0xa4) & 0x8000) != 0)) &&
            (*(char *)((longlong)param_1 + 0x54c) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x54c) = 1;
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_0413e052(uVar4,0xb04d,0,0);
    }
    FUN_00656570(param_1,param_2);
  }
  return;
}

