/* Ghidra address: 01b16780 */
/* Ghidra symbol: FUN_01b16780 */


longlong * FUN_01b16780(undefined8 *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int local_res18;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong *local_30;
  
  local_50 = auStack_78;
  FUN_00419260(param_2,&DAT_01b016a8,1,(longlong)param_3);
  local_res18 = 0;
  local_30 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar2 = (**(code **)(*local_30 + 8))(local_30);
    if (cVar2 == '\0') break;
    (**(code **)*local_30)(local_30,&local_40);
    puVar1 = (undefined8 *)(*param_2 + (longlong)local_res18 * 0x10);
    *puVar1 = local_40;
    puVar1[1] = uStack_38;
    local_res18 = local_res18 + 1;
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + -0x20))(local_30,1);
  }
  return param_2;
}

