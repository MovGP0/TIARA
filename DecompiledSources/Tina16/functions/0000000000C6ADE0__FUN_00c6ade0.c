/* Ghidra address: 00c6ade0 */
/* Ghidra symbol: FUN_00c6ade0 */


void FUN_00c6ade0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (param_3 == '\0') {
    uVar1 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x78) + 0x78) + 0x78);
    cVar2 = FUN_004113d0(uVar1,&PTR_FUN_00c68b38);
    if (cVar2 != '\0') {
      uVar3 = FUN_006fa830(param_1);
      FUN_00c69250(uVar1,uVar3);
    }
  }
  return;
}

