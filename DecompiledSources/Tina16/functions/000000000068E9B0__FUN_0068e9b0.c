/* Ghidra address: 0068e9b0 */
/* Ghidra symbol: FUN_0068e9b0 */


void FUN_0068e9b0(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 local_34;
  undefined4 local_30;
  int local_24;
  
  if ((*(int *)(param_1 + 0x4a0) != param_2) && (param_2 <= *(int *)(param_1 + 0x49c))) {
    *(int *)(param_1 + 0x4a0) = param_2;
    local_34 = 0x1c;
    local_30 = 2;
    local_24 = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FUN_00777cd0();
      uVar3 = (**(code **)(*plVar2 + 600))(plVar2);
      if ((uVar3 & 1) == 0) {
        uVar4 = FUN_0065b870(param_1);
        thunk_FUN_03d770e4(uVar4,2,&local_34,0xffffffff);
      }
      else {
        uVar4 = FUN_0065b870(param_1);
        thunk_FUN_03d770e4(uVar4,2,&local_34,0);
        uVar4 = FUN_0065b870(param_1);
        thunk_FUN_041543e0(uVar4,0,0,0x101);
      }
    }
  }
  return;
}

