/* Ghidra address: 00b12160 */
/* Ghidra symbol: FUN_00b12160 */


void FUN_00b12160(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if (*(char *)(param_1 + 0x618) == '\0') {
    *(undefined1 *)(param_1 + 0x618) = 1;
    plVar2 = (longlong *)FUN_00b11070(param_1);
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (((iVar1 == 0) || (param_2 < 1)) ||
       (iVar1 = FUN_00b10ba0(param_1), iVar1 - *(int *)(param_1 + 0x4c0) < param_2)) {
      uVar3 = FUN_0044d710(&PTR_FUN_00837ea8,1,PTR_PTR_02004318);
      FUN_004134c0(uVar3);
    }
    plVar2 = (longlong *)FUN_00b11070(param_1);
    (**(code **)(*plVar2 + 0x98))(plVar2,param_2 - *(int *)(param_1 + 0x4c0));
    *(undefined1 *)(param_1 + 0x618) = 0;
    return;
  }
  return;
}

