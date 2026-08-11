/* Ghidra address: 01cf0710 */
/* Ghidra symbol: FUN_01cf0710 */


void FUN_01cf0710(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 local_1a;
  
  iVar1 = FUN_01d31a40(*param_2);
  if (iVar1 == 0) {
    local_1a = *(undefined2 *)(param_1 + 0xc);
    FUN_01d311c0(*param_2,&local_1a,2);
    local_1a = *(undefined2 *)(param_1 + 0x10);
    FUN_01d311c0(*param_2,&local_1a,2);
  }
  return;
}

