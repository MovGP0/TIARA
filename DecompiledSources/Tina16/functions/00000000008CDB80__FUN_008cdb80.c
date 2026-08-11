/* Ghidra address: 008cdb80 */
/* Ghidra symbol: FUN_008cdb80 */


undefined8 FUN_008cdb80(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM852");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"cp852");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,&DAT_008cdc44);
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csPCp852");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

