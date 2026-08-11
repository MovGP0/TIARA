/* Ghidra address: 010d5940 */
/* Ghidra symbol: FUN_010d5940 */


undefined1 FUN_010d5940(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40 [3];
  undefined1 local_21;
  undefined8 local_20;
  
  local_50 = auStack_78;
  local_40[0] = 0;
  local_20 = FUN_005ea470(&DAT_005e7878,1,0x2001f);
  FUN_005ea670(local_20,0xffffffff80000001);
  FUN_005ea880(local_20,L"Environment",0);
  if (param_2 == 0) {
    cVar1 = FUN_005ebec0(local_20,param_1);
    if (cVar1 != '\0') {
      FUN_005eaff0(local_20,param_1);
      local_21 = 0;
    }
  }
  else {
    FUN_005eb680(local_20,param_1,param_2);
    local_21 = 1;
  }
  FUN_00410f20(local_20);
  uVar2 = FUN_00416740(param_1);
  uVar3 = FUN_00416740(param_2);
  thunk_FUN_03f97ccc(uVar2,uVar3);
  FUN_00414480(local_40);
  return local_21;
}

