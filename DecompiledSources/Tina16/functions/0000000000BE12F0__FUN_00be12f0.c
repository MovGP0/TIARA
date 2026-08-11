/* Ghidra address: 00be12f0 */
/* Ghidra symbol: FUN_00be12f0 */


void FUN_00be12f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_38 [28];
  undefined4 local_1c [3];
  
  FUN_00be1ec0(local_38,param_2,0,1,0xffffffff);
  cVar1 = FUN_00be4670(*(undefined8 *)(param_1 + 0x20),local_38,local_1c);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_00599af0(*(longlong *)(param_1 + 0x20) + 8,local_1c[0],5);
  }
  return;
}

