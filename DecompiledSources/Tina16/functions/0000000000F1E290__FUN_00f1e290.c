/* Ghidra address: 00f1e290 */
/* Ghidra symbol: FUN_00f1e290 */


ulonglong FUN_00f1e290(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *local_20;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b67b0(local_20,1);
    FUN_00f1df90(param_1,&local_20);
    iVar1 = (**(code **)(*local_20 + 0xc0))(local_20,param_2);
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),iVar1 != -1);
    FUN_00410f20(local_20);
  }
  return uVar2 & 0xffffffff;
}

