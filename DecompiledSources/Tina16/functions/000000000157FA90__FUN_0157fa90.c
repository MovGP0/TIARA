/* Ghidra address: 0157fa90 */
/* Ghidra symbol: FUN_0157fa90 */


void FUN_0157fa90(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_30 = auStack_58;
  FUN_0157fc90(param_1);
  if (param_3 == '\x01') {
    local_1c = 0x20;
  }
  else if (param_3 == '\x02') {
    local_1c = 2;
  }
  else if (param_3 == '\x03') {
    local_1c = 0xff00;
  }
  else {
    uVar1 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_020014f0);
    FUN_004134c0(uVar1);
  }
  local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,(undefined2)local_1c);
  FUN_0157fb80(param_1,local_18,param_3);
  *(undefined8 *)(param_1 + 0x18) = local_18;
  return;
}

