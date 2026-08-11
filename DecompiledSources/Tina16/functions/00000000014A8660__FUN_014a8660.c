/* Ghidra address: 014a8660 */
/* Ghidra symbol: FUN_014a8660 */


void FUN_014a8660(longlong *param_1,undefined4 param_2,ushort param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  if ((*(char *)(*param_1 + 0x79) == '\0') && (0x33 < param_3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(*param_1 + 0x79) = uVar2;
  lVar3 = FUN_01cf5a00(0,&PTR_FUN_01cf10a8,param_1,param_2,param_3,param_4);
  if (lVar3 != 0) {
    plVar1 = *(longlong **)(*param_1 + 0x48);
    if (plVar1 == (longlong *)0x0) {
      (**(code **)(*DAT_0210eae0 + 0x20))(DAT_0210eae0,lVar3);
    }
    else {
      (**(code **)(*plVar1 + 0x20))(plVar1,lVar3);
    }
  }
  return;
}

