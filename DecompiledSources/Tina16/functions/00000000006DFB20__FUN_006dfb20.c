/* Ghidra address: 006dfb20 */
/* Ghidra symbol: FUN_006dfb20 */


void FUN_006dfb20(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_41;
  undefined8 local_40;
  int local_34 [2];
  char local_2a;
  char local_29;
  
  local_50 = auStack_78;
  local_29 = FUN_0065be20(*(undefined8 *)(param_1 + 8));
  if (local_29 != '\0') {
    FUN_006df690(param_1);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x58d) = 1;
  FUN_006ded30(param_1);
  FUN_004b84c0(param_2,&local_2a,1);
  if (local_2a == '\x01') {
    local_41 = 0;
  }
  else if (local_2a == '\x03') {
    local_41 = 4;
  }
  else {
    if (local_2a != '\x04') {
      FUN_006dfc90(0,local_50);
      return;
    }
    local_41 = 5;
  }
  FUN_004b84c0(param_2,local_34,4);
  local_34[1] = 0;
  if (-1 < local_34[0] + -1) {
    do {
      local_40 = FUN_006def00(param_1,0,0);
      FUN_006de460(local_40,param_2);
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = (code *)FUN_00411550(uVar1,0xffa5);
      (*pcVar2)(uVar1);
      local_34[0] = local_34[0] + -1;
    } while (local_34[0] != 0);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x58d) = 0;
  if (local_29 != '\0') {
    FUN_006df710(param_1);
  }
  return;
}

