/* Ghidra address: 01a9e0e0 */
/* Ghidra symbol: FUN_01a9e0e0 */


void FUN_01a9e0e0(undefined8 param_1,double param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 local_4e;
  ushort local_4c;
  undefined2 local_4a [29];
  
  uVar1 = FUN_005fbf20();
  FUN_00b90650(0x406fe00000000000,(double)(uVar1 & 0xff) * param_2);
  FUN_0040c770();
  FUN_00b90650(0x406fe00000000000,(double)(uVar1 >> 8 & 0xff) * param_2);
  FUN_0040c770();
  FUN_00b90650(0x406fe00000000000,(double)(uVar1 >> 0x10 & 0xff) * param_2);
  FUN_0040c770();
  FUN_00635080(uVar1,local_4a,&local_4c,&local_4e);
  uVar2 = FUN_0040c770((double)local_4c * param_2);
  FUN_00635590(local_4a[0],uVar2,local_4e);
  return;
}

