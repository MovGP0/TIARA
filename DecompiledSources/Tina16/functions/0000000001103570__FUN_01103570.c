/* Ghidra address: 01103570 */
/* Ghidra symbol: FUN_01103570 */


void FUN_01103570(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x188) == 0)) {
    FUN_01cc92e0(param_1,param_2);
  }
  else {
    plVar2 = (longlong *)
             FUN_004113f0(*(undefined8 *)(*(longlong *)(lVar1 + 0x188) + 200),&PTR_FUN_010ff630);
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_2);
  }
  return;
}

