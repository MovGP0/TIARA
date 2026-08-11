/* Ghidra address: 00cd34b0 */
/* Ghidra symbol: FUN_00cd34b0 */


double FUN_00cd34b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a [9];
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    dVar3 = 0.0;
  }
  else {
    uVar2 = FUN_00ca5460(*(longlong *)(param_1 + 0x20));
    dVar3 = 0.0;
    iVar1 = FUN_00ca4fc0(uVar2,local_1a,&local_1c,&local_1e,&local_20,&local_22,&local_24,local_28,
                         local_2c);
    if (0 < iVar1) {
      dVar4 = (double)FUN_00448c80(local_1a[0],local_1c,local_1e);
      dVar5 = (double)FUN_00448a90(local_20,local_22,local_24,0);
      dVar3 = (double)FUN_0089ff20();
      dVar3 = (dVar4 + dVar5) - dVar3;
    }
  }
  return dVar3;
}

