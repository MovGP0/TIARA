/* Ghidra address: 006e6890 */
/* Ghidra symbol: FUN_006e6890 */


void FUN_006e6890(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x4ac) = param_2;
  if (*(char *)(param_1 + 0x4b0) == '\x01') {
    plVar2 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
    if (cVar1 != '\0') {
      cVar1 = FUN_0044f0c0(5,1);
      if (cVar1 != '\0') {
        cVar1 = FUN_0065be20(param_1);
        if ((cVar1 != '\0') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
          cVar1 = *(char *)(param_1 + 0x4b0);
          uVar3 = FUN_0065b870(param_1);
          thunk_FUN_041b2403(uVar3,0x40a,cVar1 == '\x01',(longlong)*(int *)(param_1 + 0x4ac));
        }
      }
    }
  }
  return;
}

