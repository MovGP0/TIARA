/* Ghidra address: 00ea7520 */
/* Ghidra symbol: FUN_00ea7520 */


undefined8 FUN_00ea7520(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  lVar5 = FUN_00411460(*(undefined8 *)(param_1 + 0x28),&DAT_00ea69f0);
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  cVar2 = FUN_00ea4940(uVar1);
  if (cVar2 == '\0') {
    FUN_00ea47c0(uVar1,&local_38);
    FUN_00ea7370(param_2,*(undefined8 *)(param_1 + 0x28),local_38,0,0,0);
  }
  else {
    FUN_00ea47c0(uVar1,local_30);
    uVar3 = FUN_00ea4500(uVar1,0);
    uVar4 = FUN_00ea4460(uVar1,0);
    FUN_00ea7370(param_2,*(undefined8 *)(param_1 + 0x28),local_30[0],uVar3,uVar4,cVar2);
  }
  FUN_00414560(&local_38,2);
  return param_2;
}

