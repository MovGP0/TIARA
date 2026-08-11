/* Ghidra address: 01539f10 */
/* Ghidra symbol: FUN_01539f10 */


void FUN_01539f10(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  double *pdVar2;
  undefined4 uVar3;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40 [8];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  pdVar2 = &local_38;
  FUN_01539b90(param_1,&local_20,&local_28,&local_30,pdVar2,local_40,&local_41,&local_42,&local_43,
               &local_44);
  uVar3 = (undefined4)((ulonglong)pdVar2 >> 0x20);
  FUN_00b95290(param_2);
  FUN_01d3aad0(param_2,0,local_41);
  FUN_01d3aad0(param_2,local_20,local_43);
  FUN_01d3aad0(param_2,local_20 + local_38 / local_30,local_44);
  if ((local_28 - local_20) * 2.0 * local_30 + 4.0 <= (double)param_3) {
    iVar1 = FUN_0040c770((local_28 - local_20) * local_30);
    iVar1 = iVar1 + 1;
  }
  else {
    local_28 = (double)(param_3 + -4) / (local_30 * 2.0) + local_20;
    iVar1 = FUN_0040c770((double)param_3 / 2.0 - 1.0);
    iVar1 = iVar1 + -4;
  }
  FUN_01d3b2f0(param_2,local_20,local_20 + 1.0 / local_30,local_28,CONCAT44(uVar3,iVar1));
  FUN_01d3aad0(param_2,local_28,local_42);
  return;
}

