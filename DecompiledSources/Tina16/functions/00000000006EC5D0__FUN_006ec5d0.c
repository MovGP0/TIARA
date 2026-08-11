/* Ghidra address: 006ec5d0 */
/* Ghidra symbol: FUN_006ec5d0 */


void FUN_006ec5d0(longlong *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != *(char *)((longlong)param_1 + 0x4d1)) {
    *(char *)((longlong)param_1 + 0x4d1) = param_2;
    if ((*(ushort *)((longlong)param_1 + 0x34) & 0x41) == 0) {
      (**(code **)(*param_1 + 400))
                (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),
                 *(undefined4 *)((longlong)param_1 + 0x9c),(int)param_1[0x13]);
    }
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar2,0x469,0,0);
    }
    FUN_00655b90(param_1);
  }
  return;
}

