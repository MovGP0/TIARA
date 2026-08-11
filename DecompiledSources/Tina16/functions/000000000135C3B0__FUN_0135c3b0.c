/* Ghidra address: 0135c3b0 */
/* Ghidra symbol: FUN_0135c3b0 */


void FUN_0135c3b0(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_res10;
  uint local_res18 [4];
  undefined8 local_20;
  
  local_20 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  if (0x7fffffff < local_res18[0]) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
                      (*(longlong **)(param_1 + 8),local_res10,local_res18);
    if (cVar2 == '\0') goto code_r0x0135c459;
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                    (*(longlong **)(param_1 + 8),local_res18[0]);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_004b3cf0(plVar1,&local_20,local_res18[0]);
  FUN_00416ad0(&local_20,&LAB_0135c4b4);
  (**(code **)(*plVar1 + 0x40))(plVar1,local_res18[0],local_20);
  *(undefined4 *)(lVar3 + 8) = 1;
  *(undefined1 *)(lVar3 + 0xc) = 0;
code_r0x0135c459:
  FUN_00414480(&local_20);
  FUN_00414480(&local_res10);
  return;
}

