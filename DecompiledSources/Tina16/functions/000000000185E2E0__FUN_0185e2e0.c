/* Ghidra address: 0185e2e0 */
/* Ghidra symbol: FUN_0185e2e0 */


void FUN_0185e2e0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint local_130;
  undefined1 local_12c [256];
  uint local_2c [3];
  
  FUN_004b9ec0(*(undefined8 *)(param_1 + 0x10));
  FUN_0185e6a0(param_1,2,param_2 + 4);
  FUN_0185e6a0(param_1,2,param_2 + 8);
  FUN_0185e6a0(param_1,2,param_2 + 0xc);
  FUN_0185e6a0(param_1,2,param_2 + 0x10);
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 < 3) {
    local_2c[0] = 0;
  }
  else if (iVar1 < 5) {
    local_2c[0] = 1;
  }
  else if (iVar1 < 9) {
    local_2c[0] = 2;
  }
  else if (iVar1 < 0x11) {
    local_2c[0] = 3;
  }
  else if (iVar1 < 0x21) {
    local_2c[0] = 4;
  }
  else if (iVar1 < 0x41) {
    local_2c[0] = 5;
  }
  else if (iVar1 < 0x81) {
    local_2c[0] = 6;
  }
  else if (iVar1 < 0x101) {
    local_2c[0] = 7;
  }
  else {
    local_2c[0] = 7;
  }
  if (*(char *)(param_2 + 0x14) != '\0') {
    local_2c[0] = local_2c[0] | 0x80;
  }
  if (*(char *)(param_2 + 0x15) != '\0') {
    local_2c[0] = local_2c[0] | 0x40;
  }
  if (*(char *)(param_2 + 0x16) != '\0') {
    local_2c[0] = local_2c[0] | 0x20;
  }
  FUN_0185e6a0(param_1,1,local_2c);
  if (*(char *)(param_2 + 0x14) != '\0') {
    FUN_0185de30(param_1,*(undefined4 *)(param_2 + 0x1c));
  }
  FUN_0185e6a0(param_1,1,param_2 + 0x20);
  FUN_0185ed40(param_1,param_2);
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x10),0);
  while( true ) {
    lVar3 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
    lVar4 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
    if (lVar4 <= lVar3) break;
    iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
    iVar2 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
    local_2c[0] = iVar1 - iVar2;
    if (0xff < (int)local_2c[0]) {
      local_2c[0] = 0xff;
    }
    local_130 = local_2c[0];
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
              (*(longlong **)(param_1 + 0x10),local_12c,local_2c[0]);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),&local_130,1);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
              (*(longlong **)(param_1 + 8),local_12c,local_2c[0]);
  }
  local_2c[0] = 0;
  FUN_0185e6a0(param_1,1,local_2c);
  return;
}

