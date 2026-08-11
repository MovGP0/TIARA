/* Ghidra address: 006849d0 */
/* Ghidra symbol: FUN_006849d0 */


void FUN_006849d0(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = *(ushort *)(param_2 + 10);
  if (uVar1 < 5) {
    if (uVar1 == 4) {
      *(undefined1 *)((longlong)param_1 + 0x522) = 0;
      *(undefined1 *)((longlong)param_1 + 0x521) = 1;
      (**(code **)(*param_1 + 0x218))(param_1,param_1[0x9f]);
    }
    else if (uVar1 == 1) {
      iVar2 = (**(code **)(*param_1 + 0x260))(param_1);
      if (iVar2 != -1) {
        uVar3 = (**(code **)(*param_1 + 0x260))(param_1);
        (**(code **)(*(longlong *)param_1[0x9e] + 0x18))((longlong *)param_1[0x9e],local_20,uVar3);
        FUN_0064de00(param_1,local_20[0]);
        pcVar4 = (code *)FUN_00411550(param_1,0xffea);
        (*pcVar4)(param_1);
        pcVar4 = (code *)FUN_00411550(param_1,0xffab);
        (*pcVar4)(param_1);
      }
    }
    else if (uVar1 == 2) {
      pcVar4 = (code *)FUN_00411550(param_1,0xffe9);
      (*pcVar4)(param_1);
    }
    else if (uVar1 == 3) {
      *(undefined1 *)((longlong)param_1 + 0x522) = 1;
      *(undefined1 *)((longlong)param_1 + 0x521) = 1;
      (**(code **)(*param_1 + 0x228))(param_1,param_1[0x9f]);
    }
  }
  else if (uVar1 == 5) {
    pcVar4 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar4)(param_1);
  }
  else if (uVar1 == 7) {
    *(undefined1 *)((longlong)param_1 + 0x521) = 0;
    pcVar4 = (code *)FUN_00411550(param_1,0xffaa);
    (*pcVar4)(param_1);
    (**(code **)(*param_1 + 0x2b0))(param_1);
    if (*(char *)((longlong)param_1 + 0x521) != '\0') {
      uVar5 = FUN_0065b870(param_1);
      thunk_FUN_0413e052(uVar5,0x1f,0,0);
      if (*(char *)((longlong)param_1 + 0x522) == '\0') {
        uVar5 = FUN_0065b870(param_1);
        thunk_FUN_0413e052(uVar5,0x14f,0,0);
      }
    }
  }
  else if (uVar1 == 8) {
    pcVar4 = (code *)FUN_00411550(param_1,0xffa9);
    (*pcVar4)(param_1);
  }
  FUN_00414480(local_20);
  return;
}

