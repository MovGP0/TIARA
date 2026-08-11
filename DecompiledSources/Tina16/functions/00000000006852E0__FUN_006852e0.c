/* Ghidra address: 006852e0 */
/* Ghidra symbol: FUN_006852e0 */


void FUN_006852e0(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_2 != *(int *)(param_1 + 0x49c)) {
    *(int *)(param_1 + 0x49c) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_0044f0c0(5,1);
      if (cVar1 != '\0') {
        plVar2 = (longlong *)FUN_00777cd0();
        cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
        if (cVar1 != '\0') {
          uVar3 = FUN_0065b870(param_1);
          thunk_FUN_041b2403(uVar3,0x1701,(longlong)*(int *)(param_1 + 0x49c),0);
        }
      }
    }
  }
  return;
}

