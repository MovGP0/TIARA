/* Ghidra address: 00d8e470 */
/* Ghidra symbol: FUN_00d8e470 */


undefined8 FUN_00d8e470(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if ((param_4 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_4 + 0x88))(param_4), lVar2 != 0))
  {
    plVar3 = (longlong *)(**(code **)(*param_4 + 0x88))(param_4);
    uVar4 = (**(code **)(*plVar3 + 0x2d8))(plVar3,param_2,param_3);
    return uVar4;
  }
  if ((param_1[9] != 0) && (iVar1 = FUN_00d74940(param_1[9]), 0 < iVar1)) {
    uVar4 = (**(code **)(*param_1 + 0x2d8))(param_1,param_2,param_3);
    if ((char)uVar4 != '\0') {
      return uVar4;
    }
    uVar4 = (**(code **)(*param_1 + 0x2d8))(param_1,param_2,L"default");
    return uVar4;
  }
  return 0;
}

