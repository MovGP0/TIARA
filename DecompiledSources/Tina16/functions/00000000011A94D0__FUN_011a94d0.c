/* Ghidra address: 011a94d0 */
/* Ghidra symbol: FUN_011a94d0 */


void FUN_011a94d0(longlong param_1)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  if (*(longlong *)PTR_DAT_02004ae8 != 0) {
    if (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) < 7) {
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02004ae8 + 0x6d8),1);
    }
    if (*(char *)(*(longlong *)PTR_DAT_02004ae8 + 0x42038) == '\0') {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),L"Maxterm");
      iVar1 = 0;
      if (*(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x798) != 0) {
        iVar1 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x798) + -4);
      }
      FUN_00416dc0(&local_38,*(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x798),1,iVar1 + -1);
      FUN_00b971a0(&local_30,local_38);
      FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_02002860,&DAT_011a9714,local_30);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_28);
    }
    else {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),L"Minterm");
      iVar1 = 0;
      if (*(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x790) != 0) {
        iVar1 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x790) + -4);
      }
      FUN_00416dc0(&local_20,*(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x790),1,iVar1 + -1);
      FUN_00b971a0(&local_18,local_20);
      FUN_00416cd0(&local_10,3,*(undefined8 *)PTR_DAT_02002860,&DAT_011a9714,local_18);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_10);
    }
  }
  FUN_00414560(&local_38,6);
  return;
}

