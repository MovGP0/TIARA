/* Ghidra address: 01625c20 */
/* Ghidra symbol: FUN_01625c20 */


void FUN_01625c20(undefined4 param_1,int param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 < 1) {
    FUN_015f9410(&local_10,param_1);
    uVar2 = 0;
    FUN_00416cd0(&local_10,5,&DAT_01625d34,*(undefined8 *)(param_3 + 0x13978),&DAT_01625d34,
                 &LAB_01625d44,local_10);
    uVar1 = FUN_015748d0(&PTR_FUN_015726b8,1,param_1,local_10,uVar2 & 0xffffffff00000000);
    FUN_004134c0(uVar1);
  }
  else {
    uVar1 = FUN_01574780(&PTR_FUN_015726b8,1,param_1,param_2,*(undefined8 *)(param_3 + 0x13970),
                         *(undefined8 *)(param_3 + 0x13978));
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

