/* Ghidra address: 00acb140 */
/* Ghidra symbol: FUN_00acb140 */


bool FUN_00acb140(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *param_3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x158);
  iVar3 = (**(code **)(*(longlong *)plVar1[0x94] + 0x28))((longlong *)plVar1[0x94]);
  if (param_2 >= iVar3) goto code_r0x00acb219;
  FUN_00414480(param_3);
  if ((char)plVar1[0x92] == '\0') {
LAB_00acb1bb:
    if ((char)plVar1[0x92] != '\0') goto code_r0x00acb219;
    iVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    if (iVar4 != param_2) goto code_r0x00acb219;
  }
  else {
    cVar2 = FUN_0068bca0(plVar1,param_2);
    if (cVar2 == '\0') goto LAB_00acb1bb;
  }
  FUN_00ac9d80(*(undefined8 *)(param_1 + 0x140),local_20,param_2);
  FUN_00416cd0(param_3,3,*(undefined8 *)(param_1 + 200),&LAB_00acb254,local_20[0]);
code_r0x00acb219:
  FUN_00414480(local_20);
  return param_2 < iVar3;
}

