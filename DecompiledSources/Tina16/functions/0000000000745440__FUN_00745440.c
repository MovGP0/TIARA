/* Ghidra address: 00745440 */
/* Ghidra symbol: FUN_00745440 */


undefined1 FUN_00745440(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_31;
  int local_30 [2];
  undefined1 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_31 = 0;
  if (param_2 < 0) {
    bVar1 = false;
  }
  else {
    bVar1 = param_2 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x10) + 0x10);
  }
  if (bVar1) {
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x10) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = FUN_00746ff0(*(undefined8 *)(param_1 + 0x4c0),iVar4,param_2);
        if (lVar2 != 0) goto LAB_0074551a;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_31 = 1;
  }
  else {
    FUN_0041ddd0(&local_20,PTR_PTR_02004128);
    local_28 = 0;
    local_30[0] = param_2;
    uVar3 = FUN_0044d530(&PTR_FUN_00737098,1,local_20,local_30,0);
    FUN_004134c0(uVar3);
  }
LAB_0074551a:
  FUN_00414480(&local_20);
  return local_31;
}

