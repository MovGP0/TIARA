/* Ghidra address: 004c8440 */
/* Ghidra symbol: FUN_004c8440 */


void FUN_004c8440(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int local_120;
  undefined1 local_119;
  undefined1 local_118 [256];
  
  if (param_2 == 0) {
    local_120 = 0;
    FUN_004c3930(param_1,&local_120,1);
  }
  else {
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = *(undefined4 *)(param_2 + -4);
    }
    uVar1 = FUN_00416740(param_2);
    local_120 = FUN_0041de60(0xfde9,0,uVar1,uVar2,local_118,0xff,0,0);
    if (0xff < local_120) {
      local_120 = 0xff;
    }
    local_119 = (undefined1)local_120;
    FUN_004c3930(param_1,&local_119,(longlong)(local_120 + 1));
  }
  return;
}

