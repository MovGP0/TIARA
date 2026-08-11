/* Ghidra address: 012b8ab0 */
/* Ghidra symbol: FUN_012b8ab0 */


void FUN_012b8ab0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_5;
  uStack_30 = param_5[1];
  plVar2 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
  cVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_4);
  if (cVar1 == '\0') {
    FUN_012b8960(param_1,param_3,param_4,&local_38,0);
  }
  else {
    FUN_012b8960(param_1,param_3,param_4,&local_38,0xff);
  }
  return;
}

