/* Ghidra address: 00446b30 */
/* Ghidra symbol: FUN_00446b30 */


void FUN_00446b30(longlong param_1,undefined2 param_2,short param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00446330(*(undefined8 *)(param_1 + 0x60),param_2);
  if ((param_3 == 0x2b) && (-1 < (int)param_5)) {
    FUN_00414b50(&local_18,&DAT_00446c78);
  }
  else if ((int)param_5 < 0) {
    FUN_00414b50(&local_18,&LAB_00446c88);
  }
  else {
    FUN_00414480(&local_18);
  }
  FUN_0043f750(&local_10,(param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f));
  iVar1 = 0;
  if (local_10 != 0) {
    iVar1 = *(int *)(local_10 + -4);
  }
  FUN_00417320(&local_28,0x30,param_4 - iVar1);
  FUN_00416cd0(&local_20,3,local_18,local_28,local_10);
  FUN_004463f0(*(undefined8 *)(param_1 + 0x60),local_20);
  FUN_00414560(&local_28,4);
  return;
}

