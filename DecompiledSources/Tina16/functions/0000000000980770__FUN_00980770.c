/* Ghidra address: 00980770 */
/* Ghidra symbol: FUN_00980770 */


undefined8 FUN_00980770(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
  if (lVar1 == 0) {
    FUN_00414520(param_2);
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0xa8))(param_1);
    lVar1 = (**(code **)(*plVar2 + 0x188))(plVar2);
    if (lVar1 == 0) {
      FUN_00414520(param_2);
    }
    else {
      FUN_00414b90(param_2,*(undefined8 *)(lVar1 + 0x98));
    }
  }
  return param_2;
}

