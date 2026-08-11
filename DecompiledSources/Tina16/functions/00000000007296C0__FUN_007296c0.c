/* Ghidra address: 007296c0 */
/* Ghidra symbol: FUN_007296c0 */


undefined8 FUN_007296c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *(undefined8 *)PTR_DAT_02003120;
  uStack_30 = *(undefined8 *)(PTR_DAT_02003120 + 8);
  FUN_0043dd70(local_48,L"{84BCCD23-5FDE-4CDB-AEA4-AF64B83D78AB}");
  uVar1 = FUN_0041b800(param_2);
  thunk_FUN_041d73d1(&local_38,0,1,local_48,uVar1);
  return param_2;
}

