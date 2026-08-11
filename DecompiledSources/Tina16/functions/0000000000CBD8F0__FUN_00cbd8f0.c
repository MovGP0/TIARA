/* Ghidra address: 00cbd8f0 */
/* Ghidra symbol: FUN_00cbd8f0 */


void FUN_00cbd8f0(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x100);
  if (plVar1 == (longlong *)0x0) {
    if (param_2 != '\0') {
      FUN_0041ddd0(local_20,PTR_PTR_02002a48);
      uVar2 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_20[0]);
      FUN_004134c0(uVar2);
    }
  }
  else {
    (**(code **)(*plVar1 + 0x110))(plVar1,param_2,0);
  }
  FUN_00414480(local_20);
  return;
}

