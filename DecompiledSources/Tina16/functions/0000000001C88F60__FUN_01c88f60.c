/* Ghidra address: 01c88f60 */
/* Ghidra symbol: FUN_01c88f60 */


void FUN_01c88f60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_016ed7b0(param_2,6);
    FUN_00b8fd60(&local_28,uVar1,2,0,1);
    FUN_00416ba0(local_20,L" t = ",local_28);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x1550),local_20[0]);
    FUN_00b8fd60(&local_38,*(undefined8 *)(param_2 + 0xf20),2,0,1);
    FUN_00416cd0(&local_30,3,L" Tsim = ",local_38,&DAT_01c890c0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x1558),local_30);
  }
  FUN_00414560(&local_38,4);
  return;
}

