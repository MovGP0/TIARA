/* Ghidra address: 007936d0 */
/* Ghidra symbol: FUN_007936d0 */


longlong * FUN_007936d0(undefined8 *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int local_res18;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong *local_30;
  
  local_60 = auStack_88;
  FUN_00419260(param_2,&DAT_0076cea0,1,(longlong)param_3);
  local_res18 = 0;
  local_30 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar2 = (**(code **)(*local_30 + 8))(local_30);
    if (cVar2 == '\0') break;
    (**(code **)*local_30)(local_30,&local_50);
    puVar1 = (undefined8 *)(*param_2 + (longlong)local_res18 * 0x20);
    *puVar1 = local_50;
    puVar1[1] = uStack_48;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_38;
    local_res18 = local_res18 + 1;
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + -0x20))(local_30,1);
  }
  return param_2;
}

