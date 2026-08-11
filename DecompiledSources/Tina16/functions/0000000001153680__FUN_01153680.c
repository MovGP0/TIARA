/* Ghidra address: 01153680 */
/* Ghidra symbol: FUN_01153680 */


void FUN_01153680(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = auStack_38;
  local_18 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x900) + 0xa8))(*(longlong **)(param_1 + 0x900));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x900),&local_18);
    FUN_00414ad0(param_1 + 0x8d0,local_18);
    FUN_01153160(param_1,param_2);
    cVar1 = FUN_00724300(*(undefined8 *)(param_1 + 0x900));
    FUN_014ae370(*(undefined8 *)(param_1 + 0x8d0),cVar1 + -1,0);
  }
  FUN_00414480(&local_18);
  return;
}

