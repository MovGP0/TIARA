/* Ghidra address: 00c0f5b0 */
/* Ghidra symbol: FUN_00c0f5b0 */


undefined8 FUN_00c0f5b0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)param_1[0xa7];
  if (plVar1 == (longlong *)0x0) {
    if ((ushort)param_2 < 0x21) {
      uVar3 = 1;
    }
    else {
      cVar2 = (**(code **)(*param_1 + 0x360))(param_1,param_2);
      if ((cVar2 == '\0') &&
         (cVar2 = (**(code **)(*param_1 + 0x370))(param_1,param_2), cVar2 == '\0')) {
        return 1;
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x198))(plVar1,param_2);
  }
  return uVar3;
}

