/* Ghidra address: 0104e680 */
/* Ghidra symbol: FUN_0104e680 */


void FUN_0104e680(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30[0] = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  uVar1 = FUN_0104e650(param_1);
  FUN_0043f750(&local_18,uVar1);
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,local_30,0x3e5);
  FUN_00416cd0(&local_10,3,local_30[0],&LAB_0104e768,local_18);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x8c0),local_10);
  FUN_00414480(local_30);
  FUN_00414560(&local_20,3);
  return;
}

