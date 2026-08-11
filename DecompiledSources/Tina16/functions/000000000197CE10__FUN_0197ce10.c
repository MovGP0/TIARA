/* Ghidra address: 0197ce10 */
/* Ghidra symbol: FUN_0197ce10 */


undefined8 FUN_0197ce10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (*(char *)(param_1 + 0xd2) == '\x01') {
    uVar3 = FUN_0180bfb0();
    FUN_01809b60(uVar3,&local_28,L"clComprPreparedRepFilter");
    FUN_00414ad0(param_1 + 0xb0,local_28);
  }
  else {
    uVar3 = FUN_0180bfb0();
    FUN_01809b60(uVar3,local_20,L"dsComprRepFilter");
    FUN_00414ad0(param_1 + 0xb0,local_20[0]);
  }
  iVar1 = FUN_004170c0(&DAT_0197cfb8,*(undefined8 *)(param_1 + 0xb0),1);
  uVar2 = FUN_00414cb0(*(undefined8 *)(param_1 + 0xb0));
  FUN_00416dc0(param_1 + 0xa0,*(undefined8 *)(param_1 + 0xb0),iVar1 + 2,uVar2);
  FUN_0197a4c0(param_1,param_2);
  FUN_00414560(&local_28,2);
  return param_2;
}

