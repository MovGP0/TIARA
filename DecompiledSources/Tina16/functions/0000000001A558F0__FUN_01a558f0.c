/* Ghidra address: 01a558f0 */
/* Ghidra symbol: FUN_01a558f0 */


undefined8 FUN_01a558f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_70 = auStack_98;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414480(param_2);
  FUN_01a55000(param_1,local_10,L"\\Clock generators",0);
  FUN_01a55000(param_1,local_10,L"\\Oscillators",0);
  FUN_004b37d0(local_10,&local_38);
  FUN_00414ad0(param_2,local_38);
  FUN_00410f20(local_10);
  FUN_00414560(&local_50,8);
  return param_2;
}

