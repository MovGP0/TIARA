/* Ghidra address: 006fc890 */
/* Ghidra symbol: FUN_006fc890 */


void FUN_006fc890(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_38 [8];
  undefined1 local_30;
  undefined8 local_28;
  
  lVar3 = FUN_007017d0(param_1,0x417,(longlong)param_2,local_38);
  if (lVar3 != 0) {
    FUN_006fa0e0(local_28,local_30);
    iVar2 = FUN_006fa830(local_28);
    uVar1 = FUN_006f9f70(local_28);
    FUN_0064fca0(param_1,0x411,(longlong)iVar2,uVar1);
  }
  return;
}

