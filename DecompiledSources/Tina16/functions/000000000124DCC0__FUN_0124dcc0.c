/* Ghidra address: 0124dcc0 */
/* Ghidra symbol: FUN_0124dcc0 */


undefined8 FUN_0124dcc0(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_24 = 0x7fffffff;
  local_28 = 0x7fffffff;
  local_2c = 0x80000001;
  local_30 = 0x80000001;
  (**(code **)(*param_1 + 0x100))(param_1,local_20,L"type");
  uVar1 = FUN_0124ce70(local_20[0],param_1,&local_24,&local_28,&local_2c,&local_30);
  FUN_00414480(local_20);
  return uVar1;
}

