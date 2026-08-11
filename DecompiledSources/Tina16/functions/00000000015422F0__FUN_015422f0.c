/* Ghidra address: 015422f0 */
/* Ghidra symbol: FUN_015422f0 */


int FUN_015422f0(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_2c [3];
  
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  uVar2 = FUN_01d03160(param_2);
  cVar1 = FUN_015419f0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,local_2c,param_4,param_5,
                       param_6);
  (**(code **)(*param_2 + 0x1f0))(param_2,param_3 + -1,param_5,param_6);
  if (cVar1 == '\0') {
    FUN_01d43440(local_40,uVar2);
    FUN_00416ad0(local_40,L": not registered");
    FUN_016fd940(local_40[0]);
  }
  else if (local_2c[0] == 4) {
    FUN_01d43440(&local_50,param_3);
    FUN_01d43440(&local_58,uVar2);
    FUN_00416cd0(&local_48,4,L"io_typ_undefined; port:",local_50,L", comp_id: ",local_58);
    FUN_016fd940(local_48);
  }
  FUN_00414560(&local_58,4);
  return local_2c[0];
}

