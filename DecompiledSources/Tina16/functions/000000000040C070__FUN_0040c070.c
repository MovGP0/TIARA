/* Ghidra address: 0040c070 */
/* Ghidra symbol: FUN_0040c070 */


void FUN_0040c070(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  int iVar1;
  double dVar2;
  ulonglong uVar3;
  undefined8 local_38;
  undefined8 local_30 [3];
  
  dVar2 = (double)FUN_0040c850(param_1);
  if (0.7853981633974483 <= dVar2) {
    iVar1 = FUN_0040b760(param_1,local_30,&local_38);
    if (iVar1 == 0) {
      uVar3 = FUN_0040bc10(local_30[0],local_38);
      *param_2 = uVar3;
      uVar3 = FUN_0040bb40(local_30[0],local_38);
      *param_3 = uVar3;
    }
    else if (iVar1 == 1) {
      uVar3 = FUN_0040bb40(local_30[0],local_38);
      *param_2 = uVar3;
      uVar3 = FUN_0040bc10(local_30[0],local_38);
      *param_3 = uVar3 ^ 0x8000000000000000;
    }
    else if (iVar1 == 2) {
      uVar3 = FUN_0040bc10(local_30[0],local_38);
      *param_2 = uVar3 ^ 0x8000000000000000;
      uVar3 = FUN_0040bb40(local_30[0],local_38);
      *param_3 = uVar3 ^ 0x8000000000000000;
    }
    else if (iVar1 == 3) {
      uVar3 = FUN_0040bb40(local_30[0],local_38);
      *param_2 = uVar3 ^ 0x8000000000000000;
      uVar3 = FUN_0040bc10(local_30[0],local_38);
      *param_3 = uVar3;
    }
  }
  else {
    uVar3 = FUN_0040bc10(param_1,0);
    *param_2 = uVar3;
    uVar3 = FUN_0040bb40(param_1,0);
    *param_3 = uVar3;
  }
  return;
}

