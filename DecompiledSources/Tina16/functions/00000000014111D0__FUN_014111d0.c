/* Ghidra address: 014111d0 */
/* Ghidra symbol: FUN_014111d0 */


undefined4 FUN_014111d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0064dd90(param_2,&local_10);
  cVar1 = FUN_014089a0(local_10,1,*(undefined4 *)(param_1 + 0x7b4));
  if (cVar1 == '\0') {
    FUN_0064dd90(param_3,&local_18);
    FUN_00416ad0(&local_18,L" invalid value!");
    FUN_01411130(param_1,local_18);
  }
  else {
    FUN_0064dd90(param_2,&local_20);
    local_24 = FUN_01408880(local_20,1);
  }
  FUN_00414560(&local_20,3);
  return local_24;
}

