/* Ghidra address: 007293e0 */
/* Ghidra symbol: FUN_007293e0 */


undefined8 FUN_007293e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *(undefined8 *)PTR_DAT_02004df8;
  uStack_30 = *(undefined8 *)(PTR_DAT_02004df8 + 8);
  FUN_0043dd70(local_48,L"{D57C7288-D4AD-4768-BE02-9D969532D960}");
  uVar1 = FUN_0041b800(param_2);
  thunk_FUN_041d73d1(&local_38,0,1,local_48,uVar1);
  return param_2;
}

