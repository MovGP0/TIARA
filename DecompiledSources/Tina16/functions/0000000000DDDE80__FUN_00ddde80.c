/* Ghidra address: 00ddde80 */
/* Ghidra symbol: FUN_00ddde80 */


void FUN_00ddde80(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_20 = 0;
  if (param_2 == -0x7ffbfeee) {
    FUN_00410ae0(**(undefined8 **)(param_1 + 0x70),&local_20);
    local_18 = local_20;
    local_10 = 0x11;
    uVar1 = FUN_0044d530(&PTR_FUN_00620870,1,param_3,&local_18,0);
    FUN_004134c0(uVar1);
  }
  FUN_006245b0(param_2);
  FUN_00414480(&local_20);
  return;
}

