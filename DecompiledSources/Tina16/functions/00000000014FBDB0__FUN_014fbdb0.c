/* Ghidra address: 014fbdb0 */
/* Ghidra symbol: FUN_014fbdb0 */


void FUN_014fbdb0(longlong param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined4 local_20;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  local_20 = 0;
  FUN_01aa18d0(param_1 + 0x568,4,&local_20);
  puVar1 = (undefined2 *)
           FUN_01cfde70(*(undefined8 *)(param_1 + 0x550),2,1,&local_1a,&local_1b,local_19);
  *puVar1 = (undefined2)local_20;
  if (*PTR_DAT_020035d0 != '\0') {
    uVar2 = FUN_019a45d0();
    uVar2 = FUN_0198d430(uVar2);
    FUN_01d04aa0(*(undefined8 *)(param_1 + 0x550),uVar2);
  }
  return;
}

