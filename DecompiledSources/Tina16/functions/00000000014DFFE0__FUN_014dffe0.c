/* Ghidra address: 014dffe0 */
/* Ghidra symbol: FUN_014dffe0 */


void FUN_014dffe0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [268];
  undefined1 local_c [4];
  
  local_120 = 0;
  local_128 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_016a0e58);
  if (cVar1 != '\0') {
    FUN_004151b0(local_118,*(undefined1 **)(param_2 + 8),2,**(undefined1 **)(param_2 + 8));
    FUN_004154b0(&local_120,local_118,0);
    FUN_00416880(&local_128,local_120);
    iVar2 = FUN_0040e860(local_128,local_c);
    *(undefined8 *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
         *(undefined8 *)(param_2 + 0x28);
  }
  FUN_00414480(&local_128);
  FUN_004144d0(&local_120);
  return;
}

