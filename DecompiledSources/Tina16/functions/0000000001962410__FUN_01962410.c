/* Ghidra address: 01962410 */
/* Ghidra symbol: FUN_01962410 */


void FUN_01962410(longlong param_1)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0195c180(param_1);
  cVar1 = FUN_0195b980(param_1);
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x308) + 0x38))(*(longlong **)(param_1 + 0x308),local_20)
    ;
    FUN_00414b90(param_1 + 0x338,local_20[0]);
  }
  FUN_019816a0(&PTR_FUN_019185f0,*(undefined8 *)(param_1 + 0x330));
  FUN_00414520(local_20);
  return;
}

