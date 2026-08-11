/* Ghidra address: 00eadc90 */
/* Ghidra symbol: FUN_00eadc90 */


void FUN_00eadc90(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_res8 [4];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00416cd0(&local_38,3,&DAT_00eadeac,local_res8[0],L".PCB");
  cVar1 = FUN_00eb00d0(DAT_0202ea78,local_res8[0],&local_30);
  if (cVar1 == '\0') {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00eab220(plVar3,local_38);
    local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar2 = (**(code **)(*plVar3 + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,iVar5);
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,iVar5);
        uVar4 = FUN_00eadc00(local_48);
        (**(code **)(*local_30 + 0x80))(local_30,local_40,uVar4);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (DAT_0202ea70 == 0) {
      FUN_00416cd0(&local_50,5,*(undefined8 *)PTR_DAT_02004438,local_38,&DAT_00eadeac,L"TINA",
                   L".def");
      DAT_0202ea70 = FUN_005dc9d0(&PTR_FUN_005d4e78,1,local_50);
    }
    FUN_00410f20(plVar3);
    FUN_00eafe60(DAT_0202ea78,local_res8[0],local_30);
    if (DAT_0202ea68 == (longlong *)0x0) {
      DAT_0202ea68 = local_30;
    }
  }
  FUN_00414560(&local_50,4);
  FUN_00414480(local_res8);
  return;
}

