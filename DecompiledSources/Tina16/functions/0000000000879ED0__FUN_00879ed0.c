/* Ghidra address: 00879ed0 */
/* Ghidra symbol: FUN_00879ed0 */


void FUN_00879ed0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0041ddd0(&local_18,PTR_PTR_02002b10);
  local_20 = 0x11;
  local_28 = param_1;
  FUN_00442f70(&local_10,local_18,&local_28,0);
  uVar1 = FUN_0086dfd0(&PTR_FUN_00879dc8,1,local_10);
  FUN_004134c0(uVar1);
  FUN_00414560(&local_18,2);
  return;
}

