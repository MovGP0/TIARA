/* Ghidra address: 00be0dc0 */
/* Ghidra symbol: FUN_00be0dc0 */


void FUN_00be0dc0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  int local_2c [3];
  
  FUN_00be1d50(&local_40,param_3,param_4,param_2,0xffffffff,0);
  cVar2 = FUN_00be0d70(param_1,param_3,local_2c);
  if (cVar2 == '\0') {
    FUN_0059a1a0(*(longlong *)(param_1 + 0x10) + 8,local_2c[0],&local_40);
  }
  else {
    puVar1 = (undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + (longlong)local_2c[0] * 0x14);
    *puVar1 = local_40;
    puVar1[1] = uStack_38;
    *(undefined4 *)(puVar1 + 2) = uStack_30;
  }
  return;
}

