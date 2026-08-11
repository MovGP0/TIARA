/* Ghidra address: 01625d50 */
/* Ghidra symbol: FUN_01625d50 */


void FUN_01625d50(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  ulonglong uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar2 = 0;
  FUN_00416cd0(&local_10,5,&DAT_01625e24,*(undefined8 *)(param_2 + 0x13978),&DAT_01625e24,
               &LAB_01625e34,local_res8[0]);
  uVar1 = FUN_015748d0(&PTR_FUN_015726b8,1,0,local_10,uVar2 & 0xffffffff00000000);
  FUN_004134c0(uVar1);
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return;
}

