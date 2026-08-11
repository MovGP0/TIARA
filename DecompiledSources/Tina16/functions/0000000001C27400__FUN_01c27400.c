/* Ghidra address: 01c27400 */
/* Ghidra symbol: FUN_01c27400 */


undefined8 FUN_01c27400(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (-1 < param_2) {
    iVar1 = FUN_01c273c0(param_1);
    if (param_2 < iVar1) {
      local_20 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),param_2);
      goto code_r0x01c2748b;
    }
  }
  FUN_0043f750(&local_18,param_2);
  FUN_00416ba0(&local_10,L"index out of bounds: ",local_18);
  uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
  FUN_004134c0(uVar2);
code_r0x01c2748b:
  FUN_00414560(&local_18,2);
  return local_20;
}

