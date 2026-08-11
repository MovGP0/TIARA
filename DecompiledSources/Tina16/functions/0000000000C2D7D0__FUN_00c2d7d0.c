/* Ghidra address: 00c2d7d0 */
/* Ghidra symbol: FUN_00c2d7d0 */


void FUN_00c2d7d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 local_20 [2];
  char local_9;
  
  local_20[0] = 0;
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2,&local_9,1);
  if ((iVar1 == 1) && (local_9 != ';')) {
    FUN_0041ddd0(local_20,PTR_PTR_02002a80);
    FUN_00c1a780(param_1,1,local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

