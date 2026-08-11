/* Ghidra address: 0084f680 */
/* Ghidra symbol: FUN_0084f680 */


void FUN_0084f680(longlong *param_1,short *param_2,short param_3)

{
  undefined8 uVar1;
  
  if ((((char)param_1[0xa6] == '\x01') && (*param_2 == 0xd)) && (param_3 == 4)) {
    (**(code **)(*param_1 + 0x2e8))(param_1);
    uVar1 = FUN_0065b870(param_1);
    FUN_0083db90(uVar1,0x102);
  }
  else {
    FUN_0083e0a0(param_1,param_2,param_3);
  }
  return;
}

