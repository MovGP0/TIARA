/* Ghidra address: 00685ad0 */
/* Ghidra symbol: FUN_00685ad0 */


void FUN_00685ad0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 != '\0') {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_0044f0c0(6,0);
      if (cVar1 == '\0') {
        cVar1 = FUN_0044f0c0(5,1);
        if (cVar1 != '\0') {
          FUN_00470120(*(undefined8 *)(param_1 + 0x4f8),0x1501,0,*(undefined8 *)(param_1 + 0x580));
        }
      }
      else {
        uVar3 = FUN_0065b870(param_1);
        FUN_00470120(uVar3,0x1703,0,*(undefined8 *)(param_1 + 0x580));
      }
    }
  }
  return;
}

