/* Ghidra address: 00956950 */
/* Ghidra symbol: FUN_00956950 */


bool FUN_00956950(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  bool local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_31 = false;
  if ((char)param_2[0x10] == '\0') {
    (**(code **)(*param_2 + 0x160))(param_2,local_20);
    cVar1 = FUN_008ff640(local_20[0]);
    if (cVar1 == '\0') {
      (**(code **)(*param_2 + 0x160))(param_2,&local_28);
      iVar2 = FUN_00416420(local_28,0);
      if (iVar2 != 0) goto code_r0x00956a66;
    }
    for (plVar3 = (longlong *)(**(code **)(*param_2 + 0x170))(param_2); plVar3 != (longlong *)0x0;
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x170))(plVar3)) {
      cVar1 = (**(code **)(*plVar3 + 0x168))(plVar3);
      if (cVar1 == '\x01') {
        plVar3 = (longlong *)FUN_004113f0(plVar3,&PTR_FUN_0090a420);
        (**(code **)(*plVar3 + 0xe8))(plVar3,&local_30);
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x50))
                          (*(longlong **)(param_1 + 0x130),local_30);
        local_31 = cVar1 == '\x02';
        break;
      }
      if (cVar1 != '\x05') break;
    }
  }
code_r0x00956a66:
  FUN_004145c0(&local_30,3);
  return local_31;
}

