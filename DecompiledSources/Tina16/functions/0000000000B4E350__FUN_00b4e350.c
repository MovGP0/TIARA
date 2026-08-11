/* Ghidra address: 00b4e350 */
/* Ghidra symbol: FUN_00b4e350 */


undefined8 FUN_00b4e350(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (-1 < param_2) {
    iVar1 = FUN_00b1ae60(*(undefined8 *)(param_1 + 0x18));
    if (param_2 < iVar1) {
      local_20 = FUN_00b1ae70(*(undefined8 *)(param_1 + 0x18),param_2);
      goto code_r0x00b4e3f0;
    }
  }
  FUN_0043f750(&local_18,param_2);
  FUN_00416cd0(&local_10,3,L"List index (",local_18,L") out of bounds");
  uVar2 = FUN_0044d490(&PTR_FUN_004355d0,1,local_10);
  FUN_004134c0(uVar2);
code_r0x00b4e3f0:
  FUN_00414560(&local_18,2);
  return local_20;
}

