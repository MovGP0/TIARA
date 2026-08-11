/* Ghidra address: 0095f6c0 */
/* Ghidra symbol: FUN_0095f6c0 */


ulonglong FUN_0095f6c0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,param_2);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,param_3);
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar2 = (*(code *)**(undefined8 **)plVar3[5])((undefined8 *)plVar3[5]);
      if (iVar2 == 0) {
        (**(code **)(*(longlong *)param_1[5] + 8))((longlong *)param_1[5],param_2);
      }
      FUN_00410f20(plVar3);
    }
  }
  return uVar4 & 0xffffffff;
}

