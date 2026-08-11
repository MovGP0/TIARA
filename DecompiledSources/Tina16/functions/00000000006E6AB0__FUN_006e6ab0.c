/* Ghidra address: 006e6ab0 */
/* Ghidra symbol: FUN_006e6ab0 */


void FUN_006e6ab0(longlong param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x4b0) != param_2) {
    *(char *)(param_1 + 0x4b0) = param_2;
    if (param_2 == '\x01') {
      uVar2 = FUN_006e65f0(param_1);
      *(undefined4 *)(param_1 + 0x4a0) = uVar2;
      FUN_00659460(param_1,0);
    }
    plVar3 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar3 + 0x90))(plVar3);
    if (cVar1 != '\0') {
      cVar1 = FUN_0044f0c0(5,1);
      if (cVar1 != '\0') {
        cVar1 = FUN_0065be20(param_1);
        if ((cVar1 != '\0') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
          cVar1 = *(char *)(param_1 + 0x4b0);
          uVar4 = FUN_0065b870(param_1);
          thunk_FUN_041b2403(uVar4,0x40a,cVar1 == '\x01',(longlong)*(int *)(param_1 + 0x4ac));
        }
      }
    }
    FUN_00655b90(param_1);
    if (*(char *)(param_1 + 0x4b0) == '\0') {
      FUN_006e6920(param_1,*(undefined4 *)(param_1 + 0x4a0));
    }
  }
  return;
}

