/* Ghidra address: 00d42670 */
/* Ghidra symbol: FUN_00d42670 */


undefined8 FUN_00d42670(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  cVar2 = FUN_00787a60(uVar1);
  if (cVar2 == '\x01') {
    iVar3 = FUN_00787fa0(uVar1);
    FUN_00787f40(uVar1,&local_40);
    iVar5 = FUN_005fdff0(param_3,local_40);
    iVar6 = FUN_00787fa0(uVar1);
    FUN_00787f40(uVar1,&local_48);
    uVar4 = FUN_005fdfd0(param_3,local_48);
    FUN_004238d0(param_2,(iVar3 - iVar5) + -0xc,0,iVar6 + -0xc,uVar4);
  }
  else {
    FUN_00787f40(uVar1,&local_30);
    iVar3 = FUN_005fdff0(param_3,local_30);
    FUN_00787f40(uVar1,&local_38);
    uVar4 = FUN_005fdfd0(param_3,local_38);
    FUN_004238d0(param_2,0xc,0,iVar3 + 0xc,uVar4);
  }
  FUN_00414560(&local_48,4);
  return param_2;
}

