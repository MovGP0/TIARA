/* Ghidra address: 00c69b20 */
/* Ghidra symbol: FUN_00c69b20 */


void FUN_00c69b20(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  uVar3 = FUN_0064acf0(*(longlong *)(param_1 + 0x6b0) + 200,1);
  iVar1 = FUN_006fa830(uVar3);
  if (-1 < iVar1) {
    FUN_0064dd90(uVar3,&local_28);
    FUN_00416ba0(&local_20,L"Are you sure you want to delete this place?\rPlace: ",local_28);
    uVar4 = FUN_00416740(local_20);
    iVar2 = FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar4,L"Place bar",0x24);
    if (iVar2 == 6) {
      FUN_004b25e0(*(undefined8 *)(param_1 + 0x6e8),iVar1);
      FUN_00654af0(*(undefined8 *)(param_1 + 0x6d8),uVar3);
      FUN_00410f20(uVar3);
    }
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_20);
  return;
}

