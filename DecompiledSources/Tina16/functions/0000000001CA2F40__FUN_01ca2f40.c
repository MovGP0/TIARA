/* Ghidra address: 01ca2f40 */
/* Ghidra symbol: FUN_01ca2f40 */


undefined8 FUN_01ca2f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = 0;
  puVar1 = (undefined8 *)FUN_01c988d0(param_1,param_3);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_00414ad0(param_2,L"noname");
  }
  else {
    FUN_00414ad0(param_2,*puVar1);
  }
  FUN_00414480(&local_10);
  return param_2;
}

