/* Ghidra address: 0065fdb0 */
/* Ghidra symbol: FUN_0065fdb0 */


void FUN_0065fdb0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_34 [12];
  undefined1 local_28 [16];
  
  FUN_004238d0(local_28,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 == '\0') {
    thunk_FUN_03998bad(param_2,local_28,1,0xf);
  }
  else {
    plVar2 = (longlong *)FUN_00781840();
    (**(code **)(*plVar2 + 0x228))(plVar2,local_34,1);
    uVar3 = FUN_00781840();
    FUN_00778d10(uVar3,param_2,local_34,local_28,4,0x100,0);
  }
  return;
}

