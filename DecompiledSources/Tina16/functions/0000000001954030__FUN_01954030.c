/* Ghidra address: 01954030 */
/* Ghidra symbol: FUN_01954030 */


void FUN_01954030(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined2 local_38 [4];
  longlong local_30;
  
  FUN_00411a80(param_1,param_2);
  plVar1 = *(longlong **)(param_1 + 400);
  if (plVar1 != (longlong *)0x0) {
    local_38[0] = 0xd001;
    local_30 = param_1;
    (**(code **)(*plVar1 + -0x38))(plVar1,local_38);
    *(undefined8 *)(param_1 + 400) = 0;
  }
  FUN_0194f620(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

