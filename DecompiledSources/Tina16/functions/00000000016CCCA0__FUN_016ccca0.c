/* Ghidra address: 016ccca0 */
/* Ghidra symbol: FUN_016ccca0 */


void FUN_016ccca0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_016a1500);
  if (cVar1 != '\0') {
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x1f8) + 8) + -0x10 +
     (longlong)*(int *)(param_1 + 0x1bc) * 0x10) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x28);
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x1f8) + 8) + -8 +
     (longlong)*(int *)(param_1 + 0x1bc) * 0x10) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x28);
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
  }
  return;
}

