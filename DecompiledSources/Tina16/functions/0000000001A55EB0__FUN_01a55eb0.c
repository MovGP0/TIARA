/* Ghidra address: 01a55eb0 */
/* Ghidra symbol: FUN_01a55eb0 */


bool FUN_01a55eb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_res10 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c [3];
  
  local_30 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar2 = FUN_01b22620(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x910),local_res10[0],
                       local_1c,1);
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x910);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,local_1c[0]);
    FUN_00414ad0(param_3,local_30);
  }
  FUN_00414560(&local_30,2);
  FUN_00414480(local_res10);
  return cVar2 != '\0';
}

