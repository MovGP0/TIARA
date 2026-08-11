/* Ghidra address: 0172d7d0 */
/* Ghidra symbol: FUN_0172d7d0 */


void FUN_0172d7d0(undefined4 param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0172bb90(&PTR_FUN_01729478,CONCAT71((int7)(param_3 >> 8),1) & 0xffffffff,param_1,
                       param_2,*(undefined8 *)PTR_DAT_02001f18,0);
  FUN_0172ca20(uVar1,param_4,param_3 & 0xffffffff,param_5);
  FUN_00410f20(uVar1);
  return;
}

