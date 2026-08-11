/* Ghidra address: 00658a80 */
/* Ghidra symbol: FUN_00658a80 */


undefined8 FUN_00658a80(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_b0 [92];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar3 = 0;
  uVar2 = FUN_0065b870(param_1);
  iVar1 = FUN_00665100(uVar2);
  if (iVar1 != 0) {
    local_54 = 2;
    local_50 = param_3;
    local_4c = param_4;
    FUN_00665150(iVar1,&local_54);
    if (param_2 != 0) {
      uVar2 = FUN_005fc8c0(param_2);
      thunk_FUN_03d2c01a(uVar2,0x5c,local_b0);
      FUN_00665190(iVar1,local_b0);
    }
    uVar2 = FUN_0065b870(param_1);
    FUN_00665120(uVar2,iVar1);
    uVar3 = 1;
  }
  return uVar3;
}

