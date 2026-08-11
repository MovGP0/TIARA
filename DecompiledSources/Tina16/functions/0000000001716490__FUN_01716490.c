/* Ghidra address: 01716490 */
/* Ghidra symbol: FUN_01716490 */


void FUN_01716490(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_21;
  longlong *local_20;
  
  local_30 = auStack_58;
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x88));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x90));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x98));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa0));
  uVar2 = FUN_0171cea0(*(undefined8 *)(param_1 + 8));
  local_20 = (longlong *)FUN_0171d250(uVar2);
  while( true ) {
    cVar1 = thunk_FUN_0171d3c2(local_20);
    if (cVar1 == '\0') break;
    local_21 = FUN_0171d2a0(local_20);
    if (local_21 != '\0') {
      uVar2 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),local_21);
      FUN_00410f20(uVar2);
    }
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  if ('\0' < param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

