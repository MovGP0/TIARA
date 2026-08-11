/* Ghidra address: 01716680 */
/* Ghidra symbol: FUN_01716680 */


void FUN_01716680(longlong param_1,undefined1 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_58;
  uVar2 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02004208 = uVar2;
  *(undefined1 *)(*(longlong *)PTR_DAT_02004208 + 0x6c1) = 0;
  FUN_008059a0(*(undefined8 *)PTR_DAT_02004208);
  if (param_3 == '\x03') {
    uVar2 = FUN_0171cea0(*(undefined8 *)(param_1 + 8));
    local_20 = (longlong *)FUN_0171d250(uVar2);
    while( true ) {
      cVar1 = thunk_FUN_0171d3c2(local_20);
      if (cVar1 == '\0') break;
      local_21 = FUN_0171d2a0(local_20);
      uVar2 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),local_21);
      FUN_017115e0(uVar2,param_2);
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
    FUN_01719a40(param_1);
    FUN_01719d10(param_1);
  }
  else {
    uVar2 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),param_3);
    FUN_017115e0(uVar2,param_2);
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02004208);
  *(undefined8 *)PTR_DAT_02004208 = 0;
  return;
}

