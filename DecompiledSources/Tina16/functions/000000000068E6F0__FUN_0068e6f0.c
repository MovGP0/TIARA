/* Ghidra address: 0068e6f0 */
/* Ghidra symbol: FUN_0068e6f0 */


void FUN_0068e6f0(longlong *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  code *pcVar5;
  int local_2c;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((param_4 < param_3) || (param_4 < (int)param_1[0x94])) {
    FUN_0041ddd0(local_20,PTR_PTR_020043b0);
    uVar2 = FUN_0044d490(&PTR_FUN_00472870,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  local_2c = param_2;
  if (param_2 < param_3) {
    local_2c = param_3;
  }
  if (param_4 < local_2c) {
    local_2c = param_4;
  }
  if (((int)param_1[0x93] != param_3) || (*(int *)((longlong)param_1 + 0x49c) != param_4)) {
    *(int *)(param_1 + 0x93) = param_3;
    *(int *)((longlong)param_1 + 0x49c) = param_4;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_04182059(uVar2,2,param_3,param_4,
                         -(uint)(*(int *)((longlong)param_1 + 0x494) == local_2c));
    }
  }
  if (*(int *)((longlong)param_1 + 0x494) != local_2c) {
    *(int *)((longlong)param_1 + 0x494) = local_2c;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_00777cd0();
      uVar4 = (**(code **)(*plVar3 + 600))(plVar3);
      if ((uVar4 & 1) == 0) {
        cVar1 = FUN_0068e660(param_1);
        if (cVar1 == '\0') {
          uVar2 = FUN_0065b870(param_1);
          thunk_FUN_04145aef(uVar2,2,*(int *)((longlong)param_1 + 0x49c) -
                                     *(int *)((longlong)param_1 + 0x494),0xffffffff);
        }
        else {
          uVar2 = FUN_0065b870(param_1);
          thunk_FUN_04145aef(uVar2,2,*(undefined4 *)((longlong)param_1 + 0x494),0xffffffff);
        }
      }
      else {
        cVar1 = FUN_0068e660(param_1);
        if (cVar1 == '\0') {
          uVar2 = FUN_0065b870(param_1);
          thunk_FUN_04145aef(uVar2,2,*(int *)((longlong)param_1 + 0x49c) -
                                     *(int *)((longlong)param_1 + 0x494),0);
        }
        else {
          uVar2 = FUN_0065b870(param_1);
          thunk_FUN_04145aef(uVar2,2,*(undefined4 *)((longlong)param_1 + 0x494),0);
        }
        uVar2 = FUN_0065b870(param_1);
        thunk_FUN_041543e0(uVar2,0,0,0x101);
      }
    }
    (**(code **)(*param_1 + 0x128))(param_1,1);
    pcVar5 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar5)(param_1);
  }
  FUN_00414480(local_20);
  return;
}

