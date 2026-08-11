/* Ghidra address: 00a5b160 */
/* Ghidra symbol: FUN_00a5b160 */


undefined8 FUN_00a5b160(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_48 [64];
  
  FUN_00417580(local_48,&DAT_00a4d508);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_00a5b9f0(param_1,local_48);
    uVar1 = FUN_00a4dd90();
    uVar1 = FUN_00a4e550(uVar1,local_48);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_00417740(local_48,&DAT_00a4d508);
  return uVar1;
}

