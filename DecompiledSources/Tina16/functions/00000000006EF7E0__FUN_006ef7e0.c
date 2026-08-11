/* Ghidra address: 006ef7e0 */
/* Ghidra symbol: FUN_006ef7e0 */


undefined8 FUN_006ef7e0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_006eeda0(param_1);
  uVar1 = FUN_006ef6e0(param_1);
  FUN_00611d40(uVar2,uVar1,param_2,*(undefined4 *)(&DAT_01e011bc + (param_3 & 0xff) * 4));
  return param_2;
}

