/* Ghidra address: 0147c530 */
/* Ghidra symbol: FUN_0147c530 */


undefined8 FUN_0147c530(undefined8 param_1)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  FUN_0147c450(&local_10);
  FUN_00416cd0(&local_28,3,L"h32oN3jyQYVrBEg3hyIw8C2L",local_10,L"h32oN3jyQYVrBEg3hyIw8C2L");
  FUN_0147c4c0(local_20,local_28);
  FUN_00416cd0(param_1,3,local_10,&DAT_0147c618,local_20[0]);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return param_1;
}

