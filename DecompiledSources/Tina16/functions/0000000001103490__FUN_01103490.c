/* Ghidra address: 01103490 */
/* Ghidra symbol: FUN_01103490 */


void FUN_01103490(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (*(int *)(*(longlong *)(lVar1 + 0xe0) + 0x2c) < 2) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = (double)FUN_01cc9800(0,param_2,param_3);
    }
    if ((dVar3 == 0.0) && (*(longlong *)(lVar1 + 0x188) != 0)) {
      lVar1 = *(longlong *)(lVar1 + 0x188);
      (**(code **)(**(longlong **)(lVar1 + 200) + 0x10))
                (*(longlong **)(lVar1 + 200),*(undefined8 *)(lVar1 + 0xe0),1);
      plVar2 = (longlong *)FUN_004113f0(*(undefined8 *)(lVar1 + 200),&PTR_FUN_010ff630);
      (**(code **)(*plVar2 + 0x98))(plVar2,param_2,param_3);
    }
  }
  return;
}

