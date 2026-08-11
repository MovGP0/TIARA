/* Ghidra address: 01bccb60 */
/* Ghidra symbol: FUN_01bccb60 */


void FUN_01bccb60(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = (longlong *)0x0;
  FUN_01bccc20(param_1,&local_18);
  uVar2 = FUN_00414520(&local_10);
  uVar1 = (**(code **)(*local_18 + 0xf0))(local_18,uVar2);
  FUN_0041d630(uVar1);
  FUN_00414b90(param_1 + 0x5b0,local_10);
  FUN_00655750(param_1);
  FUN_0041b800(&local_18);
  FUN_00414520(&local_10);
  return;
}

