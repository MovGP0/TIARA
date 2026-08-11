/* Ghidra address: 0040bed0 */
/* Ghidra symbol: FUN_0040bed0 */


double FUN_0040bed0(undefined8 param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined8 local_38;
  undefined8 local_30 [5];
  
  dVar2 = (double)FUN_0040c850(param_1);
  if (0.7853981633974483 <= dVar2) {
    iVar1 = FUN_0040b760(param_1,local_30,&local_38);
    if (iVar1 == 0) {
      dVar3 = (double)FUN_0040bc10(local_30[0],local_38);
      dVar2 = (double)FUN_0040bb40(local_30[0],local_38);
      dVar3 = dVar3 / dVar2;
    }
    else if (iVar1 == 1) {
      dVar3 = (double)FUN_0040bb40(local_30[0],local_38);
      dVar2 = (double)FUN_0040bc10(local_30[0],local_38);
      dVar3 = dVar3 / -dVar2;
    }
    else if (iVar1 == 2) {
      dVar2 = (double)FUN_0040bc10(local_30[0],local_38);
      dVar3 = (double)FUN_0040bb40(local_30[0],local_38);
      dVar3 = -dVar2 / -dVar3;
    }
    else if (iVar1 == 3) {
      dVar2 = (double)FUN_0040bb40(local_30[0],local_38);
      dVar3 = (double)FUN_0040bc10(local_30[0],local_38);
      dVar3 = -dVar2 / dVar3;
    }
    else {
      dVar3 = 0.0;
    }
  }
  else {
    dVar3 = (double)FUN_0040bc10(param_1,0);
    dVar2 = (double)FUN_0040bb40(param_1,0);
    dVar3 = dVar3 / dVar2;
  }
  return dVar3;
}

