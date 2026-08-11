/* Ghidra address: 00680410 */
/* Ghidra symbol: FUN_00680410 */


void FUN_00680410(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0044f0c0(5,1);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if (cVar1 != '\0') {
      cVar1 = FUN_0065be20(param_1);
      if (cVar1 != '\0') {
        uVar3 = FUN_0065b870(param_1);
        FUN_00470120(uVar3,0x1501,0,param_2);
      }
    }
  }
  return;
}

