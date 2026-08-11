/* Ghidra address: 0094e750 */
/* Ghidra symbol: FUN_0094e750 */


undefined8 FUN_0094e750(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
  do {
    if (plVar3 == (longlong *)0x0) {
LAB_0094e7e6:
      FUN_00414520(&local_20);
      return local_28;
    }
    cVar1 = (**(code **)(*plVar3 + 0x168))(plVar3);
    if (cVar1 == '\x01') {
      (**(code **)(*plVar3 + 0xe8))(plVar3,&local_20);
      iVar2 = FUN_00416420(local_20,param_2);
      if (iVar2 == 0) {
        local_28 = FUN_004113f0(plVar3,&PTR_FUN_0090a420);
        goto LAB_0094e7e6;
      }
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x170))(plVar3);
  } while( true );
}

